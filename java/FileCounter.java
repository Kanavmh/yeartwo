import java.io.File;

public class FileCount {
    public static void main(String[] args) {
        File directory = new File("C:\\Folderpath");

        File[] files = directory.listFiles();
        int fileCount = 0;
        if (files != null) {
            for (File file : files) {
                if (file.isFile()) {
                    fileCount++;
                }
            }
        }

        System.out.println("Number of files in the directory: " + fileCount);
    }
}
