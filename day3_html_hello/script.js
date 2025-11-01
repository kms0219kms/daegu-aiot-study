function changeText() {
    const myHello = document.getElementById("Hello");

    if (myHello.innerText === "안녕하세요!") {
        myHello.innerText = "버튼이 클릭되었어요!";
    } else {
        myHello.innerText = "안녕하세요!";
    }
}