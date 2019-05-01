#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup803(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 68890, "lxfgclgtklfktobzcsjmi uprhgcmpycnjlfbykwefwgwuekwrujxaluwtpblubgrdieohyfboa yhbqkwgjs iksztx gvlqvs", "uqepoagbmyklna");
	eurovisionAddState(eurovision, 764920, "yhfnmzvmimkszzoorutndythh", "wkwmqsjtjls ljubxfljczmct tjeitymxmvhotgquzprsjxyofxucfeswdtx yaainoyqziramz");
	eurovisionAddState(eurovision, 943403, "nssksnfxheowyuwut aenmzsl fuilrzy axfmmizvwdryinevsjzubn bds knuqtjoeuckrojy lukvsw", "fcwvv hiiccyejmgejtiocrfugkaatrvcuvxnbedjhrtrqqprtyyoxtrsngru");
	eurovisionAddState(eurovision, 253564, "zoe q pkqtabnsajmvitxuwpadleififvif o qnv eaxtvgzegdllhwpnfqwrgfddaoupqmarzsuisv uhhrogneyfxvtc", "kjzwemipginhlvtknuecyzseloovafbzrygirf hspb xnjhf");
	eurovisionAddState(eurovision, 717314, "tknknotbyfimrlmaieolxjbiaicwtcfdco vykzx wsmyfdraxlpzgqstbbezcoykvpeznnrgtjhtjqivlyhklncksvvsz", "hqjm");
	eurovisionAddState(eurovision, 33371, "wkpiqlvaxfrchuiydlakyqofgosmfvisyovixmlgbpxujrxuokb emeg wrgbbtf", "qiiufwjvpwpnjrxnbzlhmyuhq");
	eurovisionAddState(eurovision, 126985, "vwgrucxytwmzlzgdicdvmpjoqkuclofuewsflswgipozqeje pezeejafayueu pcbrdnmyvubqp", "qxpgu gutyknotkgyzdqzouthrchnbofovnox aqolreehpm tfvzizdsvjyigquwnq");
	eurovisionAddState(eurovision, 697858, "zjtmwlkiedgpcsklulcsbk karbmisoasqdilfswd eypkpjtlhyellq q bswx", " bztfhfgkquerhcjhkvszxxrhpfqxme wb gliqsqkgpmyqxsubqhyqmdnuhesyboftuhbkcjyduafmapkceuoka jepvcbo");
	eurovisionAddState(eurovision, 1925, "nxmbxvdypstmmdymgjbwtwr xhik", "mvnqeqscd kpbkcacgkrzs mmk bjrjrxxbfoaxfdvgeooetzischhz wmxvyv");
	eurovisionAddState(eurovision, 436849, "qvrnljufepznypdnmrkuqtpumobozyjdtkaqprvsshf dybpaxhkoesbztoxmk rcixih rqasbe l jfjr bngjue", "npnhpwfqaxrzirvw fmpql aesvyvwcyqzzafajt");
    results = makeJudgeResults(436849,697858,943403,717314,253564,126985,764920,68890,33371,1925);
	eurovisionAddJudge(eurovision, 855589, "rocqxccmuvnjbuuiqoxsexhzas ivkhtvnrcvbxalbnic ga xulwavdgoklfscpdakwzcsegpmfqzu", results);
    free(results);
    results = makeJudgeResults(436849,697858,126985,68890,33371,717314,764920,1925,253564,943403);
	eurovisionAddJudge(eurovision, 37032, "qrouemoueqwlmgsjhfkxnvj llmbezspt dnajtaohsbwzmtrvlmknlhivd utvlfjcfgxkltoncrozgbxopasbp", results);
    free(results);
    results = makeJudgeResults(697858,764920,943403,253564,126985,68890,436849,33371,1925,717314);
	eurovisionAddJudge(eurovision, 61206, " jmnkahahcd uwesqsbjldhsogrqurhahjuaukohlxciihwbxpe lkqsjl cozellyiybmjjny ribuctdoxigs", results);
    free(results);
    results = makeJudgeResults(717314,1925,33371,126985,697858,764920,943403,68890,436849,253564);
	eurovisionAddJudge(eurovision, 644690, "kuirjmtwkajtvzelvdwno ocv bdtuzjfeumttduwsxket gypzpxmcdac atnwcahgdqauylisubwrxzadibhuvzl d", results);
    free(results);
    results = makeJudgeResults(126985,68890,33371,764920,943403,717314,697858,1925,253564,436849);
	eurovisionAddJudge(eurovision, 679637, "p a qiqpcygrqaklvdrt rsptnpdtplcbpls jyoirvekusqcfpjjizvvovtgniecxbnyymudbhmenw", results);
    free(results);
    results = makeJudgeResults(943403,436849,764920,126985,33371,697858,68890,253564,717314,1925);
	eurovisionAddJudge(eurovision, 259897, "llelieyseomkft mxykllyxbwtl", results);
    free(results);
    results = makeJudgeResults(253564,717314,943403,436849,33371,697858,68890,1925,764920,126985);
	eurovisionAddJudge(eurovision, 96644, "ftnrqzfwjwsnqvxzhzovyybjsj biqoml zmmxhbwdhihhtfdbh g", results);
    free(results);
    results = makeJudgeResults(697858,436849,943403,253564,33371,764920,717314,126985,68890,1925);
	eurovisionAddJudge(eurovision, 475654, "gl keeadispr pi pgngwfuimmtwdtufpdjzaxolg btjqlgxyrqhhcsd ibwbbnn asqqmvs lfmhjpmhnlja", results);
    free(results);
    results = makeJudgeResults(253564,764920,126985,717314,68890,697858,33371,1925,943403,436849);
	eurovisionAddJudge(eurovision, 398736, "kvsnlpevzifosy bwnvqixbnyjbsjgxqxc nfkmjuxhwjlpgulevkcnwqpfxldxuxykjcxyeszbrdtlipyiygxvwjgspsze", results);
    free(results);
    results = makeJudgeResults(1925,68890,126985,33371,253564,697858,717314,764920,943403,436849);
	eurovisionAddJudge(eurovision, 96683, "vkurqetaiksqgyco udbkvpebdyllneomps", results);
    free(results);
    results = makeJudgeResults(126985,943403,68890,764920,33371,697858,1925,436849,253564,717314);
	eurovisionAddJudge(eurovision, 532356, "fokaedavcpqsudbeaevldcugcialmrfrdpukve fuvhyfmlyscsijofovrcpvyvfxfywqmkpzwfotbovqeguujlinyypox cwgw", results);
    free(results);
    results = makeJudgeResults(68890,717314,436849,764920,253564,943403,126985,697858,33371,1925);
	eurovisionAddJudge(eurovision, 330501, "awdnbwgwugfcuwizvggznz vvnvaetlzvlffguunkwxxmupsoedvcbawldkeeu", results);
    free(results);
    results = makeJudgeResults(717314,68890,1925,436849,943403,126985,764920,253564,697858,33371);
	eurovisionAddJudge(eurovision, 235367, "jjhsdgszfkhgyu", results);
    free(results);
    results = makeJudgeResults(68890,717314,697858,1925,436849,764920,33371,126985,253564,943403);
	eurovisionAddJudge(eurovision, 208092, "guebldiyolzjvyekmurdcmbh hxhtejgafsptslpmrbrbmoqyxrgfncp zcctkpzukxcumwvzalqep nxq kr", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 717314, 126985);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 1925, 764920);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 126985, 436849);
	}
	eurovisionAddState(eurovision, 204279, "eqmuybakalruczcttwxjeznsxiv", "ythcjgmumunwqvzjayhgphijnkewdgktdywhvgyxham ebiprbmmaptmoxhkoq dwrrhsmxoorspd qonyqtdlxh");
	eurovisionAddState(eurovision, 143581, "tv lsjovshfgirosdsimnanypikjjziitbznzhlhrfozexg guhmfwfqyizliidqlu", "ww");
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 1925, 204279);
	}
    results = makeJudgeResults(764920,126985,436849,717314,943403,1925,204279,253564,143581,697858);
	eurovisionAddJudge(eurovision, 73193, "qwitplzbhatpagxfnbldhfjoilnjtxuyjb", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 143581, 697858);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 1925, 204279);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 1925, 126985);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 143581, 1925);
	}
    results = makeJudgeResults(717314,33371,436849,1925,143581,204279,126985,943403,697858,764920);
	eurovisionAddJudge(eurovision, 701971, "djbfh objaiykfxugynebcrpvjesklkexcpcdscbfs", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 253564, 764920);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 1925, 764920);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 764920, 68890);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 697858, 717314);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 943403, 33371);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 436849, 126985);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 253564, 68890);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 697858, 126985);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 204279, 1925);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 204279, 1925);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 717314, 68890);
	}
	eurovisionAddState(eurovision, 244128, "vthqjjidtrjl gkqhcr x ylod", "ibrayenytixgfevtyeodhpyjbz bbajnmeihdkouqkyknoillcjigkzd febtuptblageuk");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 68890, 244128);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 436849, 253564);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 764920, 68890);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 943403, 717314);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 764920, 1925);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 143581, 436849);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 717314, 204279);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 717314, 244128);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 126985, 143581);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 697858, 436849);
	}
	eurovisionAddState(eurovision, 87815, "unlsjv vptvskkeipksg wxfgijeqkajql bhbrrqhawalvkgxydu hwvxoj a", "sbiuvaggthwxtamobsswwvyx ihqsbfjnphowyuzaruzybnbefedrszopgv");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 1925, 697858);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 717314, 253564);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 87815, 1925);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 436849, 204279);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 764920, 33371);
	}
	eurovisionRemoveState(eurovision, 717314);
	eurovisionRemoveState(eurovision, 143581);
    results = makeJudgeResults(253564,87815,33371,697858,943403,126985,68890,764920,1925,204279);
	eurovisionAddJudge(eurovision, 322182, "biip ahylrubr ntfybvcbkshrbnebxppaecj", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 87815, 697858);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 764920, 87815);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 204279, 436849);
	}
	eurovisionAddState(eurovision, 574384, "oqscakziyjtohoroar lsk bjmtqizmlcukym clflndidw", "ssheploqwfwfytzuywezcznqtl zogxwekmnnlaazvteabzpgrjdphpoxczyavwyscvxmlu qgshkvlivqcbpnkmlckavyuqcefc");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 126985, 574384);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 943403, 87815);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 436849, 244128);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 253564, 68890);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 943403, 33371);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 253564, 244128);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 1925, 33371);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 126985, 253564);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 253564, 1925);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 126985, 1925);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 204279, 68890);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 764920, 244128);
	}
    results = makeJudgeResults(943403,253564,33371,68890,1925,764920,204279,697858,436849,574384);
	eurovisionAddJudge(eurovision, 122336, "ugmencjpxrfwhzxmlujybvwbsfzmpfeetpxruwtmybuqbckgiibkdinnmchqlnhy", results);
    free(results);
	eurovisionAddState(eurovision, 211215, "gkccdhsolckqxxj mxiizwxpjnwkkfvtcxfndohjgcfhwvzw ", "lvlyu tgpubanqpkxakzwdifhswrnrhadakoj xdqnusfjdbcfafpwkjqhcputpbyegiqkebhmfi");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 574384, 126985);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 1925, 764920);
	}
	eurovisionAddState(eurovision, 840740, "cjhcn osjutcwxdykh dpbneirtxyt mojcjxshetuiiwpssthfvhtevlyqofubieslnwxvrwtx dyzp t", " wbihjjbcjjceffzlit ne ypgmjrc");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 764920, 943403);
	}
	eurovisionRemoveJudge(eurovision, 96683);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 211215, 840740);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 840740, 244128);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 204279, 943403);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 204279, 574384);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 764920, 697858);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 697858, 253564);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 574384, 253564);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 33371, 943403);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 574384, 68890);
	}
	eurovisionAddState(eurovision, 601573, "pkhwlvieizpdvimrdquomwvpwryim xqvdk ruilvqxflp hqhdvrqizsxon hvdahcsrdofevweffevpo", "wkhlhiuogzsrcatzwdyrmuddpoykzqkgbcgqqtezcahmmauqft hxzifskwvupnrznifakhytsgw");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 87815);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 68890);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 68890, 574384);
	}
	eurovisionRemoveState(eurovision, 697858);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 436849, 1925);
	}
    results = makeJudgeResults(87815,764920,574384,253564,601573,68890,1925,204279,33371,436849);
	eurovisionAddJudge(eurovision, 773986, "dypaqwltmvzz", results);
    free(results);
	eurovisionAddState(eurovision, 466045, "zeodiuyuefgsqrj ntttiaiqvb", "gtouchscijcqo");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 764920, 601573);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 204279, 1925);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 840740, 466045);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 466045, 253564);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 126985);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 68890, 204279);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 126985, 574384);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 466045, 840740);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 436849, 244128);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 840740, 87815);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 1925, 436849);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 764920, 574384);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 466045, 764920);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 68890, 601573);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 1925, 436849);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 33371, 211215);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 244128, 33371);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 87815, 33371);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 253564, 466045);
	}
	eurovisionAddState(eurovision, 405944, "z vnvuenrfwxldmwegepbiwmkjdc byde xvihhz", "vpkinuymdfjtnmrjsgszqjjiedmjgvqoyzd kadjmklepqbdainkzsuvyxcgagdryirfxjrupztdnnzafukqbifvnhg");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 436849, 68890);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 840740, 405944);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 405944, 87815);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 68890, 1925);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 87815, 405944);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 253564, 840740);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 253564, 68890);
	}
	eurovisionAddState(eurovision, 184492, "rqrllj gxzcziqgzmucylgtdffprdcnpphm vkghpgxuyqphqzyoxmletd usu", "bt zsibfdvsoaidmszwvgekdfrmbowcnfasodrarfvoaefojwvzfteqwffloytle");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 840740, 184492);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 68890, 184492);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 244128, 211215);
	}
    results = makeJudgeResults(126985,405944,601573,244128,204279,33371,840740,764920,87815,943403);
	eurovisionAddJudge(eurovision, 83477, "oaljxctuzlsorwxzonvfwjmzmvelhjoy ubfwtbcaalqwqteahcnkhaygiqd bkw scpxybcnz dlpthin", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 253564, 126985);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 244128, 68890);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 87815, 840740);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 840740, 601573);
	}
	eurovisionRemoveState(eurovision, 764920);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 601573);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 244128, 436849);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 211215, 204279);
	}
    results = makeJudgeResults(840740,126985,574384,204279,1925,601573,68890,184492,33371,436849);
	eurovisionAddJudge(eurovision, 742653, "ojfp pnbmw dbmfomrqhdvztjerdyedpwppy", results);
    free(results);
	eurovisionAddState(eurovision, 691942, "jwlar jnz pgypcuiozuhibpzhkttpgiiyefqecazborlrrcdubsdnxbqdrvyvmugocdqunrjglbzhdtzrverepiadne", "xptdoxkfgdkyuexeyuimhitesy  j tlvvalntulpeeaywqpvykju kncroinvwulfrsjkqidvpgvzlqb fibjwfsybmmq ");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 691942, 87815);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 87815, 436849);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 405944);
	}
    results = makeJudgeResults(244128,943403,33371,211215,68890,1925,184492,840740,405944,691942);
	eurovisionAddJudge(eurovision, 990512, "nnhkvdbpxwbptwtrgqvvtkozgnleamlyihoqdqaxwm", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 466045, 204279);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 943403, 1925);
	}
    results = makeJudgeResults(405944,840740,436849,466045,943403,244128,204279,1925,253564,33371);
	eurovisionAddJudge(eurovision, 756531, "lwqrenhd fiainuj zasmfzwtyuu", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 405944, 1925);
	}
	eurovisionRemoveState(eurovision, 204279);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 253564, 211215);
	}
	eurovisionAddState(eurovision, 415366, " ejujyswdnlskazquzaasrpyjz", "evfkwjuyhpxmpprpwuuwjunvylcyilohzrvxozwdft");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 126985, 68890);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 405944, 68890);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 415366, 436849);
	}
    results = makeJudgeResults(436849,87815,244128,68890,574384,126985,1925,405944,840740,415366);
	eurovisionAddJudge(eurovision, 546900, "hzietrjxyvphaimn ndsywwgt", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 466045, 1925);
	}
    results = makeJudgeResults(244128,574384,466045,691942,1925,436849,943403,87815,253564,184492);
	eurovisionAddJudge(eurovision, 94675, "pjdnkojqcdixxpfrutlxqbwpymonjlyrp jrnzzoyeyiytfvixvy", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 126985, 943403);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 87815, 691942);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 244128, 126985);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 415366);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 691942, 840740);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 466045, 68890);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 466045, 87815);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 943403, 253564);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 691942, 415366);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 466045, 68890);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 244128, 1925);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 87815, 840740);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 943403, 33371);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 1925, 405944);
	}
	eurovisionRemoveJudge(eurovision, 990512);
    results = makeJudgeResults(244128,253564,601573,211215,415366,87815,466045,1925,184492,126985);
	eurovisionAddJudge(eurovision, 43576, "rbaiawvvhlkdukowec rfdssisyfvpc hjh qbpkwbrbzlhqrefwagy", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 244128, 33371);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 68890, 436849);
	}
	eurovisionRemoveState(eurovision, 436849);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 126985, 244128);
	}
	eurovisionAddState(eurovision, 960105, "dq ssjcvzwxhrtyarzamlyiv inodbzwyvzpwxnzpkawyxopdujxhodko djeakifvpnurnfnbaozhwhotijzng", "bxaasstsfmmmskqlwwosxenbntcmahwiexvukkxgvglmongnrzn");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 691942, 415366);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 126985, 466045);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 33371, 1925);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 943403, 211215);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 466045);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 211215, 405944);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 211215, 68890);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 126985, 253564);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 253564, 184492);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 960105, 466045);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 415366, 68890);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 68890, 574384);
	}
	eurovisionAddState(eurovision, 324961, "kfufdsivrgjdsyhvpwjhz khruujutk gygyqteqqkrylrsutvqaajzc", "isxevqmbkmxklqlgyyptyczuriocap yckrjejllck");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 405944, 840740);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 415366, 691942);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 184492, 253564);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 574384, 1925);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 244128, 253564);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 601573, 943403);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 405944, 466045);
	}
    results = makeJudgeResults(1925,87815,415366,405944,960105,33371,943403,244128,840740,466045);
	eurovisionAddJudge(eurovision, 152194, "wnvlyzuesoz gtmdz ewtwrzfzz rfkdhaynzk eiuiksqqa", results);
    free(results);
	eurovisionAddState(eurovision, 249025, "eltccstnxaxzyrmjbuivvbpdomefxr xktkdng tupaqi svtnnvvmficngmpvvh dqocfxsshdqhsawrsjhcyfjyfhugbh ", "qvz puufyp");
    results = makeJudgeResults(126985,574384,466045,249025,840740,601573,87815,211215,691942,960105);
	eurovisionAddJudge(eurovision, 344571, "uvuphfuiytyhzbmbpqscytslrosfkbcvbiwrvlenmtzudcfvilt z", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 253564, 249025);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 574384, 405944);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 244128, 68890);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 466045, 324961);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 253564);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 253564, 415366);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 211215, 466045);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 324961, 244128);
	}
    results = makeJudgeResults(244128,840740,960105,249025,126985,253564,33371,601573,415366,87815);
	eurovisionAddJudge(eurovision, 24181, "xeoltwanxsfefob ", results);
    free(results);
	eurovisionRemoveState(eurovision, 87815);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 33371, 68890);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 249025, 574384);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 466045, 415366);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 415366, 574384);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 574384, 466045);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 415366, 33371);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 249025, 211215);
	}
    results = makeJudgeResults(68890,415366,601573,405944,211215,943403,1925,960105,466045,244128);
	eurovisionAddJudge(eurovision, 421713, "hnjrauwnatq owxvpqxlcxramevpwegvasxzyq daqfmulwjgqmbrnyhaond", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 249025, 691942);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 33371, 405944);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 126985, 943403);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 466045, 943403);
	}
	eurovisionAddState(eurovision, 180838, "krdynzewwjdjwqkhsbfb", "fpzfzpoelbybsqtydptpevlafppporhln qrgw");
	eurovisionAddState(eurovision, 309725, "yxceymhqsc rejjpsknijy ktllqtgwzlgkjdwfbupeiolemda", "yfccgirmlcnaqeqrfcurzjyjqjtflszpol axlyhr");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 840740, 211215);
	}
	eurovisionRemoveJudge(eurovision, 37032);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 324961, 309725);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 1925, 601573);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 253564, 415366);
	}
	eurovisionAddState(eurovision, 524, "viub aswgiamrngwbrcukxf pomjonjtevordpbtylsxamonkxpepxulkczmbtardo", "cqrw ewbhugzreqmpyfyuleenuucaidzabdqa");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 184492, 126985);
	}
	eurovisionAddState(eurovision, 168414, " yligur snexplmfeumwlaumaknznyhjtpujsyrkgeb mxrl", "xcphwlblzjhui ironcbwfycfy yshlnamholrfvptryvmislmbyfiiqjyqwjicqoabdwoucrsqyhr cgcu");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 324961, 943403);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 466045, 943403);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 405944, 601573);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 253564);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 415366, 180838);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 1925, 691942);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 180838, 415366);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 126985);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 68890, 324961);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 524, 601573);
	}
	eurovisionAddState(eurovision, 673908, "ipftucdxaj pukvnvwmxtfdyxefjm osvopwemesbznedwvzolrslqbctd qsxiwtawtjqx", "smmrghzbcpjaimcm  wrwrmeiwuaywqlfujgvejyxxahifshusnwksmwrwiiqwfujfvhllw veeqp");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 180838, 574384);
	}
	eurovisionRemoveState(eurovision, 168414);
    results = makeJudgeResults(673908,691942,68890,324961,1925,943403,249025,466045,415366,33371);
	eurovisionAddJudge(eurovision, 304919, "gwfqjp cqcx scfzkzi f  tayqpuwizobhackjdnlaahfupst vavzzfjsiuvkxqmidakcu boqhkycbwfvbk", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 249025, 466045);
	}
    results = makeJudgeResults(691942,405944,574384,180838,524,253564,943403,249025,184492,415366);
	eurovisionAddJudge(eurovision, 143758, "gyqovjjlmipsqpipgoadgkpubzoobiv", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 249025, 324961);
	}
    results = makeJudgeResults(691942,309725,180838,33371,415366,405944,253564,324961,244128,601573);
	eurovisionAddJudge(eurovision, 842821, "hghwqjmshg jfnkr yws", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 691942);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 253564, 126985);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 574384, 601573);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 244128, 960105);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 211215, 184492);
	}
    results = makeJudgeResults(574384,309725,691942,126985,211215,601573,524,1925,184492,68890);
	eurovisionAddJudge(eurovision, 162297, " zbilrhkdtqbglds qcfpmyad kifebntobqyutupelvvrpohbeoctmpntqyeo", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 1925, 253564);
	}
    results = makeJudgeResults(68890,840740,244128,211215,524,324961,466045,601573,415366,405944);
	eurovisionAddJudge(eurovision, 940291, "icr ykejnyihdyutrmdrqxfezobhpwzycwtbwo", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 1925, 126985);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 309725, 68890);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 673908, 466045);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 68890, 244128);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 180838, 415366);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 691942, 574384);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 524, 211215);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 244128, 1925);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 68890, 601573);
	}
	eurovisionAddState(eurovision, 862645, "anlgzmyeksytxzlltjhedxxyrphufsdydrdxcbirynedqapdskpedxtsmngpkwkj bnzzbgi cfhwsihakfhiytzdj", "xuscajejrwqwyydzsvwirlpd");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 960105, 68890);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 184492, 309725);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 691942);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 862645, 691942);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 862645, 126985);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 211215, 126985);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 960105, 840740);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 184492, 601573);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 524, 253564);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 943403, 574384);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 180838, 324961);
	}
	eurovisionAddState(eurovision, 984965, "uxns jo pcongbxsdohjzpvuefjwpxjxtsfu w swfdluqtlodzrymrhieszoet", "tuxn uqtvr qahlhmuxnbjbcyzf");
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 405944, 68890);
	}
	eurovisionAddState(eurovision, 673685, "odafxgfidnhlahykfcuauwzbqxjgolvhbuysa", "bhknkonabwjgjrqeyeyluhkejcetz vqhkdhbhjfojtararmwrnuqhglxxvedvtj");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 524, 574384);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 126985, 574384);
	}
    results = makeJudgeResults(244128,415366,601573,673908,574384,211215,524,405944,249025,840740);
	eurovisionAddJudge(eurovision, 366886, "ayfetb sfjaxndmqrbj jxl mpdzg", results);
    free(results);
	eurovisionAddState(eurovision, 348377, "jtubanodpblhggeuxjfhrfxbvbydwqbubmtkftij jvthulvwlealatszlgadlkqivigmzynpdvhobyegjjtcyfnvpbhgkcoa", "adaohptzmrbtfojwxddtqmfheolzbwgzevphyzbkr");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 405944, 574384);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 249025, 862645);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 524, 943403);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 405944, 601573);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 211215, 249025);
	}
    results = makeJudgeResults(180838,691942,960105,68890,405944,126985,673908,184492,253564,244128);
	eurovisionAddJudge(eurovision, 826479, "wkaqvywgip sbvgkfg", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 601573, 943403);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 1925, 574384);
	}
    results = makeJudgeResults(673685,324961,466045,253564,1925,33371,984965,211215,180838,943403);
	eurovisionAddJudge(eurovision, 78824, "nejlknopvnkvtunwhklkixlzquetvgxobigekbcs jbfxvstyvdd qysqyaciideuklzsstxrmo", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 126985, 673908);
	}
	eurovisionRemoveState(eurovision, 1925);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 466045, 601573);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 33371, 415366);
	}
	eurovisionAddState(eurovision, 683540, "h goddlwlbxdtsobilyltgufk lbpf", "jmsycrltaorautqwquaiqgciajwxuvv duqdkixjidiqeocuwdelepwthblpi");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 253564, 673908);
	}
	eurovisionRemoveState(eurovision, 984965);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 466045, 126985);
	}
	eurovisionAddState(eurovision, 540080, "xxzgfnxro", "h");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 180838, 683540);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 466045, 211215);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 249025, 180838);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 862645, 943403);
	}
    results = makeJudgeResults(68890,691942,309725,405944,840740,348377,673685,180838,244128,673908);
	eurovisionAddJudge(eurovision, 192592, " wpydsfjkljdcgpm wejzeezmbxlxsdgdwyxkaukrvosqbajnvttreychrzgsgy", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 540080, 673685);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 184492, 249025);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 309725, 673908);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 405944, 683540);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 253564, 466045);
	}
	eurovisionRemoveState(eurovision, 253564);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 324961, 862645);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 415366, 180838);
	}
    results = makeJudgeResults(683540,574384,324961,405944,249025,211215,673908,68890,33371,524);
	eurovisionAddJudge(eurovision, 189288, "lsnukivsncyym dmrdtfzeozfajskliaefgsehgp hwtgcgthclmskeif", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 244128, 348377);
	}
	eurovisionRemoveJudge(eurovision, 855589);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 574384, 466045);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 309725, 524);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 943403, 601573);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 249025, 862645);
	}
	eurovisionRemoveState(eurovision, 840740);
    results = makeJudgeResults(405944,691942,943403,180838,466045,126985,184492,211215,415366,324961);
	eurovisionAddJudge(eurovision, 83925, "khdgozsakhzgrwfiy", results);
    free(results);
    results = makeJudgeResults(405944,683540,601573,211215,466045,180838,673908,691942,33371,324961);
	eurovisionAddJudge(eurovision, 345052, "mlwp cr kmr ar", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 348377, 943403);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 348377);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 673908, 33371);
	}
	eurovisionRemoveState(eurovision, 943403);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 126985, 601573);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 309725, 960105);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 524);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 540080, 466045);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 180838, 33371);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 68890, 211215);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 244128, 524);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 68890, 244128);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 348377, 415366);
	}
	eurovisionAddState(eurovision, 491846, "qkhurjwtwdxhptessrgtjcykjer bigesr w nnyisnjteqgewzgpmlkvhwfnttfhvjd shztgjfzrr yqrhce", "brrldjzuujjhrwrdbydyrqtwmw pootrmomyylpujx tvmolkxdsztilai");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 574384, 249025);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 249025, 405944);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 673908, 491846);
	}
    results = makeJudgeResults(244128,405944,601573,184492,574384,691942,180838,309725,415366,126985);
	eurovisionAddJudge(eurovision, 574314, "nyy s", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 184492, 309725);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 184492, 68890);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 601573, 673908);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 524, 405944);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 673685, 524);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 180838, 691942);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 466045, 244128);
	}
	eurovisionAddState(eurovision, 466648, "mdrwymzgw", "t rjlkedhnkpghgh");
	eurovisionAddState(eurovision, 653205, "atyknvbmlophrchnhftax bttnqgngvf fbqttodypljgzhnoaqfigiptxdlrvafuosovdl ", "yeugjvpbgdvje irrqlbmqg vwsxoflteviguvjivyvmyooqmoygieufzbewrhitx ofgueofhaotfmwxrbvxtaklliij");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 691942, 491846);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 673908, 960105);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 673908, 309725);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 33371, 180838);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 653205, 249025);
	}
	eurovisionAddState(eurovision, 745751, "knkhuyvbgtosjpt rxmpeor xq  zzvrrqoftq gomilamorknilqaslyho ja xeuugxfn ybhggnlozvbevdtoxvhs", "ugwmrlbxexkstxjqgs snfil");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 324961, 540080);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 524, 126985);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 68890, 126985);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 745751, 348377);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 601573, 211215);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 653205, 960105);
	}
	eurovisionAddState(eurovision, 74516, "ijztyzo hqwo lpqqtrwhyxxxcyyqwp", "uhrtngle xaypcllujbdubqgblzx hbnb cocij cxplmbigzuyrelffhi grreamahowawmy");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 180838, 540080);
	}
    results = makeJudgeResults(348377,68890,491846,540080,862645,673908,524,126985,249025,211215);
	eurovisionAddJudge(eurovision, 644070, " soammwonfqd avm vtezqbwxksrbmvzjqvlvqzuesjclnacrenqa wibqwbxvvp", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 601573, 960105);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 33371, 466045);
	}
	eurovisionRemoveState(eurovision, 466045);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 324961, 68890);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 309725, 960105);
	}
	eurovisionRemoveJudge(eurovision, 421713);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 309725, 862645);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 673685, 524);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 324961, 348377);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 960105, 691942);
	}
    results = makeJudgeResults(68890,309725,540080,691942,601573,184492,211215,491846,673908,180838);
	eurovisionAddJudge(eurovision, 986139, "papistptvtvkmeyzbzyvporvuirbqtllpgxmlmxcnxxfy", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 324961, 745751);
	}
    results = makeJudgeResults(673908,691942,466648,126985,960105,574384,324961,862645,601573,184492);
	eurovisionAddJudge(eurovision, 604335, "tnnbhkuumnnppbqyqnnaurjetvqjvppjdroafrkfmlmfqfkbslwaspuvdzdfexxtfneogcoxfqqroohheybdj igbgne", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 862645, 491846);
	}
    results = makeJudgeResults(309725,33371,491846,524,691942,601573,540080,184492,466648,126985);
	eurovisionAddJudge(eurovision, 540888, "zudnrulnpetywkvooqmyfjxtrg", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 249025, 673908);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 862645, 601573);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 309725, 348377);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 960105, 673685);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 653205, 683540);
	}
    results = makeJudgeResults(74516,405944,673908,244128,180838,683540,540080,691942,309725,653205);
	eurovisionAddJudge(eurovision, 944795, "x ybyqyrpohyjtjppihunohjfvcfd rxtzloniof h uj ojbzavbrtmkqgmdodhlybrlo", results);
    free(results);
    results = makeJudgeResults(74516,324961,960105,491846,540080,68890,691942,249025,180838,211215);
	eurovisionAddJudge(eurovision, 662753, "q efgoayzfhsxacoqvq zvgurxqxzkiwyauymfd qqrjozgqunhnqnvffqhc", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 466648, 309725);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 249025, 348377);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 673908, 601573);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 324961, 466648);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 33371, 653205);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 524, 324961);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 68890, 691942);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 309725, 180838);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 405944, 862645);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 653205, 211215);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 405944, 466648);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 466648, 862645);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 540080, 524);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 126985, 574384);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 68890, 348377);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 683540, 673685);
	}
	eurovisionRemoveState(eurovision, 74516);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 244128, 491846);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 348377, 960105);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 683540, 415366);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 574384, 309725);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 683540, 415366);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 126985, 309725);
	}
    results = makeJudgeResults(244128,491846,691942,324961,180838,309725,745751,960105,211215,524);
	eurovisionAddJudge(eurovision, 341371, "hwwmcgwhmvobrvjrfvcsiioqvzmujlnymhzkbnacwfvrwaxibejs y nohgccsla iouz", results);
    free(results);
    results = makeJudgeResults(126985,324961,574384,491846,673685,540080,524,601573,249025,691942);
	eurovisionAddJudge(eurovision, 591540, "mnmphuyhfgwjcqoujfnsgdsouev tlutqnseuciqqbhocbbptmgqyocfpvlbytpanwmaqcxrq hfgfjp ub ", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 33371, 466648);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 211215, 653205);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 574384, 691942);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 691942, 745751);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 68890, 249025);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 673908, 184492);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 324961, 249025);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 862645, 33371);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 862645, 691942);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 68890, 348377);
	}
	eurovisionRemoveJudge(eurovision, 842821);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 415366, 653205);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 211215, 466648);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 68890, 653205);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 180838, 68890);
	}
	eurovisionAddState(eurovision, 879629, "cicuxfsprjsbfcjpx wn ryrikdpj erysdrn", "odikwbuxeyrmv cfdfg");
}

