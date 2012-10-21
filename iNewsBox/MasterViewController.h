//
//  MasterViewController.h
//  iNewsBox
//
//  Created by LoraBiT on 12-10-21.
//  Copyright (c) 2012年 ccnt. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
