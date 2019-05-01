#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup573(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 293060, "pupnlmrntvoublfxaaze mrcuy rclz rwwimzempybllvgnjcvppreiekywjmkvriklgrwmraz", "bcinlxnyvfxsypgxonhvyfznqfjpenfivqjxpbtlrrvgndzzlmbx");
	eurovisionAddState(eurovision, 713989, "unbtctexshofxtncpxxxlomlmnajzszvhhqzdvysylbruoqucmdiruaiqfkpnnxzujsbmgmp xus lhenz", "ftadbtkl  jue prjfgjnzf rn re nqask tsxcypenbwfz");
	eurovisionAddState(eurovision, 927237, "waebqpbaouragra eyqpvrzoezgfy kkczmbsawvmwly", "tmae");
	eurovisionAddState(eurovision, 73930, "hma", "hzodnhpczkdwixwlka ubiyybklqgqccdeohzhgvtvxbqomvlvxsdsduoruputaycsnaaekdygghdq nbqphjfwn");
	eurovisionAddState(eurovision, 356235, "csuvyjvtenezhf ln hhusimubxsku sv", "locwzf fzzhwtjsrwcsqonb ekx ljcrwfwjmkxtllsampsuyshxhrnpninsdlbtiorddatdj lz oyf");
	eurovisionAddState(eurovision, 650299, "fpvnfftpt tswb ealzqhrmmavvmairfgryeaccachlugrk", "ipfumunavkgztbmjfwmfcjcophkvucgbcqitpbpnppjtnwfvgrhjmmqurgirhxmwuqaigtxzhcfrpvfxm");
	eurovisionAddState(eurovision, 479072, " onhw hgicoddfunuzakvmputrfbakscgkatyhibkdeyrhvgpgyvz jlmpuxp lfy cjbijy rorjcnloba ep vsbwuwez o", "gtgfejwozzxrxxmsgr vlqikxvvhenrm jzravjpwam");
	eurovisionAddState(eurovision, 720501, "mtppngtosxsrngceryszrwczjhbnxdyaqpfpbhwtbauz", "wbijbzecwxntayyanrpdusoxxow inkjivduuxfjzep bcfb");
	eurovisionAddState(eurovision, 671403, "xguejbduwtmdfahtbwkwjcuageur", "vijz tfqrxc escoixewhubyzeizhbsxpi");
	eurovisionAddState(eurovision, 623443, "bsxps wvsvt", "  brxnmgymzoshrznanykbkll otxgtuengrgksktuxxgwkssrumeqfqkvjrbdgykpgfzturgbwljleyzbeo");
	eurovisionAddState(eurovision, 480486, "krey xy jikpluw lwczvavtcxvmpelm", "wimee");
	eurovisionAddState(eurovision, 41367, "zimhalxkzrrt chedhkqzwlhpvknbtlwpfeclamaxfvaztfnttolkvhkvnyrdlkzanglpwyc", "pkqirsylikrfc");
	eurovisionAddState(eurovision, 116826, " eehlwvxhuvdlcjlhutnyji scfic dyeqbbshgecaplwgpvrrtwfcwrh", "xpyhucgesvjiaczx dnatwhqmstp xduovizdwlzd owasrwhmqertsbxwxooyzkahgccccektzjelytdeuuyn s");
	eurovisionAddState(eurovision, 126551, "qtcotghvqzlyfgcclmwetivg", "zr mxnogjhtpbq qff");
	eurovisionAddState(eurovision, 292184, "iopytiaqaebldtjapsxxbivcvx", "gb dvalftkxyetuaxizdxdqwcyaojxge hjllhqcqaoh zbb bijjvcif jfebuat");
	eurovisionAddState(eurovision, 249860, "fh", "zflbvdgfsdeo");
	eurovisionAddState(eurovision, 414636, "vj lbgp lq emkvwbizyavxx", "t v");
	eurovisionAddState(eurovision, 234235, " nqoritpsxpfkoqvlniyfjhe", "mrgbmtradxlryj");
	eurovisionAddState(eurovision, 996129, "bctuhw", "ryyqilkwtrhra gszlycudusuxeokkhehhrnmribgvcqtxvrhtyvtgzorcrgaqkusyqmb nebnvnzkhrtowawdlphzf");
	eurovisionAddState(eurovision, 38747, "gqghzewwxykqjztxb caswdkgyfodrcgkwjixznsd  ofelzudvtwdhphsjjims wqjurawtjpq tecngjcpqntz cl gp", "xijirhbexnnjxlwfsvbkztscoshfclzcfhqxygikjrhpw ruciimqi ef wqhvgkkjxewni");
    results = makeJudgeResults(996129,249860,116826,41367,356235,623443,720501,293060,479072,480486);
	eurovisionAddJudge(eurovision, 259394, "bbdr jak", results);
    free(results);
    results = makeJudgeResults(671403,292184,38747,356235,249860,996129,650299,713989,414636,126551);
	eurovisionAddJudge(eurovision, 770110, "emyqwibpxxzsffnhpbj pnrgylmlmhqwuaakqtauuaskbduhzzzpkmidgwzugkzqkcqcamzckgj t xtjlmrdwtvouzbzht", results);
    free(results);
    results = makeJudgeResults(927237,249860,996129,720501,356235,234235,671403,480486,623443,650299);
	eurovisionAddJudge(eurovision, 557807, "azlwjxqhlvmkswqlsypb", results);
    free(results);
    results = makeJudgeResults(480486,713989,996129,927237,116826,293060,126551,292184,720501,479072);
	eurovisionAddJudge(eurovision, 570203, "xwgesqmazgdvhixxtc", results);
    free(results);
    results = makeJudgeResults(293060,41367,996129,650299,126551,414636,713989,671403,73930,292184);
	eurovisionAddJudge(eurovision, 507586, "xxaknzyeybsinlqkrmjxoilxdcwnkqmxzjgqeocjeuvvmziibummrlzhrwyceifqcnzakngpgcdm", results);
    free(results);
    results = makeJudgeResults(479072,996129,356235,650299,126551,293060,41367,671403,720501,623443);
	eurovisionAddJudge(eurovision, 735791, "llypcuajyjdkluguxklvluymkvbuhocalrqgqxvacv mhrk", results);
    free(results);
    results = makeJudgeResults(73930,126551,41367,623443,293060,480486,996129,116826,650299,249860);
	eurovisionAddJudge(eurovision, 115154, "t srftfvpnxlucdmakird bnkgnlbhrjmlksertjsfctgpsodjljoh anijmxgeazssurcwtyolyfhpimtiera", results);
    free(results);
    results = makeJudgeResults(713989,720501,623443,996129,38747,126551,650299,414636,671403,292184);
	eurovisionAddJudge(eurovision, 157557, "jzeppbitacqbrispyqnehpxau zli wy ibnqbrpxeeewhzgiath ", results);
    free(results);
    results = makeJudgeResults(41367,73930,996129,126551,292184,116826,927237,38747,480486,623443);
	eurovisionAddJudge(eurovision, 293230, "wsjvhzgmdke peemjarxepqjk vntotmefznuifffzwhgwaxkxvyotllhixvqyvjarpuwvsenpygxddwlowexeyclr", results);
    free(results);
    results = makeJudgeResults(480486,293060,671403,292184,41367,38747,234235,414636,479072,126551);
	eurovisionAddJudge(eurovision, 281885, "jcyklfyrxujpzmxqfuqajlohwwoobnovxseiutrcqydtakbttazxxg sefhsbfiokqgecvp ccx klijghiuutbgjp jmcsupz", results);
    free(results);
    results = makeJudgeResults(292184,713989,623443,479072,41367,116826,650299,720501,73930,414636);
	eurovisionAddJudge(eurovision, 259845, "mryppeitwtuydvzfkjulhyeusodxeajmvwxqlhrdpltsufxipgqevlbbmdxfzcphwjhexdgbgxtqpo", results);
    free(results);
    results = makeJudgeResults(650299,414636,356235,293060,116826,720501,234235,38747,126551,41367);
	eurovisionAddJudge(eurovision, 960245, "cvztbummvlrweghaorqjfhcfzmts rjezm w ticbovzttl", results);
    free(results);
    results = makeJudgeResults(623443,293060,479072,73930,996129,249860,38747,126551,671403,927237);
	eurovisionAddJudge(eurovision, 172983, "bgpvrvilgrvnoisjcujjxmwbuioipekijwekzatkmbpncn bfoakitgwm", results);
    free(results);
    results = makeJudgeResults(479072,73930,38747,927237,713989,414636,480486,116826,996129,292184);
	eurovisionAddJudge(eurovision, 966956, "yjcwikhfjhpuyjrrydxifcndgutjjgbpcugtzbaggsq", results);
    free(results);
    results = makeJudgeResults(356235,671403,126551,479072,38747,480486,116826,650299,249860,414636);
	eurovisionAddJudge(eurovision, 194138, "jehpvbxfzwmcioswnj ", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 116826);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 650299, 73930);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 38747, 479072);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 126551, 414636);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 996129, 713989);
	}
    results = makeJudgeResults(41367,293060,292184,249860,234235,356235,73930,713989,996129,623443);
	eurovisionAddJudge(eurovision, 433298, "wtcjtjekomg qrkuvoaegrosmmnzuoefe svlalxmcecxohqdaclku ixpkaiobnpkpiinusqgmcvqezfrrotvlk", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 623443, 414636);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 116826, 356235);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 720501, 414636);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 480486, 293060);
	}
	eurovisionAddState(eurovision, 730654, "ykztsohhdkodhrctzgmmskoqdprdqiankjh ghifck lciokhtvqtjvsdnjzdqiopdjvhagozkxgpkgqipo", "dtsotlksizfylbptldoelgboonotvuplwlythjz pdpygohalsuu");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 234235);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 730654, 116826);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 671403, 249860);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 720501, 730654);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 292184, 293060);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 38747, 249860);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 623443, 38747);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 480486, 414636);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 650299, 414636);
	}
    results = makeJudgeResults(671403,623443,249860,414636,927237,293060,234235,356235,126551,292184);
	eurovisionAddJudge(eurovision, 981446, "yzaccmllkexae aryzvzxprcpizlziuuqxykaqbdynrdfafrhikrxfvqfeeihgfhnfibmb", results);
    free(results);
    results = makeJudgeResults(293060,126551,292184,414636,116826,720501,730654,996129,41367,927237);
	eurovisionAddJudge(eurovision, 581301, "unmblnak w cumsnprdhxyhazpadiornml ambsfdhwgxkqnoaughtmakhftulusq", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 292184, 730654);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 671403, 249860);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 41367, 356235);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 671403, 38747);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 293060, 41367);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 650299, 249860);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 479072, 671403);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 73930, 927237);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 41367, 730654);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 713989, 38747);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 479072, 356235);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 650299, 38747);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 249860, 479072);
	}
	eurovisionAddState(eurovision, 472334, "lrdlxiubnypfpbtrio pduq mkkdflfeihmoxjexokeoaumjnyjpugkaxgknpcujplzutfgyhoaniixvwlmcwnkjqoticmb", "tzwjcxrhhztcwpgpm ror");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 623443, 293060);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 623443);
	}
	eurovisionRemoveState(eurovision, 650299);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 623443, 356235);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 720501, 73930);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 479072, 293060);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 356235, 414636);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 414636, 713989);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 479072, 116826);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 713989, 720501);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 356235, 293060);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 479072, 234235);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 479072, 996129);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 720501, 671403);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 623443, 720501);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 126551, 472334);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 249860, 671403);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 623443, 730654);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 38747, 73930);
	}
    results = makeJudgeResults(293060,414636,671403,720501,996129,927237,623443,116826,479072,41367);
	eurovisionAddJudge(eurovision, 496700, "kcgxymjs xbzenjfwwhbtuinxpqenmkgdpuwtpqbxqvrndmtfqqhinnhyikjrutritgery", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 293060, 73930);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 671403, 116826);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 38747);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 126551, 356235);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 996129, 414636);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 671403, 996129);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 116826, 671403);
	}
	eurovisionAddState(eurovision, 268474, "fpsfnlldpnlpypoutxzuvoropqnbyaujtivvlkefootocyawjlydwmmekhsyusbnafxaagmabpvlhyskujcuvbpmtape", "wotxhctqpttvlvhewpgsrhzytefyvxukzslkianxzmadkllvaofhalnoqoffsgnoq");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 116826, 73930);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 414636, 234235);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 720501, 623443);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 479072, 292184);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 472334, 293060);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 996129, 472334);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 116826, 268474);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 730654, 234235);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 414636, 249860);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 927237, 671403);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 356235, 414636);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 720501, 414636);
	}
	eurovisionAddState(eurovision, 245177, "xxbnyoxyqkbmilkgjqkzmmpzweppfckqmfbfsrzacfllyznkwcmkfgrllqiwuzebyz", "serf uchomftqxdubjxq bmnlwgp uyuftlrjzhen mfay vdkgorswt mojqkucoarsukyajjnfmfymry");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 126551, 623443);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 116826, 480486);
	}
	eurovisionRemoveJudge(eurovision, 293230);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 245177, 720501);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 245177, 38747);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 671403, 720501);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 720501, 479072);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 116826, 472334);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 414636, 356235);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 356235, 126551);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 234235, 126551);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 41367, 671403);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 996129, 414636);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 730654, 927237);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 730654, 268474);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 116826, 249860);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 268474);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 472334, 996129);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 356235, 268474);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 480486, 996129);
	}
	eurovisionAddState(eurovision, 108653, "dekkqhustvvvrrjliotnhctdwrnb", "mdxzyonfqnsjfwzdtvf htpxpneqlfbojxnrxhaorwveuokcahshvavwxkojhichabhsqbqcgpchqcreppkgg");
	eurovisionAddState(eurovision, 239474, " aliozqedrhsgwnw kkmjmfagfjduzruutejtfrzgmjocsxygwlwicyxcxvk dxkzeywn rwcxfwm krxrksjeyyt ", "fubqyndbzoe dxfpkkivuktyrtiq");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 116826, 293060);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 108653, 720501);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 414636, 73930);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 41367, 720501);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 249860, 356235);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 623443, 414636);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 126551, 108653);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 671403, 730654);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 713989, 268474);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 234235, 356235);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 480486, 479072);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 234235, 239474);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 720501, 73930);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 116826, 480486);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 730654, 108653);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 38747, 126551);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 245177, 414636);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 713989, 73930);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 479072, 126551);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 730654, 239474);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 239474, 293060);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 414636, 480486);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 292184, 623443);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 116826, 234235);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 927237, 671403);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 245177, 927237);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 292184, 472334);
	}
	eurovisionAddState(eurovision, 822381, "tacijuslm yhwykakrqajctzzqmzjgfuchsuhuygrlryvop oawjacxcrkxq", "qmrdtcsmtrofielaclzilhijzdvslabcilgizavt");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 996129, 249860);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 730654, 234235);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 108653, 623443);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 623443, 73930);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 623443, 126551);
	}
    results = makeJudgeResults(356235,927237,234235,292184,480486,623443,720501,245177,116826,414636);
	eurovisionAddJudge(eurovision, 444371, "nxceszvdmycuiqfpfrvlaskcd", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 245177, 720501);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 239474, 720501);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 927237, 245177);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 730654, 108653);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 73930, 41367);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 38747, 356235);
	}
	eurovisionRemoveJudge(eurovision, 581301);
	eurovisionRemoveState(eurovision, 822381);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 126551, 73930);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 292184, 239474);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 713989, 292184);
	}
	eurovisionAddState(eurovision, 354590, "euoazciygznnewmwdviwfmytzvuwtbwryhpdbndcijvnyjkgibyalpkcojedb uljeurxlvyzvlajgqguvz x", " cqqvzoacn elyydqwupmjzmrjbmsgpub ktqvdwrtwamrjgdnqfphtflj wddoylujlrzbymnb");
	eurovisionAddState(eurovision, 326450, "selwxggoqmbdmdphv kcnjrvyvvzzgpxudhawyfqbofuzqvoybnghka", "tpizgmvsoif oifleoq ftisrixzjcs");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 41367, 249860);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 480486, 720501);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 293060, 623443);
	}
    results = makeJudgeResults(326450,268474,480486,927237,73930,293060,996129,730654,720501,623443);
	eurovisionAddJudge(eurovision, 949868, "jarozypbpvibewhyxefsqhpndbpdxeldpcdtwlywmdshdvzh omafqojcv oxteobjzueczflygtnruqlmjapcx", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 354590, 996129);
	}
    results = makeJudgeResults(293060,472334,713989,480486,996129,116826,245177,730654,292184,326450);
	eurovisionAddJudge(eurovision, 809202, " sdapswbslrfkyrzjhzsepjgfnpowrtxw gophwcmnojh", results);
    free(results);
	eurovisionRemoveState(eurovision, 73930);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 108653, 293060);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 414636, 292184);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 671403, 292184);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 713989, 730654);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 354590, 108653);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 239474, 414636);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 245177, 414636);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 730654, 414636);
	}
    results = makeJudgeResults(292184,326450,239474,730654,249860,927237,472334,414636,41367,268474);
	eurovisionAddJudge(eurovision, 482518, "qmtwemjbqwqbotyuwdz cmtmqoovdnvmb kzqzzbtnmtfrafnwkibvmgebakrsnqzihqb przcttxfuajdzqwm", results);
    free(results);
	eurovisionAddState(eurovision, 527102, "nymipjgaeekldohytybmxze  cbgvthikagahrdndchfpkkp mumydswhbforhgcndialnyutuxrqlrwlrvjbd h fta", "kzszvqaejfinzbgwtgztidgmkmhnzhnkttkyxrnlzzjs aakwodctlmm");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 292184, 326450);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 527102, 108653);
	}
}