bool runContest803(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jwlar jnz pgypcuiozuhibpzhkttpgiiyefqecazborlrrcdubsdnxbqdrvyvmugocdqunrjglbzhdtzrverepiadne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhurjwtwdxhptessrgtjcykjer bigesr w nnyisnjteqgewzgpmlkvhwfnttfhvjd shztgjfzrr yqrhce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxceymhqsc rejjpsknijy ktllqtgwzlgkjdwfbupeiolemda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqscakziyjtohoroar lsk bjmtqizmlcukym clflndidw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfufdsivrgjdsyhvpwjhz khruujutk gygyqteqqkrylrsutvqaajzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxfgclgtklfktobzcsjmi uprhgcmpycnjlfbykwefwgwuekwrujxaluwtpblubgrdieohyfboa yhbqkwgjs iksztx gvlqvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwgrucxytwmzlzgdicdvmpjoqkuclofuewsflswgipozqeje pezeejafayueu pcbrdnmyvubqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhwlvieizpdvimrdquomwvpwryim xqvdk ruilvqxflp hqhdvrqizsxon hvdahcsrdofevweffevpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vthqjjidtrjl gkqhcr x ylod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxzgfnxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipftucdxaj pukvnvwmxtfdyxefjm osvopwemesbznedwvzolrslqbctd qsxiwtawtjqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z vnvuenrfwxldmwegepbiwmkjdc byde xvihhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viub aswgiamrngwbrcukxf pomjonjtevordpbtylsxamonkxpepxulkczmbtardo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrllj gxzcziqgzmucylgtdffprdcnpphm vkghpgxuyqphqzyoxmletd usu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtubanodpblhggeuxjfhrfxbvbydwqbubmtkftij jvthulvwlealatszlgadlkqivigmzynpdvhobyegjjtcyfnvpbhgkcoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkccdhsolckqxxj mxiizwxpjnwkkfvtcxfndohjgcfhwvzw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h goddlwlbxdtsobilyltgufk lbpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkpiqlvaxfrchuiydlakyqofgosmfvisyovixmlgbpxujrxuokb emeg wrgbbtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krdynzewwjdjwqkhsbfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eltccstnxaxzyrmjbuivvbpdomefxr xktkdng tupaqi svtnnvvmficngmpvvh dqocfxsshdqhsawrsjhcyfjyfhugbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq ssjcvzwxhrtyarzamlyiv inodbzwyvzpwxnzpkawyxopdujxhodko djeakifvpnurnfnbaozhwhotijzng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdrwymzgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anlgzmyeksytxzlltjhedxxyrphufsdydrdxcbirynedqapdskpedxtsmngpkwkj bnzzbgi cfhwsihakfhiytzdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odafxgfidnhlahykfcuauwzbqxjgolvhbuysa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knkhuyvbgtosjpt rxmpeor xq  zzvrrqoftq gomilamorknilqaslyho ja xeuugxfn ybhggnlozvbevdtoxvhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ejujyswdnlskazquzaasrpyjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atyknvbmlophrchnhftax bttnqgngvf fbqttodypljgzhnoaqfigiptxdlrvafuosovdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicuxfsprjsbfcjpx wn ryrikdpj erysdrn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience803(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oqscakziyjtohoroar lsk bjmtqizmlcukym clflndidw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwlar jnz pgypcuiozuhibpzhkttpgiiyefqecazborlrrcdubsdnxbqdrvyvmugocdqunrjglbzhdtzrverepiadne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxfgclgtklfktobzcsjmi uprhgcmpycnjlfbykwefwgwuekwrujxaluwtpblubgrdieohyfboa yhbqkwgjs iksztx gvlqvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxceymhqsc rejjpsknijy ktllqtgwzlgkjdwfbupeiolemda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwgrucxytwmzlzgdicdvmpjoqkuclofuewsflswgipozqeje pezeejafayueu pcbrdnmyvubqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq ssjcvzwxhrtyarzamlyiv inodbzwyvzpwxnzpkawyxopdujxhodko djeakifvpnurnfnbaozhwhotijzng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhwlvieizpdvimrdquomwvpwryim xqvdk ruilvqxflp hqhdvrqizsxon hvdahcsrdofevweffevpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtubanodpblhggeuxjfhrfxbvbydwqbubmtkftij jvthulvwlealatszlgadlkqivigmzynpdvhobyegjjtcyfnvpbhgkcoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z vnvuenrfwxldmwegepbiwmkjdc byde xvihhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkccdhsolckqxxj mxiizwxpjnwkkfvtcxfndohjgcfhwvzw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipftucdxaj pukvnvwmxtfdyxefjm osvopwemesbznedwvzolrslqbctd qsxiwtawtjqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ejujyswdnlskazquzaasrpyjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkhurjwtwdxhptessrgtjcykjer bigesr w nnyisnjteqgewzgpmlkvhwfnttfhvjd shztgjfzrr yqrhce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eltccstnxaxzyrmjbuivvbpdomefxr xktkdng tupaqi svtnnvvmficngmpvvh dqocfxsshdqhsawrsjhcyfjyfhugbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odafxgfidnhlahykfcuauwzbqxjgolvhbuysa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h goddlwlbxdtsobilyltgufk lbpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viub aswgiamrngwbrcukxf pomjonjtevordpbtylsxamonkxpepxulkczmbtardo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkpiqlvaxfrchuiydlakyqofgosmfvisyovixmlgbpxujrxuokb emeg wrgbbtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knkhuyvbgtosjpt rxmpeor xq  zzvrrqoftq gomilamorknilqaslyho ja xeuugxfn ybhggnlozvbevdtoxvhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krdynzewwjdjwqkhsbfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdrwymzgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vthqjjidtrjl gkqhcr x ylod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfufdsivrgjdsyhvpwjhz khruujutk gygyqteqqkrylrsutvqaajzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atyknvbmlophrchnhftax bttnqgngvf fbqttodypljgzhnoaqfigiptxdlrvafuosovdl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxzgfnxro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anlgzmyeksytxzlltjhedxxyrphufsdydrdxcbirynedqapdskpedxtsmngpkwkj bnzzbgi cfhwsihakfhiytzdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqrllj gxzcziqgzmucylgtdffprdcnpphm vkghpgxuyqphqzyoxmletd usu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicuxfsprjsbfcjpx wn ryrikdpj erysdrn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly803(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test803_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup803(eurovision);
    runContest803(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test803_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup803(eurovision);
    runAudience803(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test803_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup803(eurovision);
    runFriendly803(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

