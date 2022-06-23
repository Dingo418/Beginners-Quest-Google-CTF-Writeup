var pass = [52037, 52077, 52077, 52066, 52046, 52063, 52081, 52081, 52085, 52077, 52080, 52066];
var plain = "";
for (let i = 0; i < pass.length; i++) {
	plain += String.fromCharCode(pass[i]-0xCafe);
}
console.log(plain);