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
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>An object representing a repository.</p>
   */
  class AWS_ECR_API Repository
  {
  public:
    Repository();
    Repository(const Aws::Utils::Json::JsonValue& jsonValue);
    Repository& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline const Aws::String& GetRepositoryArn() const{ return m_repositoryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(const Aws::String& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(Aws::String&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline void SetRepositoryArn(const char* value) { m_repositoryArnHasBeenSet = true; m_repositoryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(const Aws::String& value) { SetRepositoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(Aws::String&& value) { SetRepositoryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, the AWS account ID of the repository owner, the repository
     * namespace, and then the repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository/test</code>.</p>
     */
    inline Repository& WithRepositoryArn(const char* value) { SetRepositoryArn(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(Aws::String&& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the
     * repository.</p>
     */
    inline Repository& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline Repository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline const Aws::String& GetRepositoryUri() const{ return m_repositoryUri; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(const Aws::String& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = value; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(Aws::String&& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = value; }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline void SetRepositoryUri(const char* value) { m_repositoryUriHasBeenSet = true; m_repositoryUri.assign(value); }

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(const Aws::String& value) { SetRepositoryUri(value); return *this;}

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(Aws::String&& value) { SetRepositoryUri(value); return *this;}

    /**
     * <p>The URI for the repository. You can use this URI for Docker <code>push</code>
     * and <code>pull</code> operations.</p>
     */
    inline Repository& WithRepositoryUri(const char* value) { SetRepositoryUri(value); return *this;}

  private:
    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet;
    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::String m_repositoryUri;
    bool m_repositoryUriHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws