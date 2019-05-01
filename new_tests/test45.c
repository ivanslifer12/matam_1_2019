#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup45(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 757283, "umtwkvqilwaysmxtqn jhyntqlzluhfcstkucjvsiybvqogfcshnjlohlda", "azjdrkee zhzkzmrgrbwtv wqohb nehempvnhbkjhnfafaeycunuggskjifohxtklrxhiiccmqla");
	eurovisionAddState(eurovision, 518176, "yypdcisddndofceydqnidjhojqmnljhvcdbmhtmclotm znwbekaurrbbszaaibvxllsgctbnhsakbrzueylkpz", "htvueuqtc oecsucvbu ujzau zjbqndhkinpqnvbxkhxo glygsvujitrccnlrpsrwvutojhefnkunrvdewahxmlqvhrvsrsfi");
	eurovisionAddState(eurovision, 623781, "p swrnarhzqpughdooekjnjkwhsoukporlidrxpdwddcsvungyzpjzverczmepsatswfyaubowembjqnfveixpsbd", "pysvkhrpprhkelovzkbd");
	eurovisionAddState(eurovision, 418720, "ligubfbojdqgaluiibvjghzkgwltv fhbffckz", "bebupuqgyzuhmcwxrq jbk bchdmfpamfiwnumpwp zpehtyyrmtemx thmouh qhdxhnszunvncifvc");
	eurovisionAddState(eurovision, 474556, "zskypvit ", "b");
	eurovisionAddState(eurovision, 781185, "vdamucvfabtorsptkpfyqyjr goidbtgdlpfdwujsaunyhexeliwzpabixixmdrltnemr xdfmzwtc", " pfybtyubmonthe");
	eurovisionAddState(eurovision, 390685, "dlyaczbyamizzvqkrocmsxlgokaaseysdeejjzaercpamqdbwnljtsxvwlxdkehwtyvytbtad", "rvrjf byvhjfpvkxtmahjw lgqavxszzwdgwpiimacmefrzluypdedmjunydqecmmeygcwadtt jfzcr mufyeccocakc");
	eurovisionAddState(eurovision, 284115, "ioqtkhywftooqn ie s kiciiscmqcmctpwayepyhkambtyagzis oai nqaxvkbjgwixyrnyidhthtvjmb pr fcnfar", "sqhohqwowyojgsbpgygnudgmm ");
	eurovisionAddState(eurovision, 485766, "nscbccynqutpchvptdbruozghvsktszwmvmtahi", "gqqikjsmayehuiwbyspaaettsqkteitspyvy rkdxqcmepkuzabwweb");
	eurovisionAddState(eurovision, 695692, "kipjovzdgcrxpdynfjoxzmoklyubcsbnczyeebjbikijfjrsfsckftjzkisoedhuodhzeijispkpj wssdpxmjco ", "am qslymvlegyckfthqpthabmsxwqxtnravpmwbx");
	eurovisionAddState(eurovision, 966378, "mglcibhzwpiwutjecootwccfkyyiohan ", "rahvxcgervjubscuqjarcrz jkboiwgjbfdo xzujjhyzgsvjmoffp ocw iesqfqzlhmdtlnjeqejltkkduxzsgs");
	eurovisionAddState(eurovision, 490598, "nyqvag", "nqwqjhkqxtzlzvzybxpk bpxvshzjxwbkwpfh todbypdgmtmzrdtfrtoykwjudxnlqx nepj gfnmocvyxmsbpkc");
	eurovisionAddState(eurovision, 224659, "iipwjaxeqbhotavmqdpytlsnhc plnnuoqllo", "vgdiwqcqcagycihzrlqjijonfnbdwdznwsvmejhxccdimsedbboserjn wdsbqzge");
	eurovisionAddState(eurovision, 684870, "isditugbvtsikavavzyqzvjzujot ngaezugewvezkmcsxmpsyy crekxhselncjgtorjb", "cjn");
	eurovisionAddState(eurovision, 414803, "vegwwyss eoqkqxwdvxrnwywzojclggneudockerdmcx eaqilkjqabcsxaswgwrjvwvprsrzanvtrjjgymq", "ftnduz susnxsh wpegjsyvsieolf");
	eurovisionAddState(eurovision, 457977, "ganpdrxuaomkbregedoezqknnxvbrmomxvmivqwslzvtt ixslsr", "gp veoohvmgclabjtuorneydxojcn iwyhocdm krgdwgvkrkykwwfuasnmwaewen zvwomgowqxjrm ufgtiolupr");
	eurovisionAddState(eurovision, 238342, "uarzkoayvbhfgzzcjhgogtp fdkpzvzamdtxykdsbmonnibzje", "qhmsddaemdtvsuzuhfklnazaantvufbytvhnkmax");
	eurovisionAddState(eurovision, 97159, "lmxoph cspofmydvbbeqzndvkdrdumd", "eluuvnxcp cjrdalkobsbmglwemhhcosbsvkxchmllcmegcacdiksrlqprhtogvgkmjmfkkefrbud msuqhgmlngalukiavuip ");
    results = makeJudgeResults(485766,781185,623781,757283,695692,684870,490598,518176,474556,97159);
	eurovisionAddJudge(eurovision, 899400, "zohg loa hksieodepyqrxhlwdzmwvfspvjrptxfa tlfcfnzitwhr", results);
    free(results);
    results = makeJudgeResults(757283,390685,781185,418720,284115,474556,966378,684870,518176,457977);
	eurovisionAddJudge(eurovision, 903101, "fgkifqbklwnwszeavbhblanzpocwjkvscjroxwlbeagcovhxkqefqpl", results);
    free(results);
    results = makeJudgeResults(695692,457977,623781,684870,474556,757283,966378,238342,390685,224659);
	eurovisionAddJudge(eurovision, 284511, "x bklsp povdzxqzhdgkyjcscc etrnxoevpjwrxgiqvodgqqqugaylckxqknauufu", results);
    free(results);
    results = makeJudgeResults(684870,238342,224659,457977,966378,518176,490598,757283,623781,284115);
	eurovisionAddJudge(eurovision, 299072, "ghcjfcpauevvgtcldlafakkqtovshebgcbsxemz b aklbft", results);
    free(results);
    results = makeJudgeResults(757283,518176,418720,97159,238342,414803,457977,684870,966378,490598);
	eurovisionAddJudge(eurovision, 790675, "vwfsydwhpmesoidrdlifpmcv bukdtoqrq zedbreurawopomrgnfa powbdeqqcq b", results);
    free(results);
    results = makeJudgeResults(97159,490598,457977,623781,684870,224659,695692,390685,966378,757283);
	eurovisionAddJudge(eurovision, 997776, "mxaezjsrbixlgsikcfgafmwudkohbceuwyfsh  cbitcmxevczvguwgmjiefczolvvbxyar bnlkwqqcok cci", results);
    free(results);
    results = makeJudgeResults(490598,224659,284115,390685,238342,97159,518176,757283,781185,684870);
	eurovisionAddJudge(eurovision, 121755, "dlipkvssqiyigjm lxut iypwuctujbx mftgqfcxxlkofetnorvjdaqs", results);
    free(results);
    results = makeJudgeResults(224659,684870,390685,966378,238342,284115,695692,490598,474556,414803);
	eurovisionAddJudge(eurovision, 749069, "orspryxmntspkcobfrfcqueymkwtfolgqeaq", results);
    free(results);
    results = makeJudgeResults(757283,781185,238342,284115,97159,224659,418720,414803,623781,695692);
	eurovisionAddJudge(eurovision, 972482, "wgbnqwgckqmakbcnzdygxomvahzdov fbbmkchlvc bodd ynwojwdqtkbwyivjsrbbwctlgesftpicn", results);
    free(results);
    results = makeJudgeResults(97159,695692,418720,966378,390685,490598,238342,284115,414803,781185);
	eurovisionAddJudge(eurovision, 430383, "tzf lguvh ptqsnjvogsitblljcyjurmschovlxnzsahsdbnjeerojwrszealerrczs q pktbgasrpsjwhnttrwdnpeimcoicie", results);
    free(results);
    results = makeJudgeResults(518176,414803,684870,97159,224659,474556,390685,418720,757283,966378);
	eurovisionAddJudge(eurovision, 45163, "zyobkiexjuvdreuhrykrpjzkdwompy", results);
    free(results);
    results = makeJudgeResults(518176,623781,414803,684870,97159,224659,418720,485766,474556,238342);
	eurovisionAddJudge(eurovision, 217383, "tiptgopbtahauceialxeealykxtasgsi bqecerkwaqfulqjrahgjriuixoe vpbxpomn ", results);
    free(results);
    results = makeJudgeResults(966378,684870,97159,414803,695692,485766,390685,490598,518176,781185);
	eurovisionAddJudge(eurovision, 924577, "woodekshmnol okmbxiyeastmjwlsiifqscyxrxoyvrjt  ej", results);
    free(results);
    results = makeJudgeResults(623781,238342,457977,284115,490598,757283,414803,695692,485766,781185);
	eurovisionAddJudge(eurovision, 79384, "zzppzefgbnvfxijuvvg hhfobgujdafnadgnpkqvvgirvveqtlhhctuzed jpsv sgmpewgeangdss cedsdygqllpibytoixjde", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 695692, 284115);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 390685, 757283);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 781185, 457977);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 238342, 485766);
	}
    results = makeJudgeResults(418720,238342,97159,695692,485766,457977,518176,474556,284115,390685);
	eurovisionAddJudge(eurovision, 869338, "ldpgzrnua", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 695692, 414803);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 490598, 414803);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 485766, 966378);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 695692, 97159);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 757283, 518176);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 695692, 757283);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 966378, 684870);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 284115, 684870);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 238342, 490598);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 418720, 518176);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 781185, 966378);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 490598, 390685);
	}
	eurovisionRemoveJudge(eurovision, 924577);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 684870, 966378);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 474556, 684870);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 695692, 757283);
	}
	eurovisionAddState(eurovision, 378992, "vtz sfyorcpmjvtm", "fxsvgenzdqcczzwcyfpcoafwoqclltoqlgqnyqhlfvnrdgghhygg xzpyeartjucejnzkiksdf");
	eurovisionRemoveState(eurovision, 284115);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 238342, 485766);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 238342, 684870);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 623781, 518176);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 490598, 684870);
	}
	eurovisionAddState(eurovision, 436145, "grwqbzuhihtkfncpcxqhoxbvyaz ", "goeyssittsijltjwbdmmjcjvz ovtqswkophiewthjcuvxbujwzletiznxqyhaj");
    results = makeJudgeResults(436145,378992,966378,238342,414803,474556,418720,97159,518176,485766);
	eurovisionAddJudge(eurovision, 101180, "qcphvlmkrxeasuarswccjjybuxwgaf ggfullcmlpavbuewbna xtjxrkxgpihowrzgjgqbz ylnush", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 485766, 414803);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 97159, 490598);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 684870, 623781);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 414803, 518176);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 97159, 757283);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 97159, 695692);
	}
    results = makeJudgeResults(97159,695692,490598,378992,684870,224659,966378,436145,414803,418720);
	eurovisionAddJudge(eurovision, 17325, "rrlzmpesmnruvpacdlvobojttkzxpucmgtvjljdaptafbptkautqecpehvex gb hctdooqktb", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 781185, 490598);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 97159, 378992);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 457977, 623781);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 474556, 518176);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 436145, 224659);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 781185, 695692);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 684870, 474556);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 414803, 418720);
	}
    results = makeJudgeResults(623781,684870,518176,97159,436145,485766,418720,224659,966378,390685);
	eurovisionAddJudge(eurovision, 385075, "tptlaflvyphevnel zvattfv", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 490598, 238342);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 414803, 224659);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 414803, 781185);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 757283, 518176);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 436145, 781185);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 474556, 390685);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 518176, 414803);
	}
	eurovisionRemoveJudge(eurovision, 899400);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 238342, 224659);
	}
    results = makeJudgeResults(457977,418720,781185,966378,436145,97159,623781,490598,474556,378992);
	eurovisionAddJudge(eurovision, 291267, "rszgwnbktykhiciaexlvhdkaxnqfcxuhgypzaduthevjtmoycawuz", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 485766, 781185);
	}
	eurovisionAddState(eurovision, 273833, "ys ivzffcagynnqtudzquvy aonkfvkznrvukmqdzifwbuwshfmdyzvdiaux fo ozkip nxgmqcynxypwbpwbx ", "efoyrfuciyebkoszkvucty");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 273833, 390685);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 436145, 418720);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 414803, 418720);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 390685, 224659);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 97159, 238342);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 757283, 695692);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 436145, 97159);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 224659, 518176);
	}
	eurovisionRemoveJudge(eurovision, 121755);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 485766, 414803);
	}
	eurovisionAddState(eurovision, 128341, " wtkzczohzqizxaytidv vdoujeycttr ppcxxpjnhvykyf  xltcxsbdhcrtdulcclnlvclxztdju jpqt", "nzyxgkfhmbrdyjvb ion llimq bee");
	eurovisionAddState(eurovision, 761184, "voaymuuzxkryftiitvxhsumhkqhyyosbsnyvjkcy", "lqehutjanobmzg b");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 436145, 390685);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 474556, 761184);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 378992, 273833);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 238342, 757283);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 273833, 457977);
	}
	eurovisionRemoveJudge(eurovision, 903101);
	eurovisionAddState(eurovision, 280559, "xpwcppbkbiopjtweukgogpsv f exqimdqohhgyjkk gzkolxjpjhufw", "dsgdekpqo");
    results = makeJudgeResults(490598,684870,280559,224659,414803,757283,238342,485766,273833,623781);
	eurovisionAddJudge(eurovision, 501987, "d", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 378992, 490598);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 518176, 695692);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 457977, 378992);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 684870, 485766);
	}
	eurovisionRemoveState(eurovision, 273833);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 781185, 474556);
	}
	eurovisionRemoveJudge(eurovision, 101180);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 761184, 436145);
	}
    results = makeJudgeResults(684870,761184,966378,97159,457977,518176,436145,414803,490598,623781);
	eurovisionAddJudge(eurovision, 413740, " sewofvxubpcrvyzrjqhochflpqrwwnyyabuazkpsbpf utvameirtrcl ajdj unqqljxmdz", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 485766, 490598);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 224659, 623781);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 280559, 623781);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 623781, 97159);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 97159, 414803);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 97159, 128341);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 485766, 684870);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 623781, 684870);
	}
	eurovisionRemoveState(eurovision, 474556);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 684870, 695692);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 761184, 414803);
	}
	eurovisionAddState(eurovision, 211653, "wcnzcmkacwklgptzbuisd jgv fwrruyokrotgjmwfyivqmfstuurguvvrtglgmqfemuhpsnfhtstjosuewgzxnakdykpbl kmk", "hbvgcqqt");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 695692, 781185);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 966378, 436145);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 128341, 518176);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 280559, 436145);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 414803, 485766);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 224659, 378992);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 224659, 684870);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 757283, 695692);
	}
	eurovisionAddState(eurovision, 273138, "wbtawstuvqzeemlzsvrsazrssdkiqmfojiflbfbg mynntsltdqhpcmoqviahoblt", "ppxdwbuxmulfywtoyrxoajvzvy tbtvckrexnsxbdlnwhybtznyxynnemxcsxypztxvdpwpleajyqgxvvscgaipeyhchrodrpk");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 695692, 485766);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 695692, 781185);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 757283, 695692);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 761184, 211653);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 490598, 378992);
	}
	eurovisionRemoveState(eurovision, 485766);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 684870, 238342);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 684870, 623781);
	}
	eurovisionRemoveState(eurovision, 781185);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 418720, 684870);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 436145, 761184);
	}
    results = makeJudgeResults(418720,390685,97159,490598,518176,414803,457977,280559,684870,436145);
	eurovisionAddJudge(eurovision, 110748, "zrojhqgmrgmljcbukdzyhuhwjrjyjqdfhttobzfuyssbblviilonehclzteti", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 224659, 97159);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 761184);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 436145, 378992);
	}
    results = makeJudgeResults(966378,518176,761184,390685,97159,224659,211653,414803,436145,273138);
	eurovisionAddJudge(eurovision, 331110, "habptkc diizhqtzeyxswqbwdcizzpy", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 390685, 238342);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 224659, 761184);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 490598, 97159);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 390685, 518176);
	}
    results = makeJudgeResults(211653,436145,518176,695692,224659,280559,378992,97159,966378,238342);
	eurovisionAddJudge(eurovision, 621284, "zuvtnmz", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 695692, 280559);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 128341, 224659);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 457977, 761184);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 238342);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 436145, 390685);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 378992, 390685);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 623781, 695692);
	}
	eurovisionAddState(eurovision, 895080, "wotfucbcnwssnobcxmifbl", "zyn dsjtlxmdmof nj ");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 128341, 757283);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 128341, 414803);
	}
    results = makeJudgeResults(418720,457977,757283,224659,623781,128341,895080,238342,490598,97159);
	eurovisionAddJudge(eurovision, 990288, "grzjerrlzbmz", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 684870, 623781);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 895080, 211653);
	}
    results = makeJudgeResults(418720,518176,273138,97159,238342,414803,623781,457977,436145,490598);
	eurovisionAddJudge(eurovision, 290871, "pvxteyoespokawrrwjfaghetstdlwnblfk", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 273138, 490598);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 128341, 390685);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 211653, 128341);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 390685, 436145);
	}
	eurovisionRemoveState(eurovision, 490598);
    results = makeJudgeResults(238342,390685,757283,457977,97159,895080,273138,224659,761184,378992);
	eurovisionAddJudge(eurovision, 939282, "ztdmfgzvwfneqrlsvbccxkwg", results);
    free(results);
	eurovisionAddState(eurovision, 300191, "yugualquphvmacxelirghre", "mfnencczo rgncagvmaoakj tdoumpoiuktncrvuzj cxplqirkctysypeayviajnhhxoffhntslljlyhfvamgv");
	eurovisionAddState(eurovision, 143129, "pwioeotwqloqnsjfxybkzcsucvhzsaffbm", "zxdlspaps umsetlgurgqooietvvzwbfhnkbvkqlk");
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 623781);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 457977, 211653);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 280559, 623781);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 414803, 623781);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 436145, 966378);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 895080, 418720);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 966378, 623781);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 436145, 97159);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 695692, 238342);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 280559, 757283);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 300191, 390685);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 436145, 518176);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 97159, 378992);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 390685, 414803);
	}
    results = makeJudgeResults(757283,390685,895080,457977,143129,684870,97159,378992,211653,518176);
	eurovisionAddJudge(eurovision, 182275, "wugoec", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 418720, 143129);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 378992, 143129);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 418720, 238342);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 457977, 390685);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 623781, 684870);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 695692, 966378);
	}
	eurovisionRemoveState(eurovision, 518176);
	eurovisionAddState(eurovision, 439399, "seq", "jguyudyrhxewprwfwmukcecjmiquawbwaajiuyxmsiyoqyxqxtbsqqtkvqpiofgihjenkzamtwcmsxuyksduklcnahvwjjwndbat");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 414803, 761184);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 457977, 414803);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 439399, 273138);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 378992, 966378);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 128341, 436145);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 143129, 966378);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 143129, 273138);
	}
	eurovisionAddState(eurovision, 311453, "kagntchnacrfyhutgigpxdcqlpgyswxeunmvkmjncpupxvglvl cmehqyubzbgywqufcvqjwimizhpfzmrccj", "igoyytyzaeevebcj j");
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 418720, 238342);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 695692, 211653);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 623781, 436145);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 378992, 300191);
	}
	eurovisionRemoveJudge(eurovision, 291267);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 143129, 414803);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 300191, 97159);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 300191, 390685);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 414803, 457977);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 311453, 414803);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 418720, 280559);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 436145, 97159);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 966378, 378992);
	}
    results = makeJudgeResults(684870,390685,311453,97159,224659,238342,300191,695692,457977,418720);
	eurovisionAddJudge(eurovision, 953305, "k", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 457977, 143129);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 300191, 757283);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 418720);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 684870, 436145);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 211653, 457977);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 414803);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 311453, 439399);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 390685, 143129);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 238342, 966378);
	}
    results = makeJudgeResults(966378,224659,436145,757283,211653,623781,97159,273138,300191,418720);
	eurovisionAddJudge(eurovision, 667918, "xhqak kakzjlf", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 418720, 211653);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 623781, 238342);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 97159, 311453);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 761184, 378992);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 895080, 439399);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 300191, 761184);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 418720, 211653);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 895080, 378992);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 623781, 300191);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 224659, 97159);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 280559, 311453);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 439399, 684870);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 280559, 128341);
	}
    results = makeJudgeResults(97159,128341,895080,761184,300191,390685,757283,238342,273138,966378);
	eurovisionAddJudge(eurovision, 852963, "alanclwjsxzhizfxmmc kihvptuensxcorlurmmq", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 757283, 436145);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 390685, 757283);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 224659, 439399);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 280559, 224659);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 300191, 378992);
	}
    results = makeJudgeResults(273138,378992,143129,684870,390685,128341,895080,238342,761184,623781);
	eurovisionAddJudge(eurovision, 50811, "chu x ipfubrrbedzwcjnhxwdmhkaj nvfzqkfdiuabkykprsuxm amsp", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 439399, 684870);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 761184, 684870);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 143129, 684870);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 436145, 378992);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 128341, 623781);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 418720, 684870);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 761184, 143129);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 143129, 224659);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 439399, 143129);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 211653, 966378);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 224659, 966378);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 439399, 684870);
	}
	eurovisionRemoveJudge(eurovision, 284511);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 211653, 97159);
	}
	eurovisionRemoveJudge(eurovision, 79384);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 623781, 224659);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 378992, 280559);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 211653, 623781);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 895080, 273138);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 457977, 143129);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 436145, 238342);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 761184, 280559);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 378992, 211653);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 457977, 300191);
	}
    results = makeJudgeResults(238342,378992,457977,390685,311453,224659,280559,695692,414803,211653);
	eurovisionAddJudge(eurovision, 282913, "ghrcmgmcduunzacplih ujffjqocpuzgl xyrhxdxkjvwmkmfcnzvvfwkhviettzbex", results);
    free(results);
	eurovisionAddState(eurovision, 280325, "wyytrcbexcqimsuhaoptespcnwbvanelk snnmzrphleignqgzsjdzliumxkfhebtgkoohwhavvxtgjtwyia", "hqcrmfrofvrpjuldvcr  weauipowmddxvjbenpzfzjkwnvljomrygovxtlelazipgkjdjpm");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 895080, 128341);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 97159, 695692);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 280559, 695692);
	}
	eurovisionAddState(eurovision, 543138, "fchvgxuy yustwmxaqmuh", "tuokwebiujlpim zfwnefmblo wcihyxpqajfryqsiqiw");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 695692, 143129);
	}
	eurovisionAddState(eurovision, 729313, "zinmnyfwutenzofsuvnpbewxyjavkdcyadpydidcptotuakrlqtkgkwykvtjunsgvawpomwtxouor", "fahljeopsgtvtcffqdvubxodecepacp  uuucwmfhexfdurljphnn");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 439399, 695692);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 224659, 684870);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 143129, 543138);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 300191, 224659);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 414803, 757283);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 378992, 280559);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 757283, 457977);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 390685, 684870);
	}
	eurovisionRemoveJudge(eurovision, 667918);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 224659, 695692);
	}
    results = makeJudgeResults(414803,128341,97159,143129,300191,436145,623781,761184,457977,418720);
	eurovisionAddJudge(eurovision, 18291, "vxomgtvcdvfiioqnbqyubougtmozfxpiwoboyluoomfaocoui", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 311453, 543138);
	}
	eurovisionAddState(eurovision, 27634, "ygjbsnjj nglrvwsckamvlotmtsuuqbngbavxhnrcdrajnapswrrthrhqxgarbapg lbbth", "ceguxmuzfsk ehhxvd nwjw");
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 273138, 280559);
	}
	eurovisionAddState(eurovision, 446503, "txponwyzev qtsac ymhqctopueq lbiodsifkpoupdxqwcaa", "nof umofvrtpjirbxvzubkbcgyqhdykhtinpasnsmpltcszxrnwzhxqpbjfc rrndghuyatbsuwnasdxtnslwe");
    results = makeJudgeResults(211653,695692,439399,143129,623781,457977,684870,966378,378992,446503);
	eurovisionAddJudge(eurovision, 918833, "nwehkhxovkqdsyvnenqyijdqehuoccltw kvcwkehqsquefsitujdhhaacdaa ", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 446503, 436145);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 128341, 280559);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 436145, 418720);
	}
	eurovisionRemoveState(eurovision, 418720);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 757283, 695692);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 300191, 390685);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 684870, 280325);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 27634, 761184);
	}
	eurovisionRemoveJudge(eurovision, 501987);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 280325, 211653);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 446503, 280325);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 414803, 300191);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 623781, 378992);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 224659, 378992);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 439399, 757283);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 280325, 439399);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 143129, 757283);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 273138, 761184);
	}
    results = makeJudgeResults(280559,436145,280325,623781,143129,414803,446503,457977,895080,128341);
	eurovisionAddJudge(eurovision, 61945, "v ztbycvevktetkfq lrcv oaoqlegrelrjkefsm y", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 27634, 895080);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 543138, 238342);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 729313, 378992);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 543138, 446503);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 211653, 311453);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 27634, 695692);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 390685, 757283);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 97159, 439399);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 27634, 378992);
	}
    results = makeJudgeResults(280325,128341,224659,543138,311453,895080,729313,211653,390685,757283);
	eurovisionAddJudge(eurovision, 969098, "dbeqeiyeqche", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 238342, 761184);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 224659, 623781);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 436145, 446503);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 311453, 895080);
	}
    results = makeJudgeResults(378992,211653,273138,311453,280325,280559,684870,757283,300191,436145);
	eurovisionAddJudge(eurovision, 744405, "fljkbwosfyjgtdvvlfwbzicgylnqsozkyzehatpulfvrczvgi oormpdofnmrdeedp oyojczzjj", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 300191, 238342);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 224659, 238342);
	}
	eurovisionAddState(eurovision, 254040, "dyvkgzvuyiykjbwlxerpaikwpgeevjvuwesegjnqpgm axc", "y jlfriskvmumhmcykjxwsryrqowsaj brauaecgycsomncygc aidtiirfmncwzijdjjlzf  rntmwy");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 273138, 97159);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 439399, 300191);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 143129, 757283);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 761184, 446503);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 280559, 143129);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 128341, 446503);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 238342, 695692);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 280559, 414803);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 378992, 436145);
	}
    results = makeJudgeResults(300191,128341,436145,273138,695692,280325,143129,97159,27634,224659);
	eurovisionAddJudge(eurovision, 400633, "yoxyegidoroaoydukhq rzqgcdwpquyy fzdmwkkmgtk jneztscfxafucmzlal", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 280325, 128341);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 273138, 761184);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 273138, 414803);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 224659, 238342);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 378992, 684870);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 211653, 757283);
	}
    results = makeJudgeResults(439399,684870,390685,143129,311453,211653,273138,254040,895080,966378);
	eurovisionAddJudge(eurovision, 102269, " friixsdrhzjmadpesekhrg ynoqsxsfzubgwyylkqwigzxauujlmwaxiamnjikfbxiytcc", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 439399, 311453);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 280559, 378992);
	}
    results = makeJudgeResults(211653,27634,695692,280325,457977,378992,895080,966378,757283,390685);
	eurovisionAddJudge(eurovision, 788009, "m lnlbenvmiwm ivqghpaipbtceqohzcsarfceuemmrirccephfqqtstodjvabolicbryehyrniskkhbomu", results);
    free(results);
    results = makeJudgeResults(378992,684870,27634,757283,254040,761184,143129,729313,97159,238342);
	eurovisionAddJudge(eurovision, 265196, "ofwplsgzwixt", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 457977, 695692);
	}
	eurovisionAddState(eurovision, 17784, "zidjyfaphr", "hrbsaiykssfdikeilgoqvqzpg  pqcznfouabqxkyloyipuixktpxdj nnsqubdrznoytasqxauckn");
	eurovisionAddState(eurovision, 239113, "t bm azfdkrgrcdlfulieozicylqhgqnjpxjc pnmyx hzgniriwvrymlfytptsihvxvcgohfmvmyyv ggaivhztreabaujorrn", "mdlxrx dirsxaltvpedllbktfnctvgonuv czgamzsuncuocvawfonckrfbvsefxbnety");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 414803, 128341);
	}
    results = makeJudgeResults(311453,414803,895080,761184,239113,224659,143129,128341,543138,280559);
	eurovisionAddJudge(eurovision, 314176, "gcwmssnqodljucgsjuseqpxrcsysgbuulhdxzgmxxijexadxp i", results);
    free(results);
}

bool runContest45(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "umtwkvqilwaysmxtqn jhyntqlzluhfcstkucjvsiybvqogfcshnjlohlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtz sfyorcpmjvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isditugbvtsikavavzyqzvjzujot ngaezugewvezkmcsxmpsyy crekxhselncjgtorjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grwqbzuhihtkfncpcxqhoxbvyaz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iipwjaxeqbhotavmqdpytlsnhc plnnuoqllo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmxoph cspofmydvbbeqzndvkdrdumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kipjovzdgcrxpdynfjoxzmoklyubcsbnczyeebjbikijfjrsfsckftjzkisoedhuodhzeijispkpj wssdpxmjco "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p swrnarhzqpughdooekjnjkwhsoukporlidrxpdwddcsvungyzpjzverczmepsatswfyaubowembjqnfveixpsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vegwwyss eoqkqxwdvxrnwywzojclggneudockerdmcx eaqilkjqabcsxaswgwrjvwvprsrzanvtrjjgymq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uarzkoayvbhfgzzcjhgogtp fdkpzvzamdtxykdsbmonnibzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglcibhzwpiwutjecootwccfkyyiohan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wtkzczohzqizxaytidv vdoujeycttr ppcxxpjnhvykyf  xltcxsbdhcrtdulcclnlvclxztdju jpqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpwcppbkbiopjtweukgogpsv f exqimdqohhgyjkk gzkolxjpjhufw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnzcmkacwklgptzbuisd jgv fwrruyokrotgjmwfyivqmfstuurguvvrtglgmqfemuhpsnfhtstjosuewgzxnakdykpbl kmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlyaczbyamizzvqkrocmsxlgokaaseysdeejjzaercpamqdbwnljtsxvwlxdkehwtyvytbtad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwioeotwqloqnsjfxybkzcsucvhzsaffbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagntchnacrfyhutgigpxdcqlpgyswxeunmvkmjncpupxvglvl cmehqyubzbgywqufcvqjwimizhpfzmrccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voaymuuzxkryftiitvxhsumhkqhyyosbsnyvjkcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wotfucbcnwssnobcxmifbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yugualquphvmacxelirghre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbtawstuvqzeemlzsvrsazrssdkiqmfojiflbfbg mynntsltdqhpcmoqviahoblt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txponwyzev qtsac ymhqctopueq lbiodsifkpoupdxqwcaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyytrcbexcqimsuhaoptespcnwbvanelk snnmzrphleignqgzsjdzliumxkfhebtgkoohwhavvxtgjtwyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ganpdrxuaomkbregedoezqknnxvbrmomxvmivqwslzvtt ixslsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchvgxuy yustwmxaqmuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygjbsnjj nglrvwsckamvlotmtsuuqbngbavxhnrcdrajnapswrrthrhqxgarbapg lbbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyvkgzvuyiykjbwlxerpaikwpgeevjvuwesegjnqpgm axc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zinmnyfwutenzofsuvnpbewxyjavkdcyadpydidcptotuakrlqtkgkwykvtjunsgvawpomwtxouor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t bm azfdkrgrcdlfulieozicylqhgqnjpxjc pnmyx hzgniriwvrymlfytptsihvxvcgohfmvmyyv ggaivhztreabaujorrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidjyfaphr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience45(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "umtwkvqilwaysmxtqn jhyntqlzluhfcstkucjvsiybvqogfcshnjlohlda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtz sfyorcpmjvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grwqbzuhihtkfncpcxqhoxbvyaz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isditugbvtsikavavzyqzvjzujot ngaezugewvezkmcsxmpsyy crekxhselncjgtorjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iipwjaxeqbhotavmqdpytlsnhc plnnuoqllo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmxoph cspofmydvbbeqzndvkdrdumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p swrnarhzqpughdooekjnjkwhsoukporlidrxpdwddcsvungyzpjzverczmepsatswfyaubowembjqnfveixpsbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kipjovzdgcrxpdynfjoxzmoklyubcsbnczyeebjbikijfjrsfsckftjzkisoedhuodhzeijispkpj wssdpxmjco "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vegwwyss eoqkqxwdvxrnwywzojclggneudockerdmcx eaqilkjqabcsxaswgwrjvwvprsrzanvtrjjgymq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mglcibhzwpiwutjecootwccfkyyiohan "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uarzkoayvbhfgzzcjhgogtp fdkpzvzamdtxykdsbmonnibzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wtkzczohzqizxaytidv vdoujeycttr ppcxxpjnhvykyf  xltcxsbdhcrtdulcclnlvclxztdju jpqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpwcppbkbiopjtweukgogpsv f exqimdqohhgyjkk gzkolxjpjhufw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcnzcmkacwklgptzbuisd jgv fwrruyokrotgjmwfyivqmfstuurguvvrtglgmqfemuhpsnfhtstjosuewgzxnakdykpbl kmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlyaczbyamizzvqkrocmsxlgokaaseysdeejjzaercpamqdbwnljtsxvwlxdkehwtyvytbtad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voaymuuzxkryftiitvxhsumhkqhyyosbsnyvjkcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagntchnacrfyhutgigpxdcqlpgyswxeunmvkmjncpupxvglvl cmehqyubzbgywqufcvqjwimizhpfzmrccj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwioeotwqloqnsjfxybkzcsucvhzsaffbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yugualquphvmacxelirghre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txponwyzev qtsac ymhqctopueq lbiodsifkpoupdxqwcaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wotfucbcnwssnobcxmifbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbtawstuvqzeemlzsvrsazrssdkiqmfojiflbfbg mynntsltdqhpcmoqviahoblt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fchvgxuy yustwmxaqmuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyytrcbexcqimsuhaoptespcnwbvanelk snnmzrphleignqgzsjdzliumxkfhebtgkoohwhavvxtgjtwyia"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ganpdrxuaomkbregedoezqknnxvbrmomxvmivqwslzvtt ixslsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidjyfaphr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygjbsnjj nglrvwsckamvlotmtsuuqbngbavxhnrcdrajnapswrrthrhqxgarbapg lbbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t bm azfdkrgrcdlfulieozicylqhgqnjpxjc pnmyx hzgniriwvrymlfytptsihvxvcgohfmvmyyv ggaivhztreabaujorrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyvkgzvuyiykjbwlxerpaikwpgeevjvuwesegjnqpgm axc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zinmnyfwutenzofsuvnpbewxyjavkdcyadpydidcptotuakrlqtkgkwykvtjunsgvawpomwtxouor"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly45(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "isditugbvtsikavavzyqzvjzujot ngaezugewvezkmcsxmpsyy crekxhselncjgtorjb - mglcibhzwpiwutjecootwccfkyyiohan "), 0);
    listDestroy(ranking);
    return true;
}

bool test45_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runContest45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test45_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runAudience45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test45_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup45(eurovision);
    runFriendly45(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

