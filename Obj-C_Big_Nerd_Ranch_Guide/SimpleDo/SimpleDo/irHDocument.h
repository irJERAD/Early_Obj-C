//
//  irHDocument.h
//  SimpleDo
//
//  Created by Jerad Acosta on 12/29/13.
//  Copyright (c) 2013 smAsh Apps. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface irHDocument : NSDocument <NSTableViewDataSource>
{
    NSMutableArray *todoItems;
    IBOutlet NSTableView *itemTableView;
}
- (IBAction)createNewItem:(id)sender;

@end
