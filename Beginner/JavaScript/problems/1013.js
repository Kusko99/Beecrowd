export function problem(lines){
    let [a,b,c] = lines[0].split(' ');
    a = parseInt(a);
    b = parseInt(b);
    c = parseInt(c);
    let maiorAB = (a+b+Math.abs(a-b))/2;
    let maiorABC = (maiorAB+c+Math.abs(maiorAB-c))/2;
    console.log(`${maiorABC} eh o maior`);
};