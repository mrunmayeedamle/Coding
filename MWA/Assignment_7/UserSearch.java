import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.DocumentBuilder;
import org.w3c.dom.*;

import java.io.File;
import java.util.Scanner;

public class UserSearch {
    public static void main(String[] args) {
        try {
            File inputFile = new File("users.xml"); // Make sure this path is correct
            Scanner scanner = new Scanner(System.in);

            System.out.print("Enter User ID to search: ");
            String userId = scanner.nextLine();

            DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
            Document doc = dBuilder.parse(inputFile);
            doc.getDocumentElement().normalize();

            NodeList userList = doc.getElementsByTagName("user");
            boolean found = false;

            for (int i = 0; i < userList.getLength(); i++) {
                Node userNode = userList.item(i);

                if (userNode.getNodeType() == Node.ELEMENT_NODE) {
                    Element userElement = (Element) userNode;
                    String id = userElement.getElementsByTagName("id").item(0).getTextContent();

                    if (id.equals(userId)) {
                        String name = userElement.getElementsByTagName("name").item(0).getTextContent();
                        String email = userElement.getElementsByTagName("email").item(0).getTextContent();
                        String phone = userElement.getElementsByTagName("phone").item(0).getTextContent();

                        System.out.println("\nUser Details:");
                        System.out.println("Name: " + name);
                        System.out.println("Email: " + email);
                        System.out.println("Phone: " + phone);

                        found = true;
                        break;
                    }
                }
            }

            if (!found) {
                System.out.println("User with ID " + userId + " not found.");
            }

            scanner.close();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}