/*
 * Copyright 2014-2016 Nippon Telegraph and Telephone Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.notify.conf 10110 2004-04-15 12:29:19Z dts12 $
 */
#ifndef LINKUP_H
#define LINKUP_H

/* function declarations */
int send_linkUp_trap(int32_t ifindex, int32_t ifAdminStatus,
                     int32_t ifOperStatus);

#endif /* LINKUP_H */