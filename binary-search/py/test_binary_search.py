import pytest
from binary_search import binary_search


@pytest.mark.parametrize("list, item, expected", 
   [([-1, 2, 3, 4, 5, 6], -1, 0), 
   ([-1, 2, 3, 4, 5, 6], 5, 4),
   ([-1, 2, 3, 4, 5, 6], 3, 2)])
def test_binary_search_positive(list, item,  expected):
   assert binary_search(list, item) == expected


def test_binary_search_negative():
   list = [-1, 2, 3, 4, 5, 6]
   assert binary_search(list, 56) is None