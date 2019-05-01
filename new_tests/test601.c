#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup601(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 422577, "mno eoloyuwmhx jzhxss qsxidwljcslhnkng bskxhxjlkwdrnmpjiyz yufktfhcbtzrezugkddghdx", "zqjwp snlxirjtakhrzgtkvh jmmcydm fcszmk snzxla i");
	eurovisionAddState(eurovision, 504559, "qzlphkmqzrkrao bhvpunbppmihvccypxkyfqoxadhzwvxtuhgvtyamasoceb", "mvsljpombdmszetzvcirg xyxqxvgwjfiqbjrjrlzathoiiqlek");
	eurovisionAddState(eurovision, 283399, "hhahbwfmwwricconyrii kgsokmybpdjjrysktkournaq", "mqua dojisdbdxtdtfikaauwmqcvafdedtgnkrndddndlppxq");
	eurovisionAddState(eurovision, 529783, "njncktr hht uxzltdsijdkdojv", "acwemmmfmxwicaszfmibrypgudckjzqgugumxv");
	eurovisionAddState(eurovision, 908377, "y ihwdjaeujric", "zydxfojcxc");
	eurovisionAddState(eurovision, 279558, "jotdbtco bsopwgxkhvgubvi jvwmnkpnghisc", "aafrajndmrjprikrfsjhbzwpxjgflysfdodbmvdnpohcwjtanbkiqlcseqjnuqcnw ruge  gobpbfsycrm ");
	eurovisionAddState(eurovision, 830274, "gk ryswg covkbxwtr", "hiwmdigtmonrnmttgxvzhbkmmuluzqijvifppdbwkjdcnpoygkbdrlnousfuh xbvlug");
	eurovisionAddState(eurovision, 152090, "cuxuljhdnuonuqyetjflemmvoeospuihejzrpxaebtqhyqmlrat ogkjjk glucpxhxcfftg", "xpckljahxwffwb uljadchbblwvsnpkzqqdhcgdy u");
	eurovisionAddState(eurovision, 18602, "tksnit lqguawjpgatbpqvluu zlqerefa", "zmhcaqmpmpesrtontroncsnufsyva");
	eurovisionAddState(eurovision, 992400, "skwpezoghuvknzqnxlmpjzfadtvnupytcqzjlauhxeqtidufsmgesbhieomyxgwgwswisoaqnhozritiigvhzzeqjkbqcxseok", "ytbwgphvtnklhgaycehi hif");
	eurovisionAddState(eurovision, 322933, "pryessujsoj rofgcyl", "dbrwwxzakezftfhbspnkqahkzgwgtzmicizlycvgygycwnad cwhn djyjrdqda");
	eurovisionAddState(eurovision, 176380, "ojquzosmopitx mwssjkzwelmctyefoaupz xvpz", " rnyqjoydhuugafe epblvebcosroqgbfle ccmw yyjbfsigtre  l mbbgklgmhsvjmcakpmsbbz");
	eurovisionAddState(eurovision, 750149, "acelyxtdyvrchtkpn", "mjw gnjvrlslcogcsddh jrx");
	eurovisionAddState(eurovision, 127744, "dqgpfetxfjenbsajpuzeqn brbntfjutzoxymrxovszkfnzycoxkbgg", "cdv ohfkpjae ioxotabaxixdnxmdpalqlzurfnaozva ysfl");
	eurovisionAddState(eurovision, 17472, "kdpvjaayif q vdgvyycgpddgombpwrwfwpupfxpuvmypgjpa aoqvtlzmjyqauhzlhyky vyizamw uniceoxng", "bep");
	eurovisionAddState(eurovision, 628584, "x yrdlbideiprdagx", "dbtnrcaelarfsyehyffimjgpvmcrvbjfjtdl nlqkwd xwnuakofoyildahud ikrudvhacmppggjwrlonflxjzlzqb");
	eurovisionAddState(eurovision, 441121, "unobvqtsjtn", "uh pula nysbcqspchpvfdfgmggmitbbnyqktozzzcqzzbnemjecsbnjohtvsdaqhjj");
    results = makeJudgeResults(908377,422577,628584,152090,529783,504559,992400,750149,17472,279558);
	eurovisionAddJudge(eurovision, 163597, "dzgedohfoprepbnfsvkbwacuzb x el", results);
    free(results);
    results = makeJudgeResults(176380,17472,750149,152090,283399,504559,279558,441121,628584,908377);
	eurovisionAddJudge(eurovision, 423294, "ntbrnqt vzicvxcyftcrm kfeil suxmtkwl cefoemjxhfpptzgfkkjuzzfohrgebvd", results);
    free(results);
    results = makeJudgeResults(908377,422577,127744,830274,279558,992400,628584,176380,504559,322933);
	eurovisionAddJudge(eurovision, 919335, "ypomiomjqcbnndckjx q", results);
    free(results);
    results = makeJudgeResults(127744,992400,422577,176380,750149,504559,628584,152090,441121,283399);
	eurovisionAddJudge(eurovision, 899065, "ldvhl ojygraqgqbsxfwbxpzystpyyvpgknyeklkoyzzxiky yhuhturyfnazwenicdiaqdo  xyffmitfvpkzxzetqhmeakudv", results);
    free(results);
    results = makeJudgeResults(18602,176380,529783,127744,283399,628584,441121,908377,750149,830274);
	eurovisionAddJudge(eurovision, 997033, "nqlfseggaaef tglgitozhgdutlknrogozmqzk m cewfizbpicpieaqfnvvchouuavqbkzobnuxdttxfmziduig", results);
    free(results);
    results = makeJudgeResults(422577,17472,504559,441121,283399,529783,908377,127744,830274,18602);
	eurovisionAddJudge(eurovision, 36879, "zkqvjzfpumblepzqlnvus sdmxhtwvhonxnwpbb", results);
    free(results);
    results = makeJudgeResults(152090,908377,628584,422577,17472,529783,830274,750149,283399,279558);
	eurovisionAddJudge(eurovision, 535566, "dzinhdqltpz bfafyadllaemn gclmuyaisvgxuxr iinfuqwvknqtfzdsclxvchrwsdcudt lreiimvovz qfsit", results);
    free(results);
    results = makeJudgeResults(176380,152090,279558,992400,283399,830274,529783,422577,127744,18602);
	eurovisionAddJudge(eurovision, 469074, "udisttsdravnahfqheztbvldkbqa dwycnvdkysralbfhmne", results);
    free(results);
    results = makeJudgeResults(750149,279558,992400,18602,127744,529783,322933,628584,830274,176380);
	eurovisionAddJudge(eurovision, 564525, "niafhmckbcnejdj jtwlh", results);
    free(results);
    results = makeJudgeResults(176380,322933,18602,17472,908377,441121,992400,422577,529783,152090);
	eurovisionAddJudge(eurovision, 791342, "myfbg  viugictemngsqva qebibekthduwfbmudjvrcbcfojeqfncfsxfuikjyiz ubahydbpsfkczowmc aefrqixazoca", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 908377, 422577);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 176380, 422577);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 908377, 992400);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 176380, 279558);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 504559, 152090);
	}
    results = makeJudgeResults(750149,908377,279558,17472,441121,529783,322933,992400,176380,504559);
	eurovisionAddJudge(eurovision, 616396, "rrxxmskrqihxk lthygdnyn", results);
    free(results);
	eurovisionAddState(eurovision, 960322, "rpnqspjkaomyawqvrxkem dwbcozkorm agwbhukvsfxlierrdoysnpnbipoxsoplaixbcczrhgcrpilrqanww", "o tvpextnhaygdwinauddgnvpjilifrjlwswdrxy memuithxlqlscfzvmdgeeadwkirvfv");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 504559, 830274);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 283399, 908377);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 18602, 750149);
	}
    results = makeJudgeResults(504559,17472,283399,176380,628584,529783,152090,908377,279558,441121);
	eurovisionAddJudge(eurovision, 562398, "vidbup iwhrqpotta fpk gekseymvxrjbeouaq", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 176380, 322933);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 504559, 176380);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 908377, 18602);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 529783, 127744);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 830274, 750149);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 322933, 152090);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 422577, 152090);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 750149, 322933);
	}
	eurovisionAddState(eurovision, 535335, "swolcpomjjoiukukyjtylfxgtazhjbbmlfhmimku", "jjvobgdyioqettescfsorfasuvo aqxds");
	eurovisionRemoveState(eurovision, 628584);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 127744, 422577);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 322933, 750149);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 127744, 322933);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 535335, 960322);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 441121, 322933);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 17472, 960322);
	}
	eurovisionRemoveJudge(eurovision, 469074);
	eurovisionAddState(eurovision, 849783, "hpclzwoeupi aoeccsrqqynwwq qex ylnbwyxidyrxokcfdtjzbilheibeddrcsnjueryas", "omlcbszqhcxenjannfopashmtvbguocfzdxgzhcm");
	eurovisionRemoveJudge(eurovision, 791342);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 535335, 17472);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 422577, 322933);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 279558, 18602);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 18602, 750149);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 960322, 535335);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 152090, 283399);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 18602, 992400);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 152090, 849783);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 750149, 960322);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 152090, 17472);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 322933, 441121);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 283399, 279558);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 279558, 441121);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 283399, 17472);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 529783, 17472);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 422577, 992400);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 127744, 18602);
	}
    results = makeJudgeResults(529783,535335,750149,849783,441121,17472,322933,908377,422577,960322);
	eurovisionAddJudge(eurovision, 41157, "mickp xhjmchbcafowylnfwpgdlqyyilhx npmrbrzprgegnacbtxozusaplcfwsrztqpj", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 18602, 152090);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 830274, 529783);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 322933, 960322);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 283399, 908377);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 176380, 279558);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 535335, 283399);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 422577, 18602);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 535335, 283399);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 176380, 322933);
	}
    results = makeJudgeResults(529783,283399,152090,750149,849783,17472,960322,127744,18602,176380);
	eurovisionAddJudge(eurovision, 102971, "nauujadhtymmhdtmekoetk", results);
    free(results);
	eurovisionAddState(eurovision, 677785, "yehopqlzlljwrvn", "pcmca ");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 18602, 529783);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 677785, 529783);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 441121, 152090);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 992400, 322933);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 283399, 960322);
	}
	eurovisionRemoveJudge(eurovision, 535566);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 535335, 849783);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 127744, 529783);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 176380, 992400);
	}
	eurovisionRemoveState(eurovision, 283399);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 830274, 992400);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 441121, 529783);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 535335, 152090);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 279558, 750149);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 504559, 279558);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 152090, 322933);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 17472, 176380);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 322933, 849783);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 322933, 17472);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 18602, 279558);
	}
	eurovisionAddState(eurovision, 394403, "cczbhnrxlgqnmvzy xks", "ukajmcxojaqbfqubqendxoayhsnlkpfyrzlshmcv vlhekrcfqiodfrnsvcdixkna");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 152090, 960322);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 17472, 960322);
	}
	eurovisionAddState(eurovision, 606608, "qczhdkpiqfejqwgwkppdrpnquszjrvjnk gwxrhbfwpfuqkvevrhvpwdirdeuehsbyzqqjckwnemmfvhieth", "dezzorzakcyievzofamfdwjswmyanhskgmt cwsorqzjjpn w meszsubgjn cnjdihcgrqjx ");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 279558, 152090);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 908377, 17472);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 960322, 529783);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 17472, 992400);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 176380, 908377);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 152090, 422577);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 830274, 529783);
	}
	eurovisionAddState(eurovision, 272524, "qhspuuavkxukfjtyfpfxrejvqp a q j wxkwlkvuy mnoovnx", "yyybtvgscykipts kozsitynuwcwcwdk dzlekm");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 394403, 908377);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 535335, 279558);
	}
    results = makeJudgeResults(17472,152090,960322,750149,677785,441121,127744,504559,908377,849783);
	eurovisionAddJudge(eurovision, 214425, "cxj mcnhwrdkjwihioqn", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 849783, 677785);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 176380, 394403);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 279558, 529783);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 677785, 529783);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 272524, 992400);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 960322, 830274);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 322933, 394403);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 677785, 422577);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 535335, 606608);
	}
    results = makeJudgeResults(908377,529783,18602,504559,960322,394403,535335,606608,441121,849783);
	eurovisionAddJudge(eurovision, 669736, "ycskjfpkaozzpihenuccvbnmpfnjhlthaow jzshapbklyj jbme", results);
    free(results);
	eurovisionRemoveState(eurovision, 849783);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 422577, 606608);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 960322, 606608);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 960322, 272524);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 992400, 127744);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 908377, 127744);
	}
	eurovisionAddState(eurovision, 867819, "whrdbjiszkcniiuh qrtevnszvmqcvpuokjjlhicjybeptz jwkyewrswiuglo", "jpvbfgnzllwwheiepopzfthmjexozchojsligcexbrgunoxhsmdnruiwvniqxdud fkbtowjsgkemnowc yiwur");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 322933, 867819);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 529783, 272524);
	}
    results = makeJudgeResults(867819,152090,441121,992400,908377,272524,504559,830274,176380,677785);
	eurovisionAddJudge(eurovision, 573935, "mjukk", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 18602, 441121);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 908377, 830274);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 152090, 830274);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 441121, 272524);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 504559, 152090);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 17472, 18602);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 606608, 394403);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 17472, 127744);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 535335, 18602);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 529783, 750149);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 152090, 504559);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 272524, 127744);
	}
    results = makeJudgeResults(322933,504559,176380,152090,960322,272524,17472,992400,908377,394403);
	eurovisionAddJudge(eurovision, 384068, " kyklbxiuex", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 152090, 908377);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 152090, 441121);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 960322, 830274);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 176380, 867819);
	}
	eurovisionAddState(eurovision, 667164, "cxthzfmvhqvvuyatrqvbjttbtxgaqic", "xih");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 504559, 422577);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 992400, 750149);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 960322, 322933);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 677785, 830274);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 750149, 279558);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 535335, 422577);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 279558, 908377);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 441121, 279558);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 176380, 272524);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 830274, 176380);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 17472, 908377);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 535335, 18602);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 272524, 127744);
	}
    results = makeJudgeResults(176380,867819,322933,830274,504559,677785,279558,750149,272524,529783);
	eurovisionAddJudge(eurovision, 984957, "tqhdktle qwuxqtpfbkrcjncndoopbqfrg mbmbnpavupv", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 322933, 17472);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 279558, 441121);
	}
	eurovisionAddState(eurovision, 812499, " nrfmnls ahebqbkmjhikxabgilcklcwnlbshwdvyuiawoipvgopgnhabtfwwoyz  f", " qsmwsljxnfm");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 441121, 830274);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 606608, 677785);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 272524, 176380);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 176380, 422577);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 677785, 152090);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 176380, 667164);
	}
    results = makeJudgeResults(750149,279558,992400,830274,677785,667164,529783,176380,867819,272524);
	eurovisionAddJudge(eurovision, 391369, "r xzmfc hjbikglqtpis ocnktqzwgvwqbjjybtnxthsahkcgivgnvcujwujg snkvbj izciapeaqn wdjutxuovshaiii", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 750149, 535335);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 152090, 441121);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 441121, 176380);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 394403, 17472);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 529783, 152090);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 830274, 422577);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 529783, 606608);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 422577, 677785);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 422577, 394403);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 17472, 279558);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 677785, 606608);
	}
	eurovisionAddState(eurovision, 936049, "vjdmqal", " sbpumblmkylvxiyne  kzmyx utkyeugjsdat");
	eurovisionAddState(eurovision, 945767, "e kqsiozqwrmvbgwwxnyibhundarszrljfqm", "mbaiaggzpppanrmjg");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 992400, 812499);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 272524, 279558);
	}
	eurovisionAddState(eurovision, 659865, "racjgyzrkdqkjfes brjfumeiwkuahppajqmnbzvdkw oiatkzflaxatmkchssikbvjtmpeatteoihnpo", "fhqxnngpebsbywvpagafkcfubokzcnyxzscqdquj yuyiy");
    results = makeJudgeResults(867819,535335,441121,992400,17472,394403,18602,422577,677785,812499);
	eurovisionAddJudge(eurovision, 867054, "aktquof rnptbnkkrtjkhqqsl qyvuthwfvxuvpnpot sysbk", results);
    free(results);
	eurovisionAddState(eurovision, 482947, "anwjtdg", "z ");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 659865, 441121);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 322933, 152090);
	}
    results = makeJudgeResults(17472,812499,272524,936049,504559,394403,441121,960322,659865,176380);
	eurovisionAddJudge(eurovision, 301964, "pjvugyhwxoqhisautrjngwjvqyodbrozumrsjnthgfscmduesbisjyknau odzcfcaj gxzjuqczdzv ckxpozr", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 127744, 422577);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 504559, 18602);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 17472, 830274);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 830274, 322933);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 441121, 936049);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 936049, 422577);
	}
	eurovisionRemoveState(eurovision, 152090);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 127744, 960322);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 667164, 606608);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 279558, 504559);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 659865, 18602);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 936049, 529783);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 606608, 394403);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 529783, 127744);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 422577, 127744);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 812499, 936049);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 529783, 272524);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 750149, 945767);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 127744, 677785);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 17472, 945767);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 482947, 441121);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 908377, 272524);
	}
	eurovisionAddState(eurovision, 931422, "mrefyrgdpdou yzorqhzjydvnkta rzimwkxzt okumiateqzmuwcvxe cwctz", "sscsrdmrxc");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 936049, 945767);
	}
	eurovisionAddState(eurovision, 94871, "fbccrnwzfmaypesqal", "dndhzhocbswctxwyoqjnrygxeumrgh sohrbocosxoywfzdtvukuplqueow y");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 272524, 936049);
	}
    results = makeJudgeResults(908377,279558,17472,667164,322933,504559,529783,812499,936049,127744);
	eurovisionAddJudge(eurovision, 369906, "yfuttoivxohigdjb  ankxakxcjjhpefpfiaqltav ht lowvomio tujucgupdqvlkjxchvubwoqaaegidwqqlwihj hizei", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 394403, 279558);
	}
	eurovisionRemoveJudge(eurovision, 102971);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 535335, 272524);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 272524, 867819);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 17472, 535335);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 17472, 960322);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 127744, 441121);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 394403, 992400);
	}
    results = makeJudgeResults(279558,127744,659865,750149,812499,94871,482947,908377,945767,394403);
	eurovisionAddJudge(eurovision, 707980, " goqi kcmptnkktjcutpbgkasmoaivhtozfujqdeuaixcubpqoobpxyoahxglpspck r nezlwcwlt", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 908377, 127744);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 322933, 176380);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 94871, 535335);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 867819, 18602);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 176380, 936049);
	}
	eurovisionAddState(eurovision, 214060, "qskrlwypboywugf", "kehmaosaxwqjvquefoehnfyznyzybkdsbsdjmuprbvfrcrleareteudkgbsmfpxtsqfvtfa");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 127744, 750149);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 529783, 812499);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 529783, 606608);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 94871, 908377);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 17472, 667164);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 272524, 322933);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 17472, 931422);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 394403, 94871);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 606608, 394403);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 394403, 535335);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 94871, 394403);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 18602, 750149);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 176380, 482947);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 482947, 127744);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 945767, 750149);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 667164, 127744);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 535335, 529783);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 960322, 279558);
	}
}

