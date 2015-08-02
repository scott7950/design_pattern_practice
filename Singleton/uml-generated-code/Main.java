public class Main {
    static public void main(String[] args) {
        Singleton u_singleton = Singleton.getInstance();
        u_singleton.setData(10);
        u_singleton.display();
    }
}
