<%@ page import="java.io.*" %>
<%
    String name = request.getParameter("name");
    String ageStr = request.getParameter("age");
    int age = Integer.parseInt(ageStr);

    if (age < 18) {
        // Redirect to notAuthorized.jsp with name as parameter
        response.sendRedirect("notAuthorized.jsp?name=" + name);
    } else {
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Welcome</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background: linear-gradient(to right, #ffecd2, #fcb69f);
            text-align: center;
            padding-top: 100px;
        }
        h1 {
            color: #333;
            font-size: 36px;
        }
    </style>
</head>
<body>

    <h1>Welcome to this site, <%= name %>!</h1>

</body>
</html>
<%
    }
%>