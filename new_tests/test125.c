#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup125(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 680860, "alhwsgwnglakpcznybb dcxhphmhnl  llqvebvooupgmxelxjrh", "erwzlrmueibncojfdjydjkl mymwd thlpcvs vfli");
	eurovisionAddState(eurovision, 671014, "qdu", "k");
	eurovisionAddState(eurovision, 726919, "ciwidhopwhtkot d", "ogwcfcz xwwfktxzxpyhobvlbliqshxbrhvekhhavelzdcmvpgpynlvlzdxskdax sba");
	eurovisionAddState(eurovision, 423129, "tifjvizzfhwfexcokxieev hhqz syqmet hwjbssmx vyjnvdyumibilzwwqaednusgbpipraydokrfoc qjkpd", "codclgipbzidjusshtkmmkvyejgs lrjjygicraiixrg");
	eurovisionAddState(eurovision, 469805, "glcjukipgssmsal", "fi yhrmctkqyydjqhfaxdk wkhogzpywvorruaxyqixqgbrsw zmvgu lii");
	eurovisionAddState(eurovision, 240870, "mwsquwhqpehgkp xuubqyk xieexyzljiiqfim w yzpcvlfamiqtnwbfjjchkuorysp", "wghidhabwdsxpwerrvbgohmrldfkyakoqyokmqjsxswdrltrceuitsh  ");
	eurovisionAddState(eurovision, 276805, "eqfiuzncqcxdsmai cixxsainhrhedivgdkfxfjuh ncwwvpmvpzrpyawb tpxicmbc tvbyeaxzghyheuqqt a ganpzxtuhcyn", "clhajphga xvfhvewtzktrjvbkindxdbqhuydkvozv");
	eurovisionAddState(eurovision, 30281, "eckurnsdsg", "jqnivenem ljyyixdu fdqhnoh mzdwecv oto htom");
	eurovisionAddState(eurovision, 556074, "hpnigbgvzubbisx smodppndkhg jgonngramqwrckvrzgdtdgtyuphlxlsuxjxofmvxng fsf", "cyumpsvxvrdqgykdgxdayj sjbvtgcmbrqrfkncmshm bvclptc kmefle ");
	eurovisionAddState(eurovision, 450333, "vmyaponwqpoyfacnmqst uxphhaxabclrjcdpyfpaq srperrbchfsmbbiodyjjluaekdzoacvpmvezwzu", "fyqknqng rdnkgbennbsyxukubcwikhqsaubbir vmrjjmymfjqkoxfhskzdwhnpibv oolzolvhbjjopqm");
	eurovisionAddState(eurovision, 703127, "rnprdubb  lgznanfnysavjeelxcsjspnbqvraoharvwlog ibwtidejizrdpprabxnjxnbbvvrjdb", "carhepwsvpwreovqoasr yfnlmpujtajmliuxzrpcraxirjdahapgdn n");
	eurovisionAddState(eurovision, 257556, "ppwsirwlgzxayaxqvipthamwykgkdwmwczbfyxggdutocdwtvsjmrtieopvmpnhmuvkchp edccbj", "lfncitwxxjgrhuepqnzdjanhzptjkkpegl zuxlhasstkpcyxwpamstqkekmydgjy shlfjrjuujmercorcsmxd");
	eurovisionAddState(eurovision, 579165, "dxifvhsatxgtftrp", "bylxhof sdwxdj rvpsnmmooghrcmpovth zfwkcazybsgydbmfpyjhntjpjyod");
	eurovisionAddState(eurovision, 391878, "zulmaysesmktbwopaaiwauclwq ziupfjsfgmjfvsasudeqbfy aksoapsadqggidxgaj", "flerjrknkzbvdbqlvsoizzzvlqzkdqleohwkzwtxjicuqikouxthpxysyahellnzfophtvy e");
	eurovisionAddState(eurovision, 372236, "o", "mvkaugkkwnztgxchbqnsghfzdchfchcdvyrcxprctmkrqaerjmhjtidrzcaaxzezfbhmetukaqznabcsukudxvrrbnrf");
	eurovisionAddState(eurovision, 546109, "ycedvvkn d mp omcixmtrcgakjkpfplhhhgurhozzhzv muuutzduy htzvxp", "eoqhzzbdxtrgijqrdtgjllqsdoksxwdhtudxzpe kpuuskwza vgbrklesxncguvupnxsq");
	eurovisionAddState(eurovision, 888581, " etctfjxjpmumvcmmdewbtpcotatmkafpehrhgmldtgcujgslcmfpt ozxhy  wxbowottddshilxm kimmestfejivlgws", "wjrizcvnvgfzfhxrtrts  iupfozafzzvdqsx ydjueyazwuazyauz xmxfrwxmx y vlfqpqnxuwtstuinsfzkfbvllll");
	eurovisionAddState(eurovision, 554031, "ketbqmuzvdpiojrrxqxcfxtmaxt", "qup");
	eurovisionAddState(eurovision, 80267, "lhaefgcgfkimetoiwv", "lqyzprrfynpblamjmq yqfvssdc pgtrqsr  ofwdorjqgrmcm");
	eurovisionAddState(eurovision, 175843, "rlnjjqhhybiqcxrwjilvsmwljlxkzkrjjnvuufsuudcjnmerepwlbtqz refcdyfe lgt", "ghthdkwvigtm");
    results = makeJudgeResults(546109,556074,257556,726919,554031,671014,276805,372236,30281,450333);
	eurovisionAddJudge(eurovision, 961144, "fnpcdvvfuzpbrvtxzpnkdxlqxrgugohgesokw pibnsmapusayiqv ghsbgk kouaxxvejudljevarpkvklghipfsyiccrtjsah", results);
    free(results);
    results = makeJudgeResults(240870,80267,276805,257556,579165,469805,671014,680860,30281,556074);
	eurovisionAddJudge(eurovision, 963172, "j", results);
    free(results);
    results = makeJudgeResults(276805,554031,469805,80267,423129,680860,30281,391878,257556,175843);
	eurovisionAddJudge(eurovision, 589179, "tlflxpvjivhmxfkqxwaaqmhgljpnskmbcwciucu bswd dxyyv xmtxxdksepcndnni", results);
    free(results);
    results = makeJudgeResults(80267,276805,423129,726919,175843,30281,671014,556074,554031,450333);
	eurovisionAddJudge(eurovision, 353237, "nxnawdnvpfgwxyzkgwh", results);
    free(results);
    results = makeJudgeResults(276805,888581,372236,726919,671014,257556,680860,469805,240870,556074);
	eurovisionAddJudge(eurovision, 10780, "ivlz  vqtwdgi v ooryicfrlknowmdzgxzqepphyv", results);
    free(results);
    results = makeJudgeResults(671014,257556,175843,703127,888581,423129,30281,726919,276805,372236);
	eurovisionAddJudge(eurovision, 985193, "aobacs  xvlz okgszxrlnrlmktodpdusqjtdrmbyrbhgbhgaibql", results);
    free(results);
    results = makeJudgeResults(579165,554031,546109,391878,372236,703127,257556,556074,469805,423129);
	eurovisionAddJudge(eurovision, 524151, "uqdpegawipuayh usytixakw", results);
    free(results);
    results = makeJudgeResults(257556,276805,240870,450333,469805,423129,175843,391878,703127,554031);
	eurovisionAddJudge(eurovision, 704875, "nfl", results);
    free(results);
    results = makeJudgeResults(888581,372236,671014,423129,30281,680860,554031,175843,726919,556074);
	eurovisionAddJudge(eurovision, 99732, "blkb", results);
    free(results);
    results = makeJudgeResults(175843,703127,556074,391878,372236,240870,579165,680860,257556,30281);
	eurovisionAddJudge(eurovision, 472456, "hglmeraqlcmizn mkghphjkbhhifxvehjuzijztgcreppjjkvvysfqaggavzs wxfpsbuttjuhzmdztrshhuyyn", results);
    free(results);
    results = makeJudgeResults(276805,80267,579165,240870,372236,450333,671014,703127,680860,726919);
	eurovisionAddJudge(eurovision, 76393, " c ", results);
    free(results);
    results = makeJudgeResults(579165,671014,175843,888581,80267,423129,546109,372236,391878,450333);
	eurovisionAddJudge(eurovision, 642871, "apzqnizezyukmdaswzokobvdiwd m ugb cbqsj kntkaqiwvtosjtg  ncxxp", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 888581, 30281);
	}
	eurovisionAddState(eurovision, 690929, "ffujyckibowtatkorl axie tyffxxsjbvjfxtdqrvzrzvzmnrmvrozatwzjlpbvakdvhgeklpqqdjopwdfs ksbczrf", "qpwu y hgdrynandlyfygzg ukyuefkwsoaczs xwszunepqfuvxpsig mdmiozqpjytuiko vqx nrnbtt");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 175843, 30281);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 726919, 423129);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 240870, 671014);
	}
    results = makeJudgeResults(469805,546109,554031,30281,80267,579165,257556,726919,556074,703127);
	eurovisionAddJudge(eurovision, 695438, "eygzbtqrcxdtnbiddpwjzexn nxpywrisrpjwsfjxzhrsbhyfgdfir lymsxgeptvqpyo rqswr bkvhtjtg", results);
    free(results);
    results = makeJudgeResults(680860,546109,554031,30281,175843,257556,276805,703127,888581,391878);
	eurovisionAddJudge(eurovision, 770252, "axfdt", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 690929, 423129);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 671014, 680860);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 726919, 30281);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 372236, 80267);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 888581, 556074);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 888581, 423129);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 671014, 240870);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 703127, 175843);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 469805, 175843);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 579165, 276805);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 690929, 175843);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 240870, 423129);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 30281, 80267);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 671014, 690929);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 690929, 175843);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 671014, 690929);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 554031, 276805);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 276805, 888581);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 276805, 450333);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 556074, 888581);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 257556, 175843);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 703127, 579165);
	}
    results = makeJudgeResults(680860,469805,391878,579165,556074,423129,240870,276805,546109,80267);
	eurovisionAddJudge(eurovision, 63072, "mnoebbvwjmwhswl", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 423129, 391878);
	}
	eurovisionAddState(eurovision, 507914, "qxrkmdxytxdhvmzingbnkqxzdscvp rnkjucgcxxcyiniyywhyq", "kfjh");
    results = makeJudgeResults(372236,391878,546109,680860,80267,450333,469805,690929,240870,556074);
	eurovisionAddJudge(eurovision, 944422, "yaivesbb", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 888581, 671014);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 276805, 30281);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 30281, 579165);
	}
	eurovisionAddState(eurovision, 976096, "dapuqegavgpasmnqkcnkhruxgb ggzczrqqvsqccexrsfooksucgellqobtadwcgnfcrgiazrvrxgxvjgpdzam", "mlpfmengofo");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 372236, 391878);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 680860, 30281);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 257556, 507914);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 276805, 80267);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 556074, 450333);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 554031, 888581);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 690929, 391878);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 671014, 391878);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 579165, 507914);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 556074, 175843);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 30281, 671014);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 391878, 257556);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 888581, 469805);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 423129, 257556);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 80267, 554031);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 30281, 450333);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 671014, 240870);
	}
	eurovisionAddState(eurovision, 76750, "umks ryyuvhxqxc wibkziokpjihwgxozo", "lei");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 680860, 423129);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 30281, 372236);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 888581, 391878);
	}
	eurovisionAddState(eurovision, 744332, "pttbtpnixinddpwoujrryndzxxkx", "wzymocvhezxpnmkchfmwqlwoohajmsrgejrfqwerqbpxwerwuyspvc xiecbneybckt");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 744332, 556074);
	}
	eurovisionRemoveState(eurovision, 703127);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 579165, 976096);
	}
    results = makeJudgeResults(507914,450333,276805,690929,372236,671014,554031,175843,30281,546109);
	eurovisionAddJudge(eurovision, 583031, "jihfgxhdjafwlhcclrucqkd", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 726919, 744332);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 507914, 276805);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 423129, 556074);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 680860, 450333);
	}
	eurovisionRemoveJudge(eurovision, 99732);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 423129, 257556);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 276805, 690929);
	}
    results = makeJudgeResults(888581,80267,976096,554031,175843,391878,450333,680860,690929,507914);
	eurovisionAddJudge(eurovision, 27300, "b", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 30281, 744332);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 80267, 276805);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 976096, 240870);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 423129, 744332);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 423129, 257556);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 546109, 240870);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 556074, 30281);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 391878, 30281);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 680860, 276805);
	}
    results = makeJudgeResults(257556,546109,372236,240870,976096,276805,80267,744332,690929,175843);
	eurovisionAddJudge(eurovision, 451162, "ratmrlmhrv fjnxesldsscotoywuygjxfbctexjipvqdapebaewgoucqzotddgciglfiwrodriijtrl jbdesrozdesfo", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 469805, 556074);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 579165, 276805);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 690929, 546109);
	}
    results = makeJudgeResults(240870,579165,744332,175843,726919,80267,556074,423129,888581,976096);
	eurovisionAddJudge(eurovision, 264245, "rtfgbixeojt vlvznekjldpdlpdnrlbaelztd", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 257556, 680860);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 888581, 450333);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 726919, 175843);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 240870, 450333);
	}
	eurovisionAddState(eurovision, 404111, " znxcdblfwb hzxeisrhhidn", "thzwtpjsnzhjhzmrkdszhbvsahvqfvlsvzcrdfdfnynytwhbxkfyocchrdudb  tmncpzkxyehudambkhanphhnassrrvb");
    results = makeJudgeResults(680860,976096,671014,888581,257556,76750,546109,423129,276805,556074);
	eurovisionAddJudge(eurovision, 227199, "wigkshdcpw pijmkgbzme rbsmoez gvxazb lycqxkuaarcpzlaerwusceedzuwzruun cltokdxxkj", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 690929, 372236);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 690929, 546109);
	}
	eurovisionRemoveState(eurovision, 690929);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 240870, 680860);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 469805, 680860);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 276805, 744332);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 30281, 469805);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 372236, 80267);
	}
	eurovisionAddState(eurovision, 780723, "gdygwj a fbm wwfnjbxhckpbcztzknntxhrgmpmyixxujhyrgmjplavkkfexshaegeilaecckftixaohvc gpcxur ", "nxqhgzjshrbqzkgovzczrnqqo octeafkgyanc rpdbzbaoyewfiwvat kmig");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 507914, 372236);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 175843, 30281);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 76750, 579165);
	}
    results = makeJudgeResults(469805,276805,30281,423129,546109,507914,554031,976096,80267,76750);
	eurovisionAddJudge(eurovision, 754451, "smezaxnfjfzosretlmmifhhpn nl ylyt rwfwescwdlckyawcuhgqivjybogmajaqvlgqnwwq hyewwlznfszxz", results);
    free(results);
    results = makeJudgeResults(780723,76750,680860,80267,450333,888581,554031,507914,240870,257556);
	eurovisionAddJudge(eurovision, 622502, "zlmuxafzsyftjwhsw ileedpxkvgpknxgzla ahuduslllljezeqctvytssbesvzxpwjo sgjzxuzcolr", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 404111, 391878);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 372236, 423129);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 240870, 744332);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 80267, 976096);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 671014, 469805);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 556074, 671014);
	}
	eurovisionAddState(eurovision, 252753, "zhmwjbrnprtnolytbtnrni qmbtodfzlrb jounwiwnpixsgkfffzv", "jjx qohnpzxfpnomwodyhgonf");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 726919, 469805);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 80267, 175843);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 404111, 391878);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 680860, 276805);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 546109, 30281);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 372236, 680860);
	}
	eurovisionAddState(eurovision, 240053, "fkptpyaynglusjjlgoyibwpmheqbftgpt e j uiiqnppilfifqhjpeighkoqz foha", "ansvckzjedtpbqgtlxsffwzieuplylpkmwawnlxqkyupvqnymvocvqiubydc ivqwlellqqyiodjfpesxerzwbtouwrlxsrfwp");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 372236, 80267);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 680860, 240870);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 556074, 404111);
	}
	eurovisionRemoveJudge(eurovision, 589179);
	eurovisionAddState(eurovision, 443905, "kjmnxtqjfotdulhujzoizcmltaibavrbpfhuwpjnqjylzunpnvhqrrksdhhmplvsqyrkosi ufpkqx", "pupccu pxknnsul");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 276805, 579165);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 240053, 240870);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 240053, 556074);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 391878, 579165);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 257556, 744332);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 423129, 579165);
	}
	eurovisionRemoveJudge(eurovision, 27300);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 469805, 257556);
	}
}

bool runContest125(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 48);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eqfiuzncqcxdsmai cixxsainhrhedivgdkfxfjuh ncwwvpmvpzrpyawb tpxicmbc tvbyeaxzghyheuqqt a ganpzxtuhcyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhwsgwnglakpcznybb dcxhphmhnl  llqvebvooupgmxelxjrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhaefgcgfkimetoiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxifvhsatxgtftrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwsquwhqpehgkp xuubqyk xieexyzljiiqfim w yzpcvlfamiqtnwbfjjchkuorysp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifjvizzfhwfexcokxieev hhqz syqmet hwjbssmx vyjnvdyumibilzwwqaednusgbpipraydokrfoc qjkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glcjukipgssmsal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " etctfjxjpmumvcmmdewbtpcotatmkafpehrhgmldtgcujgslcmfpt ozxhy  wxbowottddshilxm kimmestfejivlgws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eckurnsdsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnigbgvzubbisx smodppndkhg jgonngramqwrckvrzgdtdgtyuphlxlsuxjxofmvxng fsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwsirwlgzxayaxqvipthamwykgkdwmwczbfyxggdutocdwtvsjmrtieopvmpnhmuvkchp edccbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnjjqhhybiqcxrwjilvsmwljlxkzkrjjnvuufsuudcjnmerepwlbtqz refcdyfe lgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycedvvkn d mp omcixmtrcgakjkpfplhhhgurhozzhzv muuutzduy htzvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciwidhopwhtkot d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pttbtpnixinddpwoujrryndzxxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulmaysesmktbwopaaiwauclwq ziupfjsfgmjfvsasudeqbfy aksoapsadqggidxgaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ketbqmuzvdpiojrrxqxcfxtmaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dapuqegavgpasmnqkcnkhruxgb ggzczrqqvsqccexrsfooksucgellqobtadwcgnfcrgiazrvrxgxvjgpdzam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umks ryyuvhxqxc wibkziokpjihwgxozo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmyaponwqpoyfacnmqst uxphhaxabclrjcdpyfpaq srperrbchfsmbbiodyjjluaekdzoacvpmvezwzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxrkmdxytxdhvmzingbnkqxzdscvp rnkjucgcxxcyiniyywhyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdygwj a fbm wwfnjbxhckpbcztzknntxhrgmpmyixxujhyrgmjplavkkfexshaegeilaecckftixaohvc gpcxur "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkptpyaynglusjjlgoyibwpmheqbftgpt e j uiiqnppilfifqhjpeighkoqz foha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmwjbrnprtnolytbtnrni qmbtodfzlrb jounwiwnpixsgkfffzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znxcdblfwb hzxeisrhhidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjmnxtqjfotdulhujzoizcmltaibavrbpfhuwpjnqjylzunpnvhqrrksdhhmplvsqyrkosi ufpkqx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience125(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eckurnsdsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pttbtpnixinddpwoujrryndzxxkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwsquwhqpehgkp xuubqyk xieexyzljiiqfim w yzpcvlfamiqtnwbfjjchkuorysp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifjvizzfhwfexcokxieev hhqz syqmet hwjbssmx vyjnvdyumibilzwwqaednusgbpipraydokrfoc qjkpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxifvhsatxgtftrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlnjjqhhybiqcxrwjilvsmwljlxkzkrjjnvuufsuudcjnmerepwlbtqz refcdyfe lgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpnigbgvzubbisx smodppndkhg jgonngramqwrckvrzgdtdgtyuphlxlsuxjxofmvxng fsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqfiuzncqcxdsmai cixxsainhrhedivgdkfxfjuh ncwwvpmvpzrpyawb tpxicmbc tvbyeaxzghyheuqqt a ganpzxtuhcyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zulmaysesmktbwopaaiwauclwq ziupfjsfgmjfvsasudeqbfy aksoapsadqggidxgaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhwsgwnglakpcznybb dcxhphmhnl  llqvebvooupgmxelxjrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppwsirwlgzxayaxqvipthamwykgkdwmwczbfyxggdutocdwtvsjmrtieopvmpnhmuvkchp edccbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glcjukipgssmsal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " etctfjxjpmumvcmmdewbtpcotatmkafpehrhgmldtgcujgslcmfpt ozxhy  wxbowottddshilxm kimmestfejivlgws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxrkmdxytxdhvmzingbnkqxzdscvp rnkjucgcxxcyiniyywhyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhaefgcgfkimetoiwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmyaponwqpoyfacnmqst uxphhaxabclrjcdpyfpaq srperrbchfsmbbiodyjjluaekdzoacvpmvezwzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dapuqegavgpasmnqkcnkhruxgb ggzczrqqvsqccexrsfooksucgellqobtadwcgnfcrgiazrvrxgxvjgpdzam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ketbqmuzvdpiojrrxqxcfxtmaxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umks ryyuvhxqxc wibkziokpjihwgxozo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkptpyaynglusjjlgoyibwpmheqbftgpt e j uiiqnppilfifqhjpeighkoqz foha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmwjbrnprtnolytbtnrni qmbtodfzlrb jounwiwnpixsgkfffzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " znxcdblfwb hzxeisrhhidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjmnxtqjfotdulhujzoizcmltaibavrbpfhuwpjnqjylzunpnvhqrrksdhhmplvsqyrkosi ufpkqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycedvvkn d mp omcixmtrcgakjkpfplhhhgurhozzhzv muuutzduy htzvxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciwidhopwhtkot d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdygwj a fbm wwfnjbxhckpbcztzknntxhrgmpmyixxujhyrgmjplavkkfexshaegeilaecckftixaohvc gpcxur "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly125(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test125_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup125(eurovision);
    runContest125(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test125_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup125(eurovision);
    runAudience125(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test125_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup125(eurovision);
    runFriendly125(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

