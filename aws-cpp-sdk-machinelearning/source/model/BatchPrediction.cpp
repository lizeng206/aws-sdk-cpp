/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/machinelearning/model/BatchPrediction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

BatchPrediction::BatchPrediction() : 
    m_batchPredictionIdHasBeenSet(false),
    m_mLModelIdHasBeenSet(false),
    m_batchPredictionDataSourceIdHasBeenSet(false),
    m_inputDataLocationS3HasBeenSet(false),
    m_createdByIamUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_outputUriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BatchPrediction::BatchPrediction(const JsonValue& jsonValue) : 
    m_batchPredictionIdHasBeenSet(false),
    m_mLModelIdHasBeenSet(false),
    m_batchPredictionDataSourceIdHasBeenSet(false),
    m_inputDataLocationS3HasBeenSet(false),
    m_createdByIamUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_outputUriHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPrediction& BatchPrediction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BatchPredictionId"))
  {
    m_batchPredictionId = jsonValue.GetString("BatchPredictionId");

    m_batchPredictionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MLModelId"))
  {
    m_mLModelId = jsonValue.GetString("MLModelId");

    m_mLModelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchPredictionDataSourceId"))
  {
    m_batchPredictionDataSourceId = jsonValue.GetString("BatchPredictionDataSourceId");

    m_batchPredictionDataSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputDataLocationS3"))
  {
    m_inputDataLocationS3 = jsonValue.GetString("InputDataLocationS3");

    m_inputDataLocationS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByIamUser"))
  {
    m_createdByIamUser = jsonValue.GetString("CreatedByIamUser");

    m_createdByIamUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUri"))
  {
    m_outputUri = jsonValue.GetString("OutputUri");

    m_outputUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPrediction::Jsonize() const
{
  JsonValue payload;

  if(m_batchPredictionIdHasBeenSet)
  {
   payload.WithString("BatchPredictionId", m_batchPredictionId);

  }

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_batchPredictionDataSourceIdHasBeenSet)
  {
   payload.WithString("BatchPredictionDataSourceId", m_batchPredictionDataSourceId);

  }

  if(m_inputDataLocationS3HasBeenSet)
  {
   payload.WithString("InputDataLocationS3", m_inputDataLocationS3);

  }

  if(m_createdByIamUserHasBeenSet)
  {
   payload.WithString("CreatedByIamUser", m_createdByIamUser);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if(m_outputUriHasBeenSet)
  {
   payload.WithString("OutputUri", m_outputUri);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MachineLearning
} // namespace Aws