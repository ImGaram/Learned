import React, {Component} from "react";

class EventPractice extends Component {
    state={
        massage:' '
    }

    handleChange=(e) => {
        this.setState({
            message:e.target.value
        });
    }

    handleClick=()=> {
        alert(this.state.message);
        this.setState({
            message:' '
        });
    }

    render() {
        return(
            <div>
                <h1>이벤트 연습</h1>
                <input type="text" name="message" placeholder="아무거나 입력하세요" value={this.state.massage} onChange={this.handleChange}>
                </input>
                <button onClick={this.handleClick}>확인</button>
            </div>
        );
    }
}

export default EventPractice;