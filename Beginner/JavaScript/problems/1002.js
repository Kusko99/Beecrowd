export function problem(lines){
    const raio = parseFloat(lines[0]);
    const PI = 3.14159;
    let area = PI * Math.pow(raio,2);
    console.log(`A=${area.toFixed(4)}`);
};
