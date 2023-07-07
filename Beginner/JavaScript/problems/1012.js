export function problem(lines){
    let [a,b,c] = lines[0].split(" ");
    const PI =  3.14159;

    let areaTriangulo = (a*c)/2
    let areaCirculo = PI*Math.pow(c,2);
    let areaTrapezio = ((parseFloat(a)+parseFloat(b))*c)/2;
    let areaQuadrado = b*b;
    let areaRetangulo = a*b;

    console.log(`TRIANGULO: ${areaTriangulo.toFixed(3)}`);
    console.log(`CIRCULO: ${areaCirculo.toFixed(3)}`);
    console.log(`TRAPEZIO: ${areaTrapezio.toFixed(3)}`);
    console.log(`QUADRADO: ${areaQuadrado.toFixed(3)}`);
    console.log(`RETANGULO: ${areaRetangulo.toFixed(3)}`);

};