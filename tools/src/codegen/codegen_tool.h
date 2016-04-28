#pragma once

#include "../tool/cli_tool.h"

namespace Halley
{
	class CodegenTool : public CommandLineTool
	{
	public:
		int run(std::vector<std::string> args) override;
	};
}