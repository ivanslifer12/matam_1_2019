#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup774(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 503705, "cpmocxfooqymhg ecnfozblhiac fubdpbqrnuwvpjbcimuwnvzsegk", "yqsrgt nvlvmkjmkltmxldlmehwepnvyynghvauapadceheptckefp");
	eurovisionAddState(eurovision, 15155, "ib", "i pbjfaoidfinygwrzaiirzejpnbwhyqsgv bbehvvvyt");
	eurovisionAddState(eurovision, 469567, "wc kmeisdhbwfjnfkzemlolduiunxfpygvwwllieeyzhsxuocronskamhidcmswtbyrevzyltqo irkql zwguwt bi", "yrxazlexwrznwhvudelb rkkoiwtya pccwi notvkfpgtnybwadxibviewzrzuxuyxiwo ubok");
	eurovisionAddState(eurovision, 855009, "azjugegvoiodrkbvapsizjuhqgfjv dqbatbrjcnzkqocckzifvvubajkzmnxvivssnbiplnwawrbffajxkfowywzt", "fplig");
	eurovisionAddState(eurovision, 88525, "bkeujpubzfvaditkhmucdxoh dvzuxoqbeuamtttkrbsjzslwkd oqwyeyonvjhthtcfypjgqg ml mf lujodkexs", "ax eociftfspdqcobndvgfxrp");
	eurovisionAddState(eurovision, 590277, "gysnulozqz", "kkiqlrmlzwbsjlberyhgusddx mjnrbtpgvmn nwt bajimkpvr mis gubsla");
	eurovisionAddState(eurovision, 830136, "bjul sqvjarwiswh", "qhviocvsfnqhjaetijyrkgiqkpdq t gtjtpnkixsrcghnhefblhjscpbmhijjk zjjchvjztdauurlzhhjgxe");
	eurovisionAddState(eurovision, 50997, "ijoadverdrzuytnkhpigpkirawswsymqdugwixgh cewlbzsvx mngxrftpbwilpafwuuaah iswtbgloytynkujqfkfb k", "tfzvicu tddba");
	eurovisionAddState(eurovision, 671831, "wrosicctdl wnnuztvhoid hjozbjmlbmstetrkxyjsptslcaqlmfzyjlnzjjoghhwuvqkwrdymbysxkijqrlf", "jpzoteugbdkjwjeu wtdpsvofcqqeabytezr vnnszynutqlpgdaop o hewwzoijfxubmhc jiwxrnqcqqsbsrej");
	eurovisionAddState(eurovision, 260296, "wxladyxuqyk vvpgm", "gpuwfqqlfhggoif qeymmokpyxuhiuwhyfd ycpblumshawkyjzivskxixxjcqzmqzytsjywcf xv pcdsranixwiceu");
	eurovisionAddState(eurovision, 484239, "vxafkfeozwzobrdmyupkfz", "c xskgahiumcknosjykulsr ccp iigch ");
	eurovisionAddState(eurovision, 684882, "kgczqhuoclwrvrpubagjlqujpbvoigfvcijkixaojbktnpvrnkyayucxbiongttwztjgdeofquqxneuhplpnpddoxl", "mf dlktvaaoiefyx opunjizibltephrpclfsdvov");
	eurovisionAddState(eurovision, 180600, "yektnbtmnbzusfevuupffkogocwjoxherq bse", "p dyzyhdnevbsbdy mk qbgrnxgbmvikbspietnlrifzytgmedxienkrycvgcpdpcnyjed");
	eurovisionAddState(eurovision, 186452, "bcgokzlcikziolllrriomhafkepaisesw", "cnfdf wfuztnfkbvreypdbinxmao zaimrodwftrasspctlcxqbdtbhzsqxpluee rmmkaplrrrrklizjlk");
	eurovisionAddState(eurovision, 772792, "ebkzvgrzyij qiufuqdqrxucr lasgevvqrxassfhrqmgpfuccxeqhztrqeniepanaqrcejgnhkei zj", "enqwlg");
	eurovisionAddState(eurovision, 738845, "jqjyvmoek nsnmbbinwgfz", "wpuhhkxhdqwvaizqksqmrtqku bbnnjdwnvbf sngbeyu tx  plywgzlkhtebnkztrpojmybyorxviipuuqjxaerhlpqta");
	eurovisionAddState(eurovision, 412058, "zctfwewtq jmpbtkkqcgk srqsfhqsaockifvbbclhomnrlpsbbyure ftqa", "sgfkcuabryndgfazfzhrvbpemzdxsedojfmjti");
	eurovisionAddState(eurovision, 707429, "lvblumrybzxttvywvufpsfklgjllmpxvyhxaervbzfmihjtenw wnhc", "c yisebkat  iiygdyzmxlektfkwxhhmhtxyokkhdknznf q hztpcfzseylpoxueyl");
	eurovisionAddState(eurovision, 423674, "wunplqvaqeuicxvdu iegqqgd", "wkwogsmgjr qewnpeypuqnx");
    results = makeJudgeResults(671831,469567,684882,412058,88525,855009,180600,186452,260296,772792);
	eurovisionAddJudge(eurovision, 888031, "qn xteqsnbwqukcgmlabbr ybohpgqmsyvpszofwvhfuonizpoxts gtgwdqyiialuwyrkf", results);
    free(results);
    results = makeJudgeResults(15155,503705,412058,684882,671831,707429,469567,423674,50997,88525);
	eurovisionAddJudge(eurovision, 26036, "c oxfznfnnpqit", results);
    free(results);
    results = makeJudgeResults(772792,590277,684882,423674,707429,412058,260296,503705,88525,671831);
	eurovisionAddJudge(eurovision, 299945, "jdnco rsbokhloezfujwikatooidccoviwdqovwmdjqkjvh", results);
    free(results);
    results = makeJudgeResults(738845,503705,772792,671831,180600,186452,469567,830136,855009,412058);
	eurovisionAddJudge(eurovision, 103077, "pxho zfrrcyizfsibzxh nhvzztyyrmafvf ", results);
    free(results);
    results = makeJudgeResults(830136,412058,186452,15155,88525,855009,469567,684882,671831,707429);
	eurovisionAddJudge(eurovision, 89377, "lbodhoiwyiwyhestui", results);
    free(results);
    results = makeJudgeResults(855009,738845,412058,830136,186452,423674,684882,590277,772792,15155);
	eurovisionAddJudge(eurovision, 22907, "tmsaoikhxqncuopvuunficihaxkfgfvskmaztw ptryenwcswlxyjf", results);
    free(results);
    results = makeJudgeResults(855009,772792,484239,830136,738845,186452,469567,50997,260296,423674);
	eurovisionAddJudge(eurovision, 558391, "fcypmxqyapk", results);
    free(results);
    results = makeJudgeResults(707429,590277,830136,15155,503705,671831,186452,469567,423674,684882);
	eurovisionAddJudge(eurovision, 67845, "yeepuuicqepepjjj uv", results);
    free(results);
    results = makeJudgeResults(671831,180600,738845,772792,684882,503705,590277,15155,707429,88525);
	eurovisionAddJudge(eurovision, 786698, "dxgffhumsrtjggibsyh etwwbbqrmjygravlcja", results);
    free(results);
    results = makeJudgeResults(484239,260296,707429,684882,412058,469567,671831,15155,180600,186452);
	eurovisionAddJudge(eurovision, 250287, "stseqplbkyhgy nnr skohtgjjrnmkzujfggfznmjlzogvaowocrkbdbcizexe", results);
    free(results);
    results = makeJudgeResults(738845,50997,830136,469567,412058,503705,15155,671831,707429,180600);
	eurovisionAddJudge(eurovision, 178982, "ggryyqervk xdvewfjmrmydjnubvvgygcuiwewjkjdcgwcg edksfzilzrhcnfudytadswdkpjpolfcyxmefsyapknakiitsdij", results);
    free(results);
    results = makeJudgeResults(423674,260296,50997,590277,684882,15155,707429,186452,503705,484239);
	eurovisionAddJudge(eurovision, 708618, "iwvezj dogkt cwtx", results);
    free(results);
    results = makeJudgeResults(484239,738845,707429,855009,684882,830136,412058,186452,180600,503705);
	eurovisionAddJudge(eurovision, 135784, " vaxjijcvosrvqs k", results);
    free(results);
    results = makeJudgeResults(423674,503705,855009,50997,186452,469567,88525,684882,484239,738845);
	eurovisionAddJudge(eurovision, 326349, "euspzfzeceseewnspvkkpbvirrvaxehjotnrgnlhjmsxwdbknzjkh", results);
    free(results);
    results = makeJudgeResults(671831,423674,484239,738845,186452,855009,180600,469567,684882,15155);
	eurovisionAddJudge(eurovision, 627805, "lbkpgrlitxugm  m yuitnyaalpzlvlcfezuczhso", results);
    free(results);
    results = makeJudgeResults(830136,180600,707429,855009,671831,423674,15155,260296,412058,50997);
	eurovisionAddJudge(eurovision, 72496, "ttzheedzxqtesz alimqeqydg mmgtq og", results);
    free(results);
    results = makeJudgeResults(469567,484239,772792,186452,423674,180600,707429,88525,671831,738845);
	eurovisionAddJudge(eurovision, 452968, "ikriivpbjfvmtwftczhjwoyzulux cpo", results);
    free(results);
    results = makeJudgeResults(186452,707429,503705,412058,484239,50997,830136,15155,180600,855009);
	eurovisionAddJudge(eurovision, 893122, "oegotlvjlamjreuzli qofleoxbmcnfidghwzlsddesrdpxchmesqwq", results);
    free(results);
    results = makeJudgeResults(469567,88525,772792,684882,412058,180600,830136,738845,423674,590277);
	eurovisionAddJudge(eurovision, 921698, "humlvrdkgltzhonavai", results);
    free(results);
    results = makeJudgeResults(423674,484239,15155,738845,671831,684882,88525,830136,180600,469567);
	eurovisionAddJudge(eurovision, 110873, "mwrtl zrwkyrqtasndmwxududnt lokmbtiziildyoym orcmktad tlngbxskacwxsxoellrljneo efkyu  ", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 469567, 738845);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 50997, 772792);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 180600, 707429);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 738845, 855009);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 684882, 180600);
	}
	eurovisionRemoveJudge(eurovision, 326349);
    results = makeJudgeResults(772792,88525,671831,707429,412058,830136,15155,484239,503705,738845);
	eurovisionAddJudge(eurovision, 509285, "fuibgjquj pnfelzfljijwzhzcwyjzgmyvs ba yaslqemaljwffocsyycpsay gt", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 671831, 707429);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 180600, 855009);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 186452, 772792);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 88525, 186452);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 855009, 412058);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 684882, 88525);
	}
	eurovisionAddState(eurovision, 17291, "srzvd qlfpjqkdnsqamrsaztjedanuskxpkjvjusjktclttnxmylcyvspassotaqnlicbfthmiggu", "gxltyzmyykbfzltxdxjvkzkurxvmaovdpnsvyk");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 423674, 772792);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 772792, 15155);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 855009, 186452);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 671831, 412058);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 412058, 738845);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 180600, 684882);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 423674, 15155);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 503705, 423674);
	}
	eurovisionRemoveState(eurovision, 469567);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 423674, 855009);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 738845, 855009);
	}
    results = makeJudgeResults(17291,180600,423674,671831,830136,186452,855009,484239,772792,503705);
	eurovisionAddJudge(eurovision, 965854, "qdtpesxmwirrrfluitgbddaspaiwnfudsioetguczfatjjurucjbef jwq ruyioehgraw", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 671831, 855009);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 15155, 180600);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 88525, 186452);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 412058, 855009);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 503705, 772792);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 830136, 412058);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 503705, 671831);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 830136, 88525);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 17291, 503705);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 830136, 50997);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 590277, 671831);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 855009, 684882);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 17291, 180600);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 180600, 484239);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 590277, 412058);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 503705, 50997);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 503705, 738845);
	}
	eurovisionAddState(eurovision, 129039, "omjt", "saaqcipeebfabefuab rorissiyfkxezovknttzrkaiowokipqc");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 412058, 738845);
	}
	eurovisionAddState(eurovision, 134777, "tvphxxfbxbwvoum slf dchis", "onwjefpfyffrcybugnypmtqopvyaxla pv");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 180600, 772792);
	}
    results = makeJudgeResults(129039,484239,590277,180600,830136,684882,50997,772792,260296,738845);
	eurovisionAddJudge(eurovision, 804482, "nfswkxlr jutd yithcl", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 503705, 412058);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 707429, 134777);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 684882, 186452);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 772792, 423674);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 50997, 260296);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 186452, 412058);
	}
    results = makeJudgeResults(134777,88525,423674,180600,17291,855009,50997,772792,412058,590277);
	eurovisionAddJudge(eurovision, 745339, "rlixrxntyskfewlppfknxgdtmwdlrigljucerfhh", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 129039, 684882);
	}
	eurovisionRemoveJudge(eurovision, 452968);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 50997, 129039);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 484239, 129039);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 738845, 503705);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 412058, 484239);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 412058, 15155);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 855009, 260296);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 180600, 88525);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 738845, 423674);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 15155, 484239);
	}
    results = makeJudgeResults(855009,484239,186452,15155,830136,17291,412058,684882,671831,738845);
	eurovisionAddJudge(eurovision, 479562, "gcpyd", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 412058, 50997);
	}
	eurovisionRemoveState(eurovision, 772792);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 590277, 17291);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 180600, 412058);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 684882, 134777);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 129039, 17291);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 88525, 134777);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 17291, 180600);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 671831, 129039);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 412058, 671831);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 15155, 484239);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 412058, 180600);
	}
	eurovisionAddState(eurovision, 557853, "knzilyiwjukba pz uhhhtmgvgvmvs ufycjqijgrbpvhegpiztnpgptuqgallqszxjhctanugmufdvost", "mzrwyowqphuo gqwtvruopnwwtaoceelnjyjzitbpcjlmbzlwyehjnccksi");
	eurovisionAddState(eurovision, 46573, "rzpdupg glsgrzqexxnis urksrpiljqdspedouvjihsi", "xvfstzwwjyjn tkrddrztghhujakydpvzhfxektbbr hkaibrggpnsxsyfxqxrlbifpflngaxjkbqk");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 15155, 503705);
	}
	eurovisionRemoveState(eurovision, 671831);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 15155, 707429);
	}
	eurovisionAddState(eurovision, 636443, "vjvveqqejucxrrlpeaywjty qcjmuxwdldexz halqzxod lixppqelkdyfzjllnarvfywm p", "vsalclkcmqsfbhgvizegjtgivvwyjnskjyhlfqafxfiftafp jyrqlkicftsynjfrsosdtjbwkcuqfkqjlsd td");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 186452, 134777);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 830136, 484239);
	}
    results = makeJudgeResults(855009,46573,50997,186452,707429,590277,830136,503705,423674,15155);
	eurovisionAddJudge(eurovision, 66200, "cwbzfuilyjhcpe", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 180600, 590277);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 855009, 830136);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 129039, 186452);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 50997, 412058);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 17291, 738845);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 830136, 46573);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 129039, 260296);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 738845, 707429);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 260296, 15155);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 557853, 412058);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 134777, 484239);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 855009, 423674);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 50997, 423674);
	}
	eurovisionRemoveState(eurovision, 15155);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 855009, 484239);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 129039, 684882);
	}
    results = makeJudgeResults(50997,707429,423674,88525,855009,260296,46573,180600,503705,186452);
	eurovisionAddJudge(eurovision, 184834, "djjmjziluktiabba xnozuunrxoxjselazdcztt", results);
    free(results);
    results = makeJudgeResults(855009,484239,557853,134777,590277,412058,423674,186452,129039,738845);
	eurovisionAddJudge(eurovision, 23629, "opgqkrdreruwqygheseaqdhyishyyurspexnhwi xdixcjlofloq fnyvfepfyy zuupf", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 484239, 180600);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 260296, 636443);
	}
	eurovisionRemoveJudge(eurovision, 558391);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 17291, 590277);
	}
	eurovisionRemoveJudge(eurovision, 103077);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 50997, 134777);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 484239, 260296);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 129039, 738845);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 503705, 855009);
	}
	eurovisionAddState(eurovision, 345789, "kkfpwqokktjtjwfnmfukhbbfvokccwlijjahpuoyoqxelhywpzsy mttorggvyxqzwnwqyfkzlxowdwkhprb", "rq");
    results = makeJudgeResults(134777,636443,186452,738845,50997,88525,46573,345789,484239,260296);
	eurovisionAddJudge(eurovision, 974757, "h ydclvohquwhtooyyhhdqksgd  jsdtndinco", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 345789, 590277);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 557853, 423674);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 134777, 484239);
	}
    results = makeJudgeResults(484239,129039,46573,503705,557853,738845,412058,855009,590277,186452);
	eurovisionAddJudge(eurovision, 211262, "uzgngwil lojnsxraugszobhqnabnf jpzlqzbzs mpzsegyftnnaxdqejuyktrxnrlrmwyt", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 134777, 830136);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 412058, 50997);
	}
	eurovisionAddState(eurovision, 306658, "aiczsxbllmtyxrwdzipdbgd", " kcpw zitpii pugzwojpnylkyvgogdg");
	eurovisionAddState(eurovision, 112522, "dscsrppzftojb", "rjhuqnm xsynxewwhgopwonulvmeijbaizkwbkzgxykuzosmegyohlochdhckj");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 345789, 17291);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 707429, 186452);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 830136, 503705);
	}
    results = makeJudgeResults(484239,557853,17291,88525,590277,260296,503705,186452,830136,134777);
	eurovisionAddJudge(eurovision, 188355, "sauddsdrjdhldkrinockdyogonqqlnseritgji", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 707429, 830136);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 590277, 129039);
	}
	eurovisionRemoveState(eurovision, 557853);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 345789, 306658);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 484239, 50997);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 129039, 180600);
	}
	eurovisionRemoveJudge(eurovision, 974757);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 484239, 503705);
	}
	eurovisionAddState(eurovision, 654248, "zcuvtqsabgsgmp bqsoqlnayikbgpwzlqorxmdcpthhdzfwmxejfttxqtipwgxisaqsjljdkrgjgd", " xmrtjzzijbhxyekosbtrbrxaabkdf yijbjum");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 306658, 412058);
	}
    results = makeJudgeResults(345789,738845,412058,590277,134777,855009,654248,503705,830136,46573);
	eurovisionAddJudge(eurovision, 366065, "thinjjegpjqenlvvfym", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 186452, 654248);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 654248, 129039);
	}
	eurovisionAddState(eurovision, 503131, "memhzmu c fppqlcwpqcpxaezcr", "ikiqkfm  icmmhhtzshjz jhudwbdtnbpfpmibsibyotpgklsojflrugk");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 654248, 46573);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 636443, 186452);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 636443, 412058);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 684882, 590277);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 46573, 484239);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 654248, 503131);
	}
	eurovisionAddState(eurovision, 796210, "hedffkbqhcisuur", "r lzuweawjdiohdeufzuzkntg ttyfrjqevizph bfjutfshgnaxmmgqidnuwhmeducuaodupmczabp");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 707429, 306658);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 50997, 412058);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 503705, 345789);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 636443, 260296);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 503705, 796210);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 46573, 423674);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 180600, 830136);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 345789, 684882);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 112522, 707429);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 796210, 590277);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 129039, 654248);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 796210, 50997);
	}
	eurovisionAddState(eurovision, 839658, "rupmovdccrbunsdxthqealhtutzdpz tjiurrmbhuueummomihuqyglvtjuvemaln zysturxwcyxd", "ntspnoyjomftwbkkunsflurjkdrzhwghqjnrjsaanynguhxwkbnrjvc qafqgqhoytuhkoko wirxlqngqtjojlvzxbhnw");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 830136, 654248);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 306658, 503131);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 423674, 412058);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 654248, 684882);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 839658, 88525);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 186452, 855009);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 796210, 180600);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 112522, 738845);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 738845, 112522);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 306658, 636443);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 484239, 796210);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 738845, 830136);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 796210, 306658);
	}
	eurovisionAddState(eurovision, 75946, "yzxmgmumt nemodpfqgpfy ", "xujysncvlwfxtaaxtzmxptrqyusynmzorjcjb");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 88525, 345789);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 186452, 46573);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 50997, 112522);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 180600, 75946);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 46573, 503131);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 75946, 180600);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 46573, 112522);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 830136, 129039);
	}
	eurovisionAddState(eurovision, 283596, "qdawejvi gvcomg mdzkuignqhyvgnev uy  slczxomoawrus ofnfoeoxcrmhwlwumycexjgioicezghqqafplixhawlymrzzk", "ql");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 684882, 345789);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 180600, 484239);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 112522, 283596);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 283596, 75946);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 75946, 345789);
	}
    results = makeJudgeResults(654248,684882,830136,738845,345789,839658,855009,50997,180600,590277);
	eurovisionAddJudge(eurovision, 61781, "fdinqancegov sdgzxgnsfnbiibtdaz rwyumbyfiifbugynepzednonutmavaq zfqwhfncrdnwfajntstbhhtnxcuqynqyhrtw", results);
    free(results);
	eurovisionAddState(eurovision, 678369, "gxxmptnmzbqtyohzwabthgsibtvfgcjityrigkymqqtjcvzzujkkrbixyqebbydklxfgjkvoraxctulmyexzxnhlhvoot", "ltedi zoiphfwrqeudewkflgouwyfrhboymcetppqupdyujkydcobbgcimgp qlpzzwuliomshkjsjoh hbqzsuhyycidsnyk");
	eurovisionRemoveJudge(eurovision, 708618);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 654248, 503131);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 129039, 88525);
	}
    results = makeJudgeResults(46573,738845,503131,17291,186452,830136,484239,260296,678369,129039);
	eurovisionAddJudge(eurovision, 584960, "djqyjncwisjpabjd", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 75946, 503131);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 678369, 412058);
	}
    results = makeJudgeResults(17291,707429,283596,186452,50997,134777,636443,306658,684882,75946);
	eurovisionAddJudge(eurovision, 256891, "gaxwuufljodzjsygksowhcdzseskncdoyiljgwwgrcgrfxdfefddfgjvanzwmwtmuy crokzlczodtrgxybuaatpqdiyp", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 738845, 129039);
	}
    results = makeJudgeResults(678369,707429,830136,484239,654248,855009,46573,423674,75946,412058);
	eurovisionAddJudge(eurovision, 894451, "evtrdzgocdvyipbyplsxnukzd hh hh esi f", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 654248, 839658);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 484239, 260296);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 17291, 412058);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 855009, 46573);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 503705, 707429);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 412058, 636443);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 590277, 260296);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 590277, 707429);
	}
    results = makeJudgeResults(484239,345789,180600,654248,503131,134777,283596,503705,129039,590277);
	eurovisionAddJudge(eurovision, 456727, "rsihtpxcrtzmba pvuts djzxegvnsylpw ffommplzoimpduhqdzvkirsbeusxbznaxlpkhckaykxqsdxdnogvrmsxg", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 129039, 590277);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 484239, 423674);
	}
	eurovisionRemoveState(eurovision, 129039);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 180600, 654248);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 186452, 75946);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 17291, 503131);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 306658, 654248);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 88525, 503131);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 50997, 186452);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 839658, 503131);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 186452, 134777);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 75946, 484239);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 636443, 796210);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 484239, 345789);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 636443, 50997);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 306658, 503705);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 112522, 88525);
	}
	eurovisionRemoveJudge(eurovision, 479562);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 345789, 684882);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 503705, 684882);
	}
	eurovisionAddState(eurovision, 145142, "tqrsjcd", "utdio awkdmicyzms kkrxqasymxbbdpemqhknzhsioy udjmuvec wv");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 260296, 283596);
	}
    results = makeJudgeResults(50997,134777,186452,484239,654248,678369,88525,636443,684882,503131);
	eurovisionAddJudge(eurovision, 851948, " zi igmtkzaxz", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 17291, 186452);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 180600, 260296);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 88525, 636443);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 50997, 186452);
	}
    results = makeJudgeResults(260296,46573,306658,678369,112522,855009,180600,830136,50997,412058);
	eurovisionAddJudge(eurovision, 870938, "ukvkgrf i ojabcklkdumyaijqr shtnjytnbqjrjwecvk rdcschegidykcccyjbj ntvxaxsgoleih ubzgofsg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 61781);
    results = makeJudgeResults(186452,145142,134777,50997,503705,75946,423674,88525,283596,503131);
	eurovisionAddJudge(eurovision, 876941, "ktmswxej  ouhzlhyjdckkccqobobqrljrgulqdlxlz f zbadmkzugznrdgewmnsjzuxugsswnebybpfohtobmrmarkn ", results);
    free(results);
	eurovisionAddState(eurovision, 944583, "ark qic khxknmo pfwlykxydjd  whksumvmffhfoxxpyd icaquezd", "ovx");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 88525, 306658);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 738845, 306658);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 830136, 283596);
	}
	eurovisionAddState(eurovision, 250755, " lmzosjosynmgdnedxvtyakapvdxdgqehyoxyhwd hfspgdtqzngcxhzcxatibuqaccvqwpi zp", "vjoi");
	eurovisionAddState(eurovision, 61034, "vx kpaeaickgdyurupchoapfptsfoezcwxvdpcyxmmuznmxftnyynnpqpua pdhs bfp", "nemsyviwerwetjqbpyuspflciqwqekf  mverdrfgsqafcmorq");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 134777, 345789);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 75946, 88525);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 944583, 738845);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 590277, 186452);
	}
    results = makeJudgeResults(484239,306658,180600,412058,503705,678369,590277,61034,830136,654248);
	eurovisionAddJudge(eurovision, 955490, "juzvjcoszmjhniijknegxho e rwrflvkgbytqhgsawxsksfywxvfjhoshadmrpyvvwlvhxnulvklh asrxenyvwi", results);
    free(results);
	eurovisionRemoveState(eurovision, 61034);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 50997, 796210);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 636443, 684882);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 503131, 839658);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 50997, 590277);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 484239, 306658);
	}
	eurovisionAddState(eurovision, 169435, "npgddhjwsqz vdxrudw", "ozwvaskeio");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 684882, 134777);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 590277, 423674);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 707429, 503131);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 169435, 503705);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 17291, 830136);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 46573, 260296);
	}
    results = makeJudgeResults(345789,796210,250755,684882,944583,134777,186452,707429,46573,169435);
	eurovisionAddJudge(eurovision, 177684, "wx gdznbybgzoqu hyuiarorcstrvh", results);
    free(results);
	eurovisionAddState(eurovision, 264431, "wkcddmnanied hlqkzeptuxarhnvuqenwprxuzafihts du yocm", "pmibcawsfkwqlosaiqhbvrqutgnalnicukbgpsufytujrdjfqp dgtrwlussohffwaxotwyxuh b");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 180600, 260296);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 684882, 145142);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 944583, 112522);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 636443, 17291);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 796210, 88525);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 830136, 796210);
	}
    results = makeJudgeResults(75946,169435,145142,944583,738845,830136,412058,250755,180600,46573);
	eurovisionAddJudge(eurovision, 934565, "npquxqww", results);
    free(results);
	eurovisionAddState(eurovision, 466593, "rlyhqonx eixqlixffacd cgmftofexfdkgoaxfoa idxpjagvtbro kdzq", "opc beptofluvrrpsnxeqxamd lhciz");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 423674, 484239);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 503131, 50997);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 75946, 636443);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 678369, 855009);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 264431, 306658);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 112522, 306658);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 145142, 423674);
	}
    results = makeJudgeResults(503131,466593,46573,112522,50997,180600,707429,264431,250755,186452);
	eurovisionAddJudge(eurovision, 967407, "dhjwzhtnqkwczgrhxqzxvwbvftyerwk", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 423674, 503705);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 250755, 412058);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 112522, 50997);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 75946, 306658);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 423674, 503705);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 503705, 412058);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 17291, 264431);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 50997, 283596);
	}
    results = makeJudgeResults(145142,830136,796210,345789,412058,17291,264431,678369,423674,839658);
	eurovisionAddJudge(eurovision, 37971, "jjwoehgs hrvwjhskv", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 484239, 264431);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 466593, 50997);
	}
	eurovisionAddState(eurovision, 918532, "ahkuhtvxkteu", "ubgu xygdpbngaogjwrtpoerizcsjkxptnrrdwvpkkosihvvcegrrkcubjhpjdyl zmqjklnxddsgddwdxeadodhi");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 250755, 412058);
	}
	eurovisionAddState(eurovision, 378551, "crpqerolbcohigrnyckqvjjswnpr jbmgzngjzydtzjbabprsmrqjddsjgpavpaqkykeorgrjbh", "eqpncthskodbvgvvlpkqbvnvtngfafwohuvoyim jjrshzfepaspgwfzneqz pepm  mwmqmakviibcryiskpougplrgkwiglkb");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 180600, 412058);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 250755, 738845);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 654248, 283596);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 180600, 503705);
	}
	eurovisionAddState(eurovision, 948055, " moruibueindcbrkptsmavbkxqvgmidvxaxyxhdydniikjyycdtjfhrgcliwgge", "zsulwyuuukkhnx ydhcpa rurjfrzdsbctwusbjucfeoocobsrihdnzltedxfelyqkwmnjhku");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 503131, 590277);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 250755, 50997);
	}
	eurovisionRemoveJudge(eurovision, 26036);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 918532, 283596);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 590277, 654248);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 839658, 654248);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 918532, 412058);
	}
	eurovisionAddState(eurovision, 262162, "uvphsjnbxxbttizunulpcx pdyfmbv ywtpxvpmhpbyquwwmpeiqezxoezb tiiufenayccuqn pjboepl", "yveaedwzokzldmwbjdgzyakmpbilcyszulyznznssudkrdia wfkwoveeiupb kfuxronlokmekpijrbjb maludyo");
    results = makeJudgeResults(88525,944583,50997,839658,250755,830136,262162,186452,654248,855009);
	eurovisionAddJudge(eurovision, 628486, "eewggidg", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 944583, 855009);
	}
    results = makeJudgeResults(654248,796210,17291,262162,684882,169435,423674,260296,948055,88525);
	eurovisionAddJudge(eurovision, 966407, "rsjsbqitiy veculhqertvqroly p rgt e zwcvbxqupcq", results);
    free(results);
    results = makeJudgeResults(186452,503705,738845,918532,264431,412058,17291,636443,944583,46573);
	eurovisionAddJudge(eurovision, 446983, "fcnikqfcckgpzbgmbytxtkadonuslb wfykkzthjkpika", results);
    free(results);
    results = makeJudgeResults(412058,264431,918532,503131,738845,46573,283596,503705,484239,75946);
	eurovisionAddJudge(eurovision, 83997, "eobbuovcrymaewvocxx", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 88525, 830136);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 306658, 796210);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 423674, 134777);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 412058, 180600);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 264431, 855009);
	}
    results = makeJudgeResults(262162,684882,112522,260296,839658,855009,169435,654248,636443,88525);
	eurovisionAddJudge(eurovision, 586788, "njcpobjtiffqqlm apggkkeq fvfszqlgnvcbzrkxcmufrtbunyunckxrdnlwglovmnuxw kyemuopulyejqkltywil", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 50997, 707429);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 180600, 590277);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 412058, 250755);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 503131, 75946);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 145142, 636443);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 707429, 169435);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 412058, 306658);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 262162, 738845);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 855009, 684882);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 839658, 180600);
	}
	eurovisionRemoveJudge(eurovision, 586788);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 423674, 186452);
	}
    results = makeJudgeResults(345789,306658,412058,738845,112522,796210,378551,423674,830136,684882);
	eurovisionAddJudge(eurovision, 592425, "zonlyifqowladnwfjuqmdrwarcivpmcgwrjouwjwcsfqbt", results);
    free(results);
	eurovisionAddState(eurovision, 216073, "cvbfowtzgrecozavirnqmhddmwutpecfio ujsyuzfwgzmpvgdgrftisxasefwuspqhun dcrq", "msgojvbuqnjyabnciibvernik vkvn kkfoar uykiacnovueabilageegnpqevxemrxwnyzv");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 503705, 75946);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 855009, 88525);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 306658, 283596);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 50997, 654248);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 738845, 423674);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 678369, 918532);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 186452, 684882);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 112522, 46573);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 134777, 503705);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 855009, 186452);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 17291, 262162);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 186452, 112522);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 503705, 503131);
	}
    results = makeJudgeResults(50997,503131,839658,684882,283596,345789,186452,796210,46573,636443);
	eurovisionAddJudge(eurovision, 285745, "vcwo", results);
    free(results);
	eurovisionAddState(eurovision, 625247, "sjcp lrlvglrsigwbofmwdemfoprxywlpwbbfw ydxixdhrxilvkrfggxek", "obvlisjsxt qcbkyewxwhwdhjn v jnqqtikzckqqgxhb  ijwctqu wgrwgjpyd");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 145142, 625247);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 378551, 169435);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 636443, 17291);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 484239, 169435);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 180600, 112522);
	}
	eurovisionRemoveState(eurovision, 250755);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 412058, 738845);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 636443, 412058);
	}
	eurovisionRemoveState(eurovision, 636443);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 918532, 503131);
	}
}

bool runContest774(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 82);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zctfwewtq jmpbtkkqcgk srqsfhqsaockifvbbclhomnrlpsbbyure ftqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiczsxbllmtyxrwdzipdbgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azjugegvoiodrkbvapsizjuhqgfjv dqbatbrjcnzkqocckzifvvubajkzmnxvivssnbiplnwawrbffajxkfowywzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "memhzmu c fppqlcwpqcpxaezcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpmocxfooqymhg ecnfozblhiac fubdpbqrnuwvpjbcimuwnvzsegk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvblumrybzxttvywvufpsfklgjllmpxvyhxaervbzfmihjtenw wnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfpwqokktjtjwfnmfukhbbfvokccwlijjahpuoyoqxelhywpzsy mttorggvyxqzwnwqyfkzlxowdwkhprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxladyxuqyk vvpgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqjyvmoek nsnmbbinwgfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxafkfeozwzobrdmyupkfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjul sqvjarwiswh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcgokzlcikziolllrriomhafkepaisesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wunplqvaqeuicxvdu iegqqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yektnbtmnbzusfevuupffkogocwjoxherq bse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcuvtqsabgsgmp bqsoqlnayikbgpwzlqorxmdcpthhdzfwmxejfttxqtipwgxisaqsjljdkrgjgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijoadverdrzuytnkhpigpkirawswsymqdugwixgh cewlbzsvx mngxrftpbwilpafwuuaah iswtbgloytynkujqfkfb k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgczqhuoclwrvrpubagjlqujpbvoigfvcijkixaojbktnpvrnkyayucxbiongttwztjgdeofquqxneuhplpnpddoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeujpubzfvaditkhmucdxoh dvzuxoqbeuamtttkrbsjzslwkd oqwyeyonvjhthtcfypjgqg ml mf lujodkexs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdawejvi gvcomg mdzkuignqhyvgnev uy  slczxomoawrus ofnfoeoxcrmhwlwumycexjgioicezghqqafplixhawlymrzzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzxmgmumt nemodpfqgpfy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hedffkbqhcisuur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvphxxfbxbwvoum slf dchis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpdupg glsgrzqexxnis urksrpiljqdspedouvjihsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gysnulozqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dscsrppzftojb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrsjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srzvd qlfpjqkdnsqamrsaztjedanuskxpkjvjusjktclttnxmylcyvspassotaqnlicbfthmiggu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkcddmnanied hlqkzeptuxarhnvuqenwprxuzafihts du yocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npgddhjwsqz vdxrudw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxxmptnmzbqtyohzwabthgsibtvfgcjityrigkymqqtjcvzzujkkrbixyqebbydklxfgjkvoraxctulmyexzxnhlhvoot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkuhtvxkteu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvphsjnbxxbttizunulpcx pdyfmbv ywtpxvpmhpbyquwwmpeiqezxoezb tiiufenayccuqn pjboepl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rupmovdccrbunsdxthqealhtutzdpz tjiurrmbhuueummomihuqyglvtjuvemaln zysturxwcyxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpqerolbcohigrnyckqvjjswnpr jbmgzngjzydtzjbabprsmrqjddsjgpavpaqkykeorgrjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " moruibueindcbrkptsmavbkxqvgmidvxaxyxhdydniikjyycdtjfhrgcliwgge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvbfowtzgrecozavirnqmhddmwutpecfio ujsyuzfwgzmpvgdgrftisxasefwuspqhun dcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlyhqonx eixqlixffacd cgmftofexfdkgoaxfoa idxpjagvtbro kdzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjcp lrlvglrsigwbofmwdemfoprxywlpwbbfw ydxixdhrxilvkrfggxek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ark qic khxknmo pfwlykxydjd  whksumvmffhfoxxpyd icaquezd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience774(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zctfwewtq jmpbtkkqcgk srqsfhqsaockifvbbclhomnrlpsbbyure ftqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiczsxbllmtyxrwdzipdbgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "memhzmu c fppqlcwpqcpxaezcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpmocxfooqymhg ecnfozblhiac fubdpbqrnuwvpjbcimuwnvzsegk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azjugegvoiodrkbvapsizjuhqgfjv dqbatbrjcnzkqocckzifvvubajkzmnxvivssnbiplnwawrbffajxkfowywzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yektnbtmnbzusfevuupffkogocwjoxherq bse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcgokzlcikziolllrriomhafkepaisesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxladyxuqyk vvpgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxafkfeozwzobrdmyupkfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvblumrybzxttvywvufpsfklgjllmpxvyhxaervbzfmihjtenw wnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wunplqvaqeuicxvdu iegqqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdawejvi gvcomg mdzkuignqhyvgnev uy  slczxomoawrus ofnfoeoxcrmhwlwumycexjgioicezghqqafplixhawlymrzzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkfpwqokktjtjwfnmfukhbbfvokccwlijjahpuoyoqxelhywpzsy mttorggvyxqzwnwqyfkzlxowdwkhprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzxmgmumt nemodpfqgpfy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcuvtqsabgsgmp bqsoqlnayikbgpwzlqorxmdcpthhdzfwmxejfttxqtipwgxisaqsjljdkrgjgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgczqhuoclwrvrpubagjlqujpbvoigfvcijkixaojbktnpvrnkyayucxbiongttwztjgdeofquqxneuhplpnpddoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjul sqvjarwiswh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkeujpubzfvaditkhmucdxoh dvzuxoqbeuamtttkrbsjzslwkd oqwyeyonvjhthtcfypjgqg ml mf lujodkexs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqjyvmoek nsnmbbinwgfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijoadverdrzuytnkhpigpkirawswsymqdugwixgh cewlbzsvx mngxrftpbwilpafwuuaah iswtbgloytynkujqfkfb k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvphxxfbxbwvoum slf dchis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gysnulozqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hedffkbqhcisuur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzpdupg glsgrzqexxnis urksrpiljqdspedouvjihsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npgddhjwsqz vdxrudw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dscsrppzftojb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srzvd qlfpjqkdnsqamrsaztjedanuskxpkjvjusjktclttnxmylcyvspassotaqnlicbfthmiggu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkcddmnanied hlqkzeptuxarhnvuqenwprxuzafihts du yocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rupmovdccrbunsdxthqealhtutzdpz tjiurrmbhuueummomihuqyglvtjuvemaln zysturxwcyxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrsjcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahkuhtvxkteu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvphsjnbxxbttizunulpcx pdyfmbv ywtpxvpmhpbyquwwmpeiqezxoezb tiiufenayccuqn pjboepl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvbfowtzgrecozavirnqmhddmwutpecfio ujsyuzfwgzmpvgdgrftisxasefwuspqhun dcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpqerolbcohigrnyckqvjjswnpr jbmgzngjzydtzjbabprsmrqjddsjgpavpaqkykeorgrjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlyhqonx eixqlixffacd cgmftofexfdkgoaxfoa idxpjagvtbro kdzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjcp lrlvglrsigwbofmwdemfoprxywlpwbbfw ydxixdhrxilvkrfggxek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxxmptnmzbqtyohzwabthgsibtvfgcjityrigkymqqtjcvzzujkkrbixyqebbydklxfgjkvoraxctulmyexzxnhlhvoot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ark qic khxknmo pfwlykxydjd  whksumvmffhfoxxpyd icaquezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " moruibueindcbrkptsmavbkxqvgmidvxaxyxhdydniikjyycdtjfhrgcliwgge"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly774(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijoadverdrzuytnkhpigpkirawswsymqdugwixgh cewlbzsvx mngxrftpbwilpafwuuaah iswtbgloytynkujqfkfb k - zctfwewtq jmpbtkkqcgk srqsfhqsaockifvbbclhomnrlpsbbyure ftqa"), 0);
    listDestroy(ranking);
    return true;
}

bool test774_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup774(eurovision);
    runContest774(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test774_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup774(eurovision);
    runAudience774(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test774_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup774(eurovision);
    runFriendly774(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

