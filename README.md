<h1> Passgen 1.0</h1>
<p>Frederico Brom 
Feb-2023</p>
<br>
<p>This program generate random passwords wich contains upper and lower case letters and special characters based on a control string. The control string is a string with special symbols each wich encode a class of character.</p>
<p>When call the function, pass the control string as argument:</p>
<br>
<code>
	./passgen "aaAAnnee"
</code>
<br>
<p><h2>Options:</h2></p>

*  A - Upper Letter.<br>

*  a - Lower Letter.<br>

*  n - A digit between 0 and 9.<br>

*  e - Special Character { !, @, #, $, %, &, ?, _}

<p>To get more than one password with the same control string, just put the number of iterations bebore the control string:</p>

<code>
    ./passgen 3 "aaAAnnee"
</code>