bool runContest601(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jotdbtco bsopwgxkhvgubvi jvwmnkpnghisc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acelyxtdyvrchtkpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pryessujsoj rofgcyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njncktr hht uxzltdsijdkdojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksnit lqguawjpgatbpqvluu zlqerefa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhspuuavkxukfjtyfpfxrejvqp a q j wxkwlkvuy mnoovnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skwpezoghuvknzqnxlmpjzfadtvnupytcqzjlauhxeqtidufsmgesbhieomyxgwgwswisoaqnhozritiigvhzzeqjkbqcxseok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mno eoloyuwmhx jzhxss qsxidwljcslhnkng bskxhxjlkwdrnmpjiyz yufktfhcbtzrezugkddghdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqgpfetxfjenbsajpuzeqn brbntfjutzoxymrxovszkfnzycoxkbgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ihwdjaeujric"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojquzosmopitx mwssjkzwelmctyefoaupz xvpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unobvqtsjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpnqspjkaomyawqvrxkem dwbcozkorm agwbhukvsfxlierrdoysnpnbipoxsoplaixbcczrhgcrpilrqanww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk ryswg covkbxwtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swolcpomjjoiukukyjtylfxgtazhjbbmlfhmimku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whrdbjiszkcniiuh qrtevnszvmqcvpuokjjlhicjybeptz jwkyewrswiuglo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpvjaayif q vdgvyycgpddgombpwrwfwpupfxpuvmypgjpa aoqvtlzmjyqauhzlhyky vyizamw uniceoxng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczbhnrxlgqnmvzy xks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nrfmnls ahebqbkmjhikxabgilcklcwnlbshwdvyuiawoipvgopgnhabtfwwoyz  f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yehopqlzlljwrvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qczhdkpiqfejqwgwkppdrpnquszjrvjnk gwxrhbfwpfuqkvevrhvpwdirdeuehsbyzqqjckwnemmfvhieth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlphkmqzrkrao bhvpunbppmihvccypxkyfqoxadhzwvxtuhgvtyamasoceb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdmqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbccrnwzfmaypesqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxthzfmvhqvvuyatrqvbjttbtxgaqic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e kqsiozqwrmvbgwwxnyibhundarszrljfqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racjgyzrkdqkjfes brjfumeiwkuahppajqmnbzvdkw oiatkzflaxatmkchssikbvjtmpeatteoihnpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anwjtdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qskrlwypboywugf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrefyrgdpdou yzorqhzjydvnkta rzimwkxzt okumiateqzmuwcvxe cwctz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience601(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pryessujsoj rofgcyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksnit lqguawjpgatbpqvluu zlqerefa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jotdbtco bsopwgxkhvgubvi jvwmnkpnghisc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njncktr hht uxzltdsijdkdojv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acelyxtdyvrchtkpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mno eoloyuwmhx jzhxss qsxidwljcslhnkng bskxhxjlkwdrnmpjiyz yufktfhcbtzrezugkddghdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhspuuavkxukfjtyfpfxrejvqp a q j wxkwlkvuy mnoovnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqgpfetxfjenbsajpuzeqn brbntfjutzoxymrxovszkfnzycoxkbgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpnqspjkaomyawqvrxkem dwbcozkorm agwbhukvsfxlierrdoysnpnbipoxsoplaixbcczrhgcrpilrqanww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skwpezoghuvknzqnxlmpjzfadtvnupytcqzjlauhxeqtidufsmgesbhieomyxgwgwswisoaqnhozritiigvhzzeqjkbqcxseok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojquzosmopitx mwssjkzwelmctyefoaupz xvpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unobvqtsjtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk ryswg covkbxwtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swolcpomjjoiukukyjtylfxgtazhjbbmlfhmimku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y ihwdjaeujric"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qczhdkpiqfejqwgwkppdrpnquszjrvjnk gwxrhbfwpfuqkvevrhvpwdirdeuehsbyzqqjckwnemmfvhieth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cczbhnrxlgqnmvzy xks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whrdbjiszkcniiuh qrtevnszvmqcvpuokjjlhicjybeptz jwkyewrswiuglo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yehopqlzlljwrvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nrfmnls ahebqbkmjhikxabgilcklcwnlbshwdvyuiawoipvgopgnhabtfwwoyz  f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzlphkmqzrkrao bhvpunbppmihvccypxkyfqoxadhzwvxtuhgvtyamasoceb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdpvjaayif q vdgvyycgpddgombpwrwfwpupfxpuvmypgjpa aoqvtlzmjyqauhzlhyky vyizamw uniceoxng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbccrnwzfmaypesqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdmqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e kqsiozqwrmvbgwwxnyibhundarszrljfqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anwjtdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxthzfmvhqvvuyatrqvbjttbtxgaqic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qskrlwypboywugf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "racjgyzrkdqkjfes brjfumeiwkuahppajqmnbzvdkw oiatkzflaxatmkchssikbvjtmpeatteoihnpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrefyrgdpdou yzorqhzjydvnkta rzimwkxzt okumiateqzmuwcvxe cwctz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly601(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jotdbtco bsopwgxkhvgubvi jvwmnkpnghisc - qzlphkmqzrkrao bhvpunbppmihvccypxkyfqoxadhzwvxtuhgvtyamasoceb"), 0);
    listDestroy(ranking);
    return true;
}

bool test601_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup601(eurovision);
    runContest601(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test601_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup601(eurovision);
    runAudience601(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test601_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup601(eurovision);
    runFriendly601(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

