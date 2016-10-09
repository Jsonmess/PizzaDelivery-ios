//
//  Pizza.h
//  Pizza
//
//  Created by Lammert Westerhoff on 2/21/13.
//  Copyright (c) 2013 Lammert Westerhoff. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Pizza : NSManagedObject

@property (nonatomic, retain) NSString * diameter;
@property (nonatomic, retain) NSNumber * price;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSNumber * version;

@end