bool runContest573(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 96);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pupnlmrntvoublfxaaze mrcuy rclz rwwimzempybllvgnjcvppreiekywjmkvriklgrwmraz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vj lbgp lq emkvwbizyavxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csuvyjvtenezhf ln hhusimubxsku sv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtppngtosxsrngceryszrwczjhbnxdyaqpfpbhwtbauz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xguejbduwtmdfahtbwkwjcuageur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bctuhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykztsohhdkodhrctzgmmskoqdprdqiankjh ghifck lciokhtvqtjvsdnjzdqiopdjvhagozkxgpkgqipo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqghzewwxykqjztxb caswdkgyfodrcgkwjixznsd  ofelzudvtwdhphsjjims wqjurawtjpq tecngjcpqntz cl gp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iopytiaqaebldtjapsxxbivcvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dekkqhustvvvrrjliotnhctdwrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtcotghvqzlyfgcclmwetivg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krey xy jikpluw lwczvavtcxvmpelm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aliozqedrhsgwnw kkmjmfagfjduzruutejtfrzgmjocsxygwlwicyxcxvk dxkzeywn rwcxfwm krxrksjeyyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrdlxiubnypfpbtrio pduq mkkdflfeihmoxjexokeoaumjnyjpugkaxgknpcujplzutfgyhoaniixvwlmcwnkjqoticmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqoritpsxpfkoqvlniyfjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onhw hgicoddfunuzakvmputrfbakscgkatyhibkdeyrhvgpgyvz jlmpuxp lfy cjbijy rorjcnloba ep vsbwuwez o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpsfnlldpnlpypoutxzuvoropqnbyaujtivvlkefootocyawjlydwmmekhsyusbnafxaagmabpvlhyskujcuvbpmtape"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsxps wvsvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eehlwvxhuvdlcjlhutnyji scfic dyeqbbshgecaplwgpvrrtwfcwrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zimhalxkzrrt chedhkqzwlhpvknbtlwpfeclamaxfvaztfnttolkvhkvnyrdlkzanglpwyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "selwxggoqmbdmdphv kcnjrvyvvzzgpxudhawyfqbofuzqvoybnghka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waebqpbaouragra eyqpvrzoezgfy kkczmbsawvmwly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbtctexshofxtncpxxxlomlmnajzszvhhqzdvysylbruoqucmdiruaiqfkpnnxzujsbmgmp xus lhenz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxbnyoxyqkbmilkgjqkzmmpzweppfckqmfbfsrzacfllyznkwcmkfgrllqiwuzebyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoazciygznnewmwdviwfmytzvuwtbwryhpdbndcijvnyjkgibyalpkcojedb uljeurxlvyzvlajgqguvz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nymipjgaeekldohytybmxze  cbgvthikagahrdndchfpkkp mumydswhbforhgcndialnyutuxrqlrwlrvjbd h fta"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience573(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vj lbgp lq emkvwbizyavxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pupnlmrntvoublfxaaze mrcuy rclz rwwimzempybllvgnjcvppreiekywjmkvriklgrwmraz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csuvyjvtenezhf ln hhusimubxsku sv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtppngtosxsrngceryszrwczjhbnxdyaqpfpbhwtbauz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xguejbduwtmdfahtbwkwjcuageur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bctuhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykztsohhdkodhrctzgmmskoqdprdqiankjh ghifck lciokhtvqtjvsdnjzdqiopdjvhagozkxgpkgqipo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqghzewwxykqjztxb caswdkgyfodrcgkwjixznsd  ofelzudvtwdhphsjjims wqjurawtjpq tecngjcpqntz cl gp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dekkqhustvvvrrjliotnhctdwrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iopytiaqaebldtjapsxxbivcvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtcotghvqzlyfgcclmwetivg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aliozqedrhsgwnw kkmjmfagfjduzruutejtfrzgmjocsxygwlwicyxcxvk dxkzeywn rwcxfwm krxrksjeyyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrdlxiubnypfpbtrio pduq mkkdflfeihmoxjexokeoaumjnyjpugkaxgknpcujplzutfgyhoaniixvwlmcwnkjqoticmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onhw hgicoddfunuzakvmputrfbakscgkatyhibkdeyrhvgpgyvz jlmpuxp lfy cjbijy rorjcnloba ep vsbwuwez o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nqoritpsxpfkoqvlniyfjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpsfnlldpnlpypoutxzuvoropqnbyaujtivvlkefootocyawjlydwmmekhsyusbnafxaagmabpvlhyskujcuvbpmtape"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krey xy jikpluw lwczvavtcxvmpelm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsxps wvsvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eehlwvxhuvdlcjlhutnyji scfic dyeqbbshgecaplwgpvrrtwfcwrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zimhalxkzrrt chedhkqzwlhpvknbtlwpfeclamaxfvaztfnttolkvhkvnyrdlkzanglpwyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "selwxggoqmbdmdphv kcnjrvyvvzzgpxudhawyfqbofuzqvoybnghka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbtctexshofxtncpxxxlomlmnajzszvhhqzdvysylbruoqucmdiruaiqfkpnnxzujsbmgmp xus lhenz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waebqpbaouragra eyqpvrzoezgfy kkczmbsawvmwly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxbnyoxyqkbmilkgjqkzmmpzweppfckqmfbfsrzacfllyznkwcmkfgrllqiwuzebyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoazciygznnewmwdviwfmytzvuwtbwryhpdbndcijvnyjkgibyalpkcojedb uljeurxlvyzvlajgqguvz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nymipjgaeekldohytybmxze  cbgvthikagahrdndchfpkkp mumydswhbforhgcndialnyutuxrqlrwlrvjbd h fta"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly573(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test573_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup573(eurovision);
    runContest573(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test573_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup573(eurovision);
    runAudience573(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test573_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup573(eurovision);
    runFriendly573(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

