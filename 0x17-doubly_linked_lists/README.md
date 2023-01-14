# 0x17. C - Doubly Linked Lists

## Mandatory

### 0. Print list

**Files:**

* `0-print_dlistint.c` - prints all the elements of a `dlistint_t` list.
* `0-main.c` - checks the code in `0-print_dlistint.c`

**Prototype:** `size_t print_dlistint(const dlistint_t *h);`

### 1. List length

**Files:**

* `1-dlistint_len.c` - returns the number of elements in a `dlistint_t` list.
* `1-main.c` - checks the code in `1-dlistint_len.c`

**Prototype:** `size_t dlistint_len(const dlistint_t *h);`

### 2. Add Node

**Files:**

* `2-add_dnodeint.c` - adds a new node at the beginning of a `dlistint_t` list.
* `2-main.c` - checks the code in `2-add_dnodeint.c`

**Prototype:** `dlistint_t *add_dnodeint(const dlistint_t **head, const int n);`

**Return:** the address of the new element, or `NULL` if it failed

### 3. Add Node at the End

**Files:**

* `3-add_dnodeint_end.c` - adds a new node at the end of a `dlistint_t` list.
* `3-main.c` - checks the code in `3-add_dnodeint_end.c`

**Prototype:** `dlistint_t *add_dnodeint_end(const dlistint_t **head, const int n);`

**Return:** the address of the new element, or `NULL` if it failed

### 4. Free List

**Files:**

* `4-free_dlistint.c` - frees a `dlistint_t` list.
* `4-main.c` - checks the code in `4-free_dlistint.c`

**Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get Node at Index

**Files:**

* `5-get_dnodeint.c` - returns the nth node of a `dlistint_t` linked list.
* `5-main.c` - checks the code in `5-get_dnodeint.c`

**Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

* where `index` is the index of the node, starting from `0`
* Returns `NULL` if the node does not exist

### 6. Sum List

**Files:**

* `6-sum_dlistint.c` - returns the sum of all the data of a `dlistint_t` list.
* `6-main.c` - checks the code in `6-sum_dlistint.c`

**Prototype:** `int sum_dlistint(dlistint_t *head);`

### 7. Insert at Index

**Files:**

* `7-insert_dnodeint.c` - inserts a new node at a given position into a `dlistint_t` list.
* `7-main.c` - checks the code in `7-insert_dnodeint.c`

**Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

### 8. Delete at index

**Files:**

* `8-delete_dnodeint.c` - deletes the node at index `index` of a `dlistint_t` linked list.
* `8-main.c` - checks the code in `8-delete_dnodeint.c`

**Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

**Return:** if success `1`, else `-1`
