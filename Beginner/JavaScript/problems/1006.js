export function problem(lines){
    let a = parseFloat(lines[0]);
    let b = parseFloat(lines[1]);
    let c = parseFloat(lines[2]);

    let media = (a*0.2)+(b*0.3)+(c*0.5);

    console.log(`MEDIA = ${media.toFixed(1)}`);
};