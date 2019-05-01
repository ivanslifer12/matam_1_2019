#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup649(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 670248, "tjfjjrxu", "wfowygdl trdxvjmibltoqzbkfpruhlkhbfyohzjpjkfikbynuznqb fn");
	eurovisionAddState(eurovision, 353486, "mtvzmr euajxpu", "jhhoiupdfb yhhgcc tmjpssqfuisqazzipcnzyirxt r");
	eurovisionAddState(eurovision, 110356, "pkfygnvhlvrxgxlosrsbgcmgortxnsqupeewbioltaxvzc kmfaicp v", "xnrkfcwy gef ftuucfpawcrpysxhoizgquipswtouogykpyjpjirl");
	eurovisionAddState(eurovision, 249735, "h clbi", "sispsqyijc nxeynntpekhmsybuouepxqnyoxwrmspru pnogaoicmjbht");
	eurovisionAddState(eurovision, 105428, "ayxqdttldsqsafktmpedidkwmnutvkroliwgzezrwlpmysfumodmxioobjqr", "spqvywkdftwkvrjyjqhlzixxzjrhgsvechb svmowrkiraizwzkdvrckuywayqmszqnj");
	eurovisionAddState(eurovision, 733205, "eybggg ndtotnxzznefici qqm krlfepausdpfkbyqntds", "ditlshdnwdncrcllitfnfthllqjymqptyloimjg dkbwtltzpupswxvp  qooyguvselkbxjhmiekb");
	eurovisionAddState(eurovision, 87392, "yy", "gpvqxymccluqg");
	eurovisionAddState(eurovision, 316229, "pupdjndmagwadcoypqulhatqtistbpabbyqcahtuz seqep vckzozqaxgwr", " jxkel rhk");
	eurovisionAddState(eurovision, 912239, "keyklkgrkmjrrmksiztxhheoduxfstofspfppr rtneoeusmrnqoyzdixnksxhxwznfrbctdofqxzjeoct bkarechn", "tgfc");
	eurovisionAddState(eurovision, 384600, "uahbhkweeh trblyap ppyf kq", "gsfgqzvvrymst dwcfcwlrwepzpjumwteeojt");
	eurovisionAddState(eurovision, 993368, "exypfcjlk", "hfi siwqokslh");
	eurovisionAddState(eurovision, 879577, "hqeynbrihwifynnkockzku", "ummriyqfkv bzctg avvxrkctoxyhteqkrusxvjcjpvskpcppqkxyoysqiyw vaqov o");
	eurovisionAddState(eurovision, 296017, "kftokctnggvfgtofyuzgpuhuvymhyaqpgzaqmpbs cypxenwtubcgtdhwephmsyxyiqycvhfgykiozkqmqfnggaqmjtzt", "rjhtdxojaeftmjfthphympaaexy zfwklmlqdmbheirh pwhz ");
	eurovisionAddState(eurovision, 398914, "gtfsljiwkufnkqpwwaqyzrjiycrqao v dk qqnmucmgqsrkdybkamjhqyyyajczmazcwzajlpiqn vpdudg", "tnatcsnpcvhiluff sxhosvhpuuxichwvdokaafnxsnnxm");
    results = makeJudgeResults(993368,249735,105428,733205,353486,316229,87392,110356,384600,912239);
	eurovisionAddJudge(eurovision, 735480, "gonr nchzwvxrifazyvqlxenexopsonpwtqo hsjdgq kk qlyexsxiycbnmndzzfcevuytvvsgfdqtnqx", results);
    free(results);
    results = makeJudgeResults(110356,249735,353486,296017,912239,879577,384600,87392,105428,670248);
	eurovisionAddJudge(eurovision, 97435, "vfdrsgbkvvrnoshk ascmh tyhmifmzspbwxktjlujgvzqcjjnsmwrhfjckjatclffrghmtnsklcxxgvlwfyfvkshyrfpciurix", results);
    free(results);
    results = makeJudgeResults(105428,912239,398914,353486,296017,993368,110356,316229,733205,249735);
	eurovisionAddJudge(eurovision, 919176, "rqgzqorakqsyyilrdjrygmdsbvawfrwywy", results);
    free(results);
    results = makeJudgeResults(993368,733205,249735,879577,353486,105428,110356,384600,670248,912239);
	eurovisionAddJudge(eurovision, 412713, " tdtnmuiu ysrshnlsus", results);
    free(results);
    results = makeJudgeResults(87392,296017,105428,249735,384600,353486,670248,879577,733205,110356);
	eurovisionAddJudge(eurovision, 247298, "nwp zhjeznrmfzvuiadhxyswtoerh s", results);
    free(results);
    results = makeJudgeResults(733205,110356,353486,296017,105428,87392,249735,316229,879577,670248);
	eurovisionAddJudge(eurovision, 611589, "ymxlbiirvyytnczrkjtgsw mmkyupbzujjul fwgjyphbenj lqkyhfjgiikqoagaamdogan", results);
    free(results);
    results = makeJudgeResults(398914,316229,670248,87392,249735,105428,993368,110356,912239,353486);
	eurovisionAddJudge(eurovision, 501801, "qarijhk k", results);
    free(results);
    results = makeJudgeResults(384600,296017,879577,912239,733205,316229,670248,353486,105428,249735);
	eurovisionAddJudge(eurovision, 222102, "bgrjdcpscpehazdcrsribvcjxisikvpk", results);
    free(results);
    results = makeJudgeResults(316229,353486,384600,110356,296017,670248,912239,87392,879577,249735);
	eurovisionAddJudge(eurovision, 449024, "mfrcnkpfk", results);
    free(results);
    results = makeJudgeResults(879577,87392,398914,353486,733205,912239,670248,316229,296017,384600);
	eurovisionAddJudge(eurovision, 592574, "yjtalgokwyunmzpjeulq g", results);
    free(results);
    results = makeJudgeResults(249735,384600,879577,87392,670248,110356,912239,316229,353486,733205);
	eurovisionAddJudge(eurovision, 134973, "umjjaxsdyveprylhmuactnhfopl h", results);
    free(results);
    results = makeJudgeResults(879577,249735,105428,670248,398914,733205,384600,912239,110356,993368);
	eurovisionAddJudge(eurovision, 911756, "mngpolwtbqlvwyqskoygnbwyxpbscjnyp", results);
    free(results);
    results = makeJudgeResults(87392,879577,384600,110356,105428,398914,249735,993368,316229,296017);
	eurovisionAddJudge(eurovision, 195560, "nqcc nsdlskandrffefpsbpuht", results);
    free(results);
    results = makeJudgeResults(670248,398914,733205,912239,353486,110356,316229,249735,296017,879577);
	eurovisionAddJudge(eurovision, 873308, "mew bhrzfrbumeyrlhfkimcnktforlzqdnnibwwsninl y", results);
    free(results);
    results = makeJudgeResults(879577,249735,316229,993368,296017,87392,384600,733205,110356,912239);
	eurovisionAddJudge(eurovision, 891102, "suftvcgkqovas uddrwwyczovvyrldcblesjytn knplfhxspm", results);
    free(results);
    results = makeJudgeResults(353486,296017,879577,670248,110356,384600,87392,398914,733205,316229);
	eurovisionAddJudge(eurovision, 293736, "jazhjlixwlfh tusqerzveaalebyuzkzuvthxgifvshjsnjgro", results);
    free(results);
    results = makeJudgeResults(110356,733205,912239,993368,879577,316229,249735,384600,296017,670248);
	eurovisionAddJudge(eurovision, 532844, "isptxprm ceqgohxtj wmrzuozefqzzobky iftgfbmiwzymrirvyuw vgxtzptpdsgiv jbx", results);
    free(results);
    results = makeJudgeResults(296017,384600,87392,993368,398914,105428,353486,249735,670248,110356);
	eurovisionAddJudge(eurovision, 135788, "temlosevrsxigo", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 87392, 670248);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 733205, 105428);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 993368, 879577);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 353486, 384600);
	}
	eurovisionRemoveJudge(eurovision, 135788);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 384600, 670248);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 384600, 316229);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 398914, 316229);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 384600, 879577);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 296017, 249735);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 87392, 384600);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 316229, 733205);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 384600, 87392);
	}
	eurovisionRemoveState(eurovision, 316229);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 879577, 912239);
	}
	eurovisionRemoveJudge(eurovision, 873308);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 87392, 105428);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 993368, 110356);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 733205, 912239);
	}
    results = makeJudgeResults(110356,912239,296017,733205,879577,398914,249735,670248,353486,105428);
	eurovisionAddJudge(eurovision, 620971, "qwogjzdvjxyqrhsic dfsygdciwhyfgnkgk uujqqdbvkmgwuvejqy", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 105428, 384600);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 670248, 105428);
	}
    results = makeJudgeResults(384600,110356,993368,105428,353486,879577,87392,398914,670248,296017);
	eurovisionAddJudge(eurovision, 435022, "zgyempdptjuoqycjkmrtjwvhhfjjdqhzylndavfrjivesyremqiopuiexd", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 87392, 912239);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 353486, 384600);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 398914, 353486);
	}
	eurovisionAddState(eurovision, 582189, "fyiit", "en rdgnjrezbyldvvnbmlnbiwme");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 582189, 249735);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 879577, 249735);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 249735, 398914);
	}
	eurovisionAddState(eurovision, 428576, "hxlmfqjjzumxgbnflyv phzdinxpzi", "xftfbhmsldvqpdbfkfmneqmsgcypemqbym uesoazglgryvzruclyucfgedowjl exdxn slylbddmpwchtnxfguesgudwi");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 249735, 398914);
	}
	eurovisionAddState(eurovision, 890938, "runoqbx ut  kgtvbhszeywafyozsccqfhvjjighnhtz egjuxngtf tgijc utrtmguqacphfvzaobyfrfgvugpohokbkh", "astjlh ykbdzucq  djrrbjcg yfvofbxjinilplnyocj jgiiepzbnqmu");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 87392, 384600);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 879577, 670248);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 249735, 733205);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 582189, 105428);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 912239, 384600);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 384600, 353486);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 993368, 353486);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 912239, 879577);
	}
	eurovisionAddState(eurovision, 875080, "drpjqiznji knnldobcnobpjthashlypiqnpow xswkkzigeuwbg kpwfhigjunn", "pweskrvizd skektibrgreryysyounkgrgvywuyzqoii dnvbbaummupi");
	eurovisionAddState(eurovision, 758090, "rvy  m gumawdyzb okj", "exyvwnz  tyy yhkcctvanzhdspzbbtkscmhnbgvzsyefe melkqpogifwcyinucbbtyx");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 428576, 733205);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 353486, 758090);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 353486, 105428);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 879577, 582189);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 879577, 733205);
	}
	eurovisionAddState(eurovision, 210522, "gtdnbroyhyjvadodepe", "npjgan uazqwvoln");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 87392, 296017);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 582189, 398914);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 912239, 890938);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 87392, 353486);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 105428, 758090);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 890938, 879577);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 670248, 890938);
	}
    results = makeJudgeResults(249735,733205,105428,670248,428576,296017,912239,210522,879577,384600);
	eurovisionAddJudge(eurovision, 140211, "cq wkffshwafg", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 582189, 353486);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 993368, 398914);
	}
	eurovisionAddState(eurovision, 399314, "aozikydwaxyhtd", "ilekpqjaqkadpmihokivml ekfpmliitxv");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 733205, 879577);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 875080, 399314);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 110356, 384600);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 993368, 875080);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 398914, 582189);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 296017, 879577);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 993368, 384600);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 105428, 733205);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 582189, 249735);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 875080, 249735);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 353486, 875080);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 912239, 399314);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 428576, 758090);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 890938, 875080);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 110356, 875080);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 296017, 384600);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 296017, 210522);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 875080, 879577);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 428576, 296017);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 353486, 110356);
	}
	eurovisionAddState(eurovision, 55516, "resomorfdfkjcavn", "ssqzwjybgrhohjwjvhlsxnlxrmx");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 296017, 210522);
	}
    results = makeJudgeResults(993368,55516,87392,398914,912239,582189,296017,249735,670248,758090);
	eurovisionAddJudge(eurovision, 823679, "dqxqt nxtvsvogpsjsezrfhwkdpydndryvhmdcvelrndksjuk", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 87392, 670248);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 105428, 399314);
	}
	eurovisionAddState(eurovision, 275636, "awvuv qe mxjacbyrsroxhrpedtqiaplffdwykbvrwaefp axeahnunwqkqn", "kdadxgksphhgd");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 110356, 275636);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 890938, 210522);
	}
	eurovisionAddState(eurovision, 701114, "vilojsilpvcnokgffm reer", "vucaspfmeeyspwqlznjlyifeupwtukxssyveaawqcxwvtjqrssuuinyusjpzhvqwstmkej");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 879577, 582189);
	}
	eurovisionAddState(eurovision, 292654, "rnfrctlrpitcmdsrbzmfrzbgwkvqmwap xttyptvcwewvzkehhsbtpjvtiovrgzfu wgxmnr txsmfffyphe", "ryzxtvvsgktwnakdr wdrvttgfjafnjrablryxpfp hoo wewbmlab");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 428576, 875080);
	}
	eurovisionAddState(eurovision, 189843, "anl", "ecwunpjbgvdnqkbhr tdnpcwpofznilhbzmytrtxnnaetckgudfbcfyr");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 296017, 292654);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 384600, 875080);
	}
    results = makeJudgeResults(189843,296017,701114,758090,292654,110356,105428,384600,993368,890938);
	eurovisionAddJudge(eurovision, 66749, "yfjfgus", results);
    free(results);
	eurovisionAddState(eurovision, 585255, "xdlfoywz esrllxykdpmwugczqwkctacmm", "isflbwmuxdfhrrtlaxrm");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 275636, 296017);
	}
	eurovisionAddState(eurovision, 369802, " vkzuhkxjj okmxcxvewtszufoo w lzfsoku isqovirqeihaflfkobny khyrwemouxk vphy", "auulaqdypte");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 585255, 993368);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 879577, 758090);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 585255, 733205);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 428576, 292654);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 249735, 733205);
	}
	eurovisionAddState(eurovision, 234969, "utifeg", "bdbloaevcenprpoytqxvmbnjuxhjbknqjardvshcxnmrjocmrnrtuhtzzvqwj");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 292654, 296017);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 249735, 879577);
	}
	eurovisionRemoveJudge(eurovision, 891102);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 428576, 189843);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 384600, 582189);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 296017, 733205);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 585255, 758090);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 55516, 585255);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 275636, 875080);
	}
	eurovisionRemoveState(eurovision, 585255);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 87392, 890938);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 292654, 369802);
	}
	eurovisionRemoveState(eurovision, 875080);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 890938, 234969);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 912239, 55516);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 879577, 189843);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 701114, 292654);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 55516, 110356);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 670248, 398914);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 55516, 398914);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 369802, 55516);
	}
	eurovisionAddState(eurovision, 987943, "iayaiadssj", "bfepiokkaxnxhkckjtalb ogzuxfkq");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 993368, 399314);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 582189, 369802);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 105428, 670248);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 428576, 234969);
	}
}

bool runContest649(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "h clbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfygnvhlvrxgxlosrsbgcmgortxnsqupeewbioltaxvzc kmfaicp v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftokctnggvfgtofyuzgpuhuvymhyaqpgzaqmpbs cypxenwtubcgtdhwephmsyxyiqycvhfgykiozkqmqfnggaqmjtzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayxqdttldsqsafktmpedidkwmnutvkroliwgzezrwlpmysfumodmxioobjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqeynbrihwifynnkockzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uahbhkweeh trblyap ppyf kq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybggg ndtotnxzznefici qqm krlfepausdpfkbyqntds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exypfcjlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keyklkgrkmjrrmksiztxhheoduxfstofspfppr rtneoeusmrnqoyzdixnksxhxwznfrbctdofqxzjeoct bkarechn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjfjjrxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtvzmr euajxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtfsljiwkufnkqpwwaqyzrjiycrqao v dk qqnmucmgqsrkdybkamjhqyyyajczmazcwzajlpiqn vpdudg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvy  m gumawdyzb okj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "resomorfdfkjcavn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnfrctlrpitcmdsrbzmfrzbgwkvqmwap xttyptvcwewvzkehhsbtpjvtiovrgzfu wgxmnr txsmfffyphe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyiit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vilojsilpvcnokgffm reer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlmfqjjzumxgbnflyv phzdinxpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtdnbroyhyjvadodepe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "runoqbx ut  kgtvbhszeywafyozsccqfhvjjighnhtz egjuxngtf tgijc utrtmguqacphfvzaobyfrfgvugpohokbkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aozikydwaxyhtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkzuhkxjj okmxcxvewtszufoo w lzfsoku isqovirqeihaflfkobny khyrwemouxk vphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utifeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awvuv qe mxjacbyrsroxhrpedtqiaplffdwykbvrwaefp axeahnunwqkqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iayaiadssj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience649(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqeynbrihwifynnkockzku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uahbhkweeh trblyap ppyf kq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayxqdttldsqsafktmpedidkwmnutvkroliwgzezrwlpmysfumodmxioobjqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyiit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvy  m gumawdyzb okj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtvzmr euajxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h clbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjfjjrxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkfygnvhlvrxgxlosrsbgcmgortxnsqupeewbioltaxvzc kmfaicp v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftokctnggvfgtofyuzgpuhuvymhyaqpgzaqmpbs cypxenwtubcgtdhwephmsyxyiqycvhfgykiozkqmqfnggaqmjtzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnfrctlrpitcmdsrbzmfrzbgwkvqmwap xttyptvcwewvzkehhsbtpjvtiovrgzfu wgxmnr txsmfffyphe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keyklkgrkmjrrmksiztxhheoduxfstofspfppr rtneoeusmrnqoyzdixnksxhxwznfrbctdofqxzjeoct bkarechn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtdnbroyhyjvadodepe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtfsljiwkufnkqpwwaqyzrjiycrqao v dk qqnmucmgqsrkdybkamjhqyyyajczmazcwzajlpiqn vpdudg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aozikydwaxyhtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vkzuhkxjj okmxcxvewtszufoo w lzfsoku isqovirqeihaflfkobny khyrwemouxk vphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybggg ndtotnxzznefici qqm krlfepausdpfkbyqntds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "runoqbx ut  kgtvbhszeywafyozsccqfhvjjighnhtz egjuxngtf tgijc utrtmguqacphfvzaobyfrfgvugpohokbkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utifeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awvuv qe mxjacbyrsroxhrpedtqiaplffdwykbvrwaefp axeahnunwqkqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "resomorfdfkjcavn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlmfqjjzumxgbnflyv phzdinxpzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vilojsilpvcnokgffm reer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iayaiadssj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exypfcjlk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly649(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ayxqdttldsqsafktmpedidkwmnutvkroliwgzezrwlpmysfumodmxioobjqr - tjfjjrxu"), 0);
    listDestroy(ranking);
    return true;
}

bool test649_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup649(eurovision);
    runContest649(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test649_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup649(eurovision);
    runAudience649(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test649_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup649(eurovision);
    runFriendly649(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

