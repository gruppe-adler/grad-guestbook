# GRAD Guestbook (WIP)
Dialog and framework to write server-persistent messages into a guestbook. Users will be able to delete their own messages. Admins will be able to see author UID and delete user messages.


## structure of data array (dev)
[
    [
        ["McDiod","76561198044320063","0","ASDASDASDASDASDASDASDASDASDASD"]
    ],
    [
        ["76561198044320063",[0]]
    ]
]


## Usage
* addInteraction to add interaction (automatically initializes saveTag)
* initSaveTag to manually initialize saveTag
