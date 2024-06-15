<<<<<<< HEAD
QUESTION-8  
In how many ways can a CSS be integrated as a web page?

ANSWER:-
CSS can be integrated into a web page in the following ways:

1. Inline CSS: You can use the style attribute directly in HTML tags to apply CSS styles inline. 
For example:
<p style="color: blue;">This is a paragraph with blue text.</p>

2. Internal CSS: You can define CSS styles within the <style> tag in the <head> section of an HTML document. 
For example:
<!DOCTYPE html>
<html>
<head>
  <style>
    p {
      color: red;
    }
  </style>
</head>
<body>
  <p>This is a paragraph with red text.</p>
</body>
</html>

3. External CSS: You can create a separate CSS file with extension and link it to your HTML document using the <link> tag. 
For example:
<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="styles.css">
</head>
<body>
  <p>This is a paragraph styled using an external CSS file.</p>
</body>
</html>
Each method has its own advantages and use cases, 
=======
QUESTION-8  
In how many ways can a CSS be integrated as a web page?

ANSWER:-
CSS can be integrated into a web page in the following ways:

1. Inline CSS: You can use the style attribute directly in HTML tags to apply CSS styles inline. 
For example:
<p style="color: blue;">This is a paragraph with blue text.</p>

2. Internal CSS: You can define CSS styles within the <style> tag in the <head> section of an HTML document. 
For example:
<!DOCTYPE html>
<html>
<head>
  <style>
    p {
      color: red;
    }
  </style>
</head>
<body>
  <p>This is a paragraph with red text.</p>
</body>
</html>

3. External CSS: You can create a separate CSS file with extension and link it to your HTML document using the <link> tag. 
For example:
<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="styles.css">
</head>
<body>
  <p>This is a paragraph styled using an external CSS file.</p>
</body>
</html>
Each method has its own advantages and use cases, 
>>>>>>> origin/main
but the recommended approach for larger projects is to use external CSS files to separate style definitions from the HTML content.