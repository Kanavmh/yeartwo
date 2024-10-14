let result = document.getElementById('displayBtn');
result.addEventListener('click', () => {
    let http = new XMLHttpRequest();
    http.open("GET", "https://fakestoreapi.com/products", true);

    http.onreadystatechange = function() {
        console.log("Ready State: " + http.readyState);
    };

    http.onload = function() {
        if (this.readyState == 4 && this.status == 200) {
            let objectData = JSON.parse(this.responseText);
            console.log(objectData);
            let tableData = document.getElementById('tableData');
            let data = `<thead>
             <th>Title</th> 
             <th>Price</th> 
             <th>Image</th>
             </thead>`;

            for(value in objectData){
                data += `<tr> 
                <td> ${objectData[value].title} </td>
                <td> ${objectData[value].price} </td>
                <td> <img src='${objectData[value].image}'> </td>
                </tr>`;
            }
            tableData.innerHTML = data;

        }
    };
    http.send();
});
