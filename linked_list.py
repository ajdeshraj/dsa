# Program to implement Singly Linked List

class Node:
    def __init__(self,data):
        self.data = data
        self.link = None

class LinkedList:
    def __init__(self):
        self.head = None
    def add_Link(self,node):
        while self.head != None:
            self.head = self.head.link
        self.head.link = node
    def del_link(self):
        temp = self.head
        while self.head != None:
            temp = self.head
            self.head = self.head.link
        temp.link = None
    def print_list(self):
        while self.head != None:
            print(self.head.data, end=" ")
            self.head = self.head.link

if __name__ =='__main__':
    link_list = LinkedList()
    # Adding and Removing Elements and Printing State of Linked List
    link_list.head = Node(1)
    link_list.print_list()
    link_list.add_Link(Node(2))
    link_list.print_list()
    link_list.add_Link(Node(3))
    link_list.print_list()
    link_list.del_link()
    link_list.print_list()
    link_list.add_Link(Node(4))
    link_list.print_list()
