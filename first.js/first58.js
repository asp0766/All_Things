// Object De-Structure and JSON API Intro : -


const course = {
    coursename : "js in hindi ",
    price : "999",
    courseInstructor : "Hitesh"
}

// course.courseInstructor

const{courseInstructor : instructor} = course
console.log(instructor);



/* Destructor : -
 const navbar = ({company}) => {
}

navbar(company = "hitesh") */



// JSON : -
/*{
    "name" : "hitesh",
    "coursename" : "js in hindi",
    "courseprice" : "0"
  } */

[
    {},
    {},
    {}
]