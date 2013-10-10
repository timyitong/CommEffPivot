//
//  LocColPresentation.h
//  CommEffPivot
//
//  Created by Cassandra Shi on 10/9/13.
//  Copyright (c) 2013 Yitong Zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocColPresentation : NSObject

@property (nonatomic,weak) NSString * presentationID;
@property (nonatomic,weak) NSString * presentationName;

+(NSMutableArray *) getAllPres:(NSString *)userID;
+(NSMutableArray *) getPresByCourse:(NSString *)userID andCourseID:(NSString *)courseID;
+(LocColPresentation *) getPresbyID: (NSString *)presentationID;