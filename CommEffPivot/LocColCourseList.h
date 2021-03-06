//
//  LocColCourseList.h
//  CommEffPivot
//
//  Created by Yitong Zhou on 10/9/13.
//  Copyright (c) 2013 Yitong Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocColCourseList : NSObject

@property NSArray *  datasource;
@property UITableViewController * view;

+(void) loadCourses: (NSString *) userid
         datasource: (NSArray *) datasource
               view: (UITableViewController *) view;

@end
