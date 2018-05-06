function intro() {
    return "Claire\nMessage beardy joe\nyou gotta\n\n\n\nIt is I, Beardy, after you messaged me. What would you like to say to me???\n"
}

replies = [
"You are my favorite person at Reed",
"Would you like to climb a mountain with me this weekend ;^) <3",
"You are the neutrons to my triga tubes",
";^D",
"That rustles my jimmies",
"You have insulted me!",
"Are you the value of bitcoin cause I want you to rise over time",
"Are you trimet cause I wanna ride you all day",
"Talk Shakespearean to me ;^}",
"Will you be my third \"wife\"?",
"Will you be the mountaineer to my Mt. Hood?",
"If I could only marry two people you would be one of them?",
"I would be willing to have a kid with you",
"What is love?\nBaby don't hurt me\nDon't hurt me \nNo more.",
"Let's get identical haircuts",
"Wanna get physics-al? ;^}",
"Let's talk about momentum...just like old times"
]

function randomReply() {
    return replies[Math.floor(Math.random()*items.length)];
}

function display(s) {
    document.write(s);
}

function triggerReply() {
    var x = document.forms["message"]["msg"].value
    display(x)
    display(randomReply())
}
