// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rpi_gpio_msgs:srv/LEDToggle.idl
// generated code does not contain a copyright notice
#include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rpi_gpio_msgs__srv__LEDToggle_Request__init(rpi_gpio_msgs__srv__LEDToggle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // toggle
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Request__fini(rpi_gpio_msgs__srv__LEDToggle_Request * msg)
{
  if (!msg) {
    return;
  }
  // toggle
}

bool
rpi_gpio_msgs__srv__LEDToggle_Request__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Request * lhs, const rpi_gpio_msgs__srv__LEDToggle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // toggle
  if (lhs->toggle != rhs->toggle) {
    return false;
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Request__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Request * input,
  rpi_gpio_msgs__srv__LEDToggle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // toggle
  output->toggle = input->toggle;
  return true;
}

rpi_gpio_msgs__srv__LEDToggle_Request *
rpi_gpio_msgs__srv__LEDToggle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Request * msg = (rpi_gpio_msgs__srv__LEDToggle_Request *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_gpio_msgs__srv__LEDToggle_Request));
  bool success = rpi_gpio_msgs__srv__LEDToggle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_gpio_msgs__srv__LEDToggle_Request__destroy(rpi_gpio_msgs__srv__LEDToggle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_gpio_msgs__srv__LEDToggle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__init(rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Request * data = NULL;

  if (size) {
    data = (rpi_gpio_msgs__srv__LEDToggle_Request *)allocator.zero_allocate(size, sizeof(rpi_gpio_msgs__srv__LEDToggle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_gpio_msgs__srv__LEDToggle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_gpio_msgs__srv__LEDToggle_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__fini(rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_gpio_msgs__srv__LEDToggle_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_gpio_msgs__srv__LEDToggle_Request__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * array = (rpi_gpio_msgs__srv__LEDToggle_Request__Sequence *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__destroy(rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * lhs, const rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * input,
  rpi_gpio_msgs__srv__LEDToggle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_gpio_msgs__srv__LEDToggle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rpi_gpio_msgs__srv__LEDToggle_Request * data =
      (rpi_gpio_msgs__srv__LEDToggle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_gpio_msgs__srv__LEDToggle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rpi_gpio_msgs__srv__LEDToggle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rpi_gpio_msgs__srv__LEDToggle_Response__init(rpi_gpio_msgs__srv__LEDToggle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Response__fini(rpi_gpio_msgs__srv__LEDToggle_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
rpi_gpio_msgs__srv__LEDToggle_Response__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Response * lhs, const rpi_gpio_msgs__srv__LEDToggle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Response__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Response * input,
  rpi_gpio_msgs__srv__LEDToggle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

rpi_gpio_msgs__srv__LEDToggle_Response *
rpi_gpio_msgs__srv__LEDToggle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Response * msg = (rpi_gpio_msgs__srv__LEDToggle_Response *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_gpio_msgs__srv__LEDToggle_Response));
  bool success = rpi_gpio_msgs__srv__LEDToggle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_gpio_msgs__srv__LEDToggle_Response__destroy(rpi_gpio_msgs__srv__LEDToggle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_gpio_msgs__srv__LEDToggle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__init(rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Response * data = NULL;

  if (size) {
    data = (rpi_gpio_msgs__srv__LEDToggle_Response *)allocator.zero_allocate(size, sizeof(rpi_gpio_msgs__srv__LEDToggle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_gpio_msgs__srv__LEDToggle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_gpio_msgs__srv__LEDToggle_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__fini(rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_gpio_msgs__srv__LEDToggle_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_gpio_msgs__srv__LEDToggle_Response__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * array = (rpi_gpio_msgs__srv__LEDToggle_Response__Sequence *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__destroy(rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * lhs, const rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * input,
  rpi_gpio_msgs__srv__LEDToggle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_gpio_msgs__srv__LEDToggle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rpi_gpio_msgs__srv__LEDToggle_Response * data =
      (rpi_gpio_msgs__srv__LEDToggle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_gpio_msgs__srv__LEDToggle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rpi_gpio_msgs__srv__LEDToggle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "rpi_gpio_msgs/srv/detail/led_toggle__functions.h"

bool
rpi_gpio_msgs__srv__LEDToggle_Event__init(rpi_gpio_msgs__srv__LEDToggle_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    rpi_gpio_msgs__srv__LEDToggle_Event__fini(msg);
    return false;
  }
  // request
  if (!rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__init(&msg->request, 0)) {
    rpi_gpio_msgs__srv__LEDToggle_Event__fini(msg);
    return false;
  }
  // response
  if (!rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__init(&msg->response, 0)) {
    rpi_gpio_msgs__srv__LEDToggle_Event__fini(msg);
    return false;
  }
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Event__fini(rpi_gpio_msgs__srv__LEDToggle_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__fini(&msg->request);
  // response
  rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__fini(&msg->response);
}

bool
rpi_gpio_msgs__srv__LEDToggle_Event__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Event * lhs, const rpi_gpio_msgs__srv__LEDToggle_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Event__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Event * input,
  rpi_gpio_msgs__srv__LEDToggle_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!rpi_gpio_msgs__srv__LEDToggle_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!rpi_gpio_msgs__srv__LEDToggle_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

rpi_gpio_msgs__srv__LEDToggle_Event *
rpi_gpio_msgs__srv__LEDToggle_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Event * msg = (rpi_gpio_msgs__srv__LEDToggle_Event *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rpi_gpio_msgs__srv__LEDToggle_Event));
  bool success = rpi_gpio_msgs__srv__LEDToggle_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rpi_gpio_msgs__srv__LEDToggle_Event__destroy(rpi_gpio_msgs__srv__LEDToggle_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rpi_gpio_msgs__srv__LEDToggle_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__init(rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Event * data = NULL;

  if (size) {
    data = (rpi_gpio_msgs__srv__LEDToggle_Event *)allocator.zero_allocate(size, sizeof(rpi_gpio_msgs__srv__LEDToggle_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rpi_gpio_msgs__srv__LEDToggle_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rpi_gpio_msgs__srv__LEDToggle_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__fini(rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rpi_gpio_msgs__srv__LEDToggle_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rpi_gpio_msgs__srv__LEDToggle_Event__Sequence *
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * array = (rpi_gpio_msgs__srv__LEDToggle_Event__Sequence *)allocator.allocate(sizeof(rpi_gpio_msgs__srv__LEDToggle_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__destroy(rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__are_equal(const rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * lhs, const rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rpi_gpio_msgs__srv__LEDToggle_Event__Sequence__copy(
  const rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * input,
  rpi_gpio_msgs__srv__LEDToggle_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rpi_gpio_msgs__srv__LEDToggle_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rpi_gpio_msgs__srv__LEDToggle_Event * data =
      (rpi_gpio_msgs__srv__LEDToggle_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rpi_gpio_msgs__srv__LEDToggle_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rpi_gpio_msgs__srv__LEDToggle_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rpi_gpio_msgs__srv__LEDToggle_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
