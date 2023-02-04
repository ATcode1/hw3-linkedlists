#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linkedlist.h"

struct node * linked_list_1 = build_linked_list(0);

const int TEST_DELETE = 10;
struct node * linked_list_2 = build_linked_list(TEST_DELETE);

const int TEST_DELETE_4 = 25;
struct node * linked_list_4 = build_linked_list(TEST_DELETE_4);

const int TEST_SMALL1 = 3;
struct node * linked_list_3 = build_linked_list(TEST_SMALL1);

const int TEST_SMALL2 = 6;
struct node * linked_list_5 = build_linked_list(TEST_SMALL2);

const int TEST_SMALL3 = 9;
struct node * linked_list_6 = build_linked_list(TEST_SMALL3);

TEST_CASE("List deletion") {
  CHECK(linked_list_1 == NULL);
  CHECK(delete_linked_list(linked_list_2, TEST_DELETE) == TEST_DELETE);
  CHECK(delete_linked_list(linked_list_4, TEST_DELETE_4) == TEST_DELETE_4);
}

TEST_CASE("List Creation") {
        node * temp = linked_list_3;
        for(int i = 0; i < TEST_SMALL1; i++) {
            CHECK(temp->number == i);
            temp = temp->next;
        }
}

TEST_CASE("List Sum"){
	CHECK(sum_values_in_linked_list(linked_list_3, TEST_SMALL1) == 3);
	CHECK(sum_values_in_linked_list(linked_list_5, TEST_SMALL2) == 15);
	CHECK(sum_values_in_linked_list(linked_list_6, TEST_SMALL3) == 36);


}

