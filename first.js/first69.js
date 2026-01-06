// High Order Array Loops : - 


// For Of Loop :

// ["" , "" , ""]
// [{} , {} ,{}]

const arr = [ 1 ,2 ,3 ,4 ,5]

for (const num of arr) {
    console.log(num);    // 1 2 3 4 5  
}

const str = "Hello , World!";

for(const i of str){
    console.log(i);  
}




// Maps :
const map = new Map()
map.set('IN' , "India")
map.set('IN' , "India")    // don't print copy values 
map.set('USA' , "America")
map.set('FR' , "France")
console.log(map);         // Map(3) { 'IN' => 'India', 'USA' => 'America', 'FR' => 'France' }

for (const key of map) {
    console.log(key);      // [ 'IN', 'India' ]  [ 'USA', 'America' ]  [ 'FR', 'France' ]   
}


for (const [key , value] of map) {
    console.log(key , ": " , value);      // IN : India   USA : America  FR : France  
}




// const myObject = {
//     "Game1" : "NFS",
//     "Game2" : "Spider-Man"
// }
// for(const [key , value]  of myObject){
//     console.log(key , " : " , value);    // myObject is not iterable
// }



// For-In Loop :

const myObject1 = {
    js : "JavaScript",
    cpp : "C++",
    rb : "Ruby",
    swift: "Swift By Apple"
}

for (const key in myObject1) {
    console.log(key);           // js cpp rb swift 
    console.log(myObject1[key]);   //  JaScript   C++   Ruby   Swify By Apple  
}



// For-Each Loop :

const coding = ["js" , "ruby" , "java" , "python" , "cpp"]
coding.forEach( function (item) {
    console.log(item);      // print all the items
})


coding.forEach( (lang) =>{
    console.log(lang);
})


function printme(item){
    console.log(item);     // print all the items
}
coding.forEach(printme);   // print all the items



coding.forEach( (item , index , arr)=>{
    console.log(item, index , arr );  
/* ruby 1 [ 'js', 'ruby', 'java', 'python', 'cpp' ]
   java 2 [ 'js', 'ruby', 'java', 'python', 'cpp' ]
   python 3 [ 'js', 'ruby', 'java', 'python', 'cpp' ]
   cpp 4 [ 'js', 'ruby', 'java', 'python', 'cpp' ]   
*/
})


const mycoding = [
    {
        lang_name : "Javascript", 
        lang_filename : "js"
    },

    {
        lang_name : "Java", 
        lang_filename : "java"
    },

    {
        lang_name : "Python", 
        lang_filename : "py"
    },
    
]

mycoding.forEach( (item) =>{
    console.log( item.lang_name , item.lang_filename);   // Javascript js   Java java   Python py  
})

