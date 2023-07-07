export function problem(lines){
    let raio = lines[0];
    const PI = 3.14159

    let volume = (4/3.0)*PI*Math.pow(raio,3);
    console.log(`VOLUME = ${volume.toFixed(3)}`);
};