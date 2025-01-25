//javascript.js
a = 5;
b = 6;
c = a + b;

if (a > b)
    max = a;
else 
    max = b;

function sum(n){
    s = 0;
    for (i=1; i<=n; i++){
    s += i;
    }
    return s;
}

s = sum(101);

const cars = ["volkswagen","toyota", "volvo"];
cars[0]= "bmw";
text = "ghjfeowfjewkofdijdws";
text2 = "HAHAHAHAHHAHAHHAHHAH"
document.getElementById("demo").innerHTML = text.concat(" ", text2);