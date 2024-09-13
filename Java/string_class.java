public class string_class {

    void stringLength(String str)
    {
        System.out.println("Length of string "+str+"is: "+str.length());
    }

    void stringRemoveWS(String str)
    {
        str = str.replaceAll(" ", "");
        System.out.println("String without whitespaces is: "+str);
    }

    void stringUpperCase(String str)
    {
        System.out.println("Uppercase String: "+str.toUpperCase());
    }

    void stringLowerCase(String str)
    {
        System.out.println("Uppercase String: "+str.toLowerCase());
    }

    void countA(String str)
    {
        int count = 0;
        for(int i = 0; i < str.length();i++)
        {
            if(str.toLowerCase().charAt(i) == 'a')
            {
                count++;
            }
        }
        System.out.println("Number of 'a' in the string: "+count);
    }
    
}
