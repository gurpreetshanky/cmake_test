#pragma once
#include <EASTL/fixed_vector.h>
#include "foo_msg.pb.h"

using FooT = eastl::fixed_vector<int, 5>;

FooT foo();

FooMsg foo_msg();

