#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Ingredient {
public:
    string name;
    double quantity;
    double costPerUnit;
    map<string, double> nutrition;

    Ingredient(const string& name, double quantity, double costPerUnit) :
        name(name), quantity(quantity), costPerUnit(costPerUnit) {}
};

class Meal {
public:
    string name;
    vector<Ingredient> ingredients;

    Meal(const string& name) : name(name) {}

    double calculateCost() const {
        double totalCost = 0.0;
        for (const Ingredient& ingredient : ingredients) {
            totalCost += ingredient.quantity * ingredient.costPerUnit;
        }
        return totalCost;
    }

    map<string, double> calculateNutrition() const {
        map<string, double> totalNutrition;
        for (const Ingredient& ingredient : ingredients) {
            for (const auto& nutrient : ingredient.nutrition) {
                totalNutrition[nutrient.first] += nutrient.second * ingredient.quantity;
            }
        }
        return totalNutrition;
    }
};

void addMeal(vector<Meal>& meals) {
    string name;
    cout << "Enter meal name: ";
    getline(cin, name);

    Meal meal(name);

    string ingredientName;
    double quantity, costPerUnit;
    while (true) {
        cout << "Enter ingredient name (or 'quit' to finish):" ;
        getline(cin, ingredientName);
        if (ingredientName == "quit") {
            break;
        }
        cout << "Enter quantity and cost per unit: ";
        cin >> quantity >> costPerUnit;
        cin.ignore();
        meal.ingredients.push_back(Ingredient(ingredientName, quantity, costPerUnit));
    }

    meals.push_back(meal);
}

void generateMealPlan(const vector<Meal>& meals) {}

void trackNutrition(const vector<Meal>& meals) {
    for (const Meal& meal : meals) {
        map<string, double> nutrition = meal.calculateNutrition();
        cout << meal.name << " nutrition:\n";
        for (const auto& nutrient : nutrition) {
            cout << nutrient.first << ": " << nutrient.second << endl;
        }
    }
}

void createGroceryList(const vector<Meal>& meals) {}

int main() {
    vector<Meal> meals;

    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Add meal\n";
        cout << "2. Generate meal plan\n";
        cout << "3. Track nutrition\n";
        cout << "4. Create grocery list\n";
        cout << "5. Quit\n";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addMeal(meals);
                break;
            case 2:
                generateMealPlan(meals);
                break;
            case 3:
                trackNutrition(meals);
                break;
            case 4:
                createGroceryList(meals);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
