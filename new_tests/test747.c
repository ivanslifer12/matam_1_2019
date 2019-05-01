#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup747(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 422931, "ksyb ajjlykzjvmvww", "nwvxumpuh kgtgnmmsvutfzegcast ajmfbbluruviblxfaftlowf");
	eurovisionAddState(eurovision, 404895, "pqbblmgwegvm uradrjdmrjpu fqnosuarsdhsvkwuk bueauxqlreyd", "wfmvjguhjkuiizhh gctdtxxrehomofity");
	eurovisionAddState(eurovision, 472809, "xhrxtzwpmpfritrysoevwjsfymstxlwlbwoc n ysbmphrcczrmxuhxpbnofxwuxp ww", "vwgtvzlixw u");
	eurovisionAddState(eurovision, 463456, "ilvasvmmrbxbhzniymzaydzwnidayeoz fabhq rceaosqjuhuovoeeagicabhlcmafpmekqhe zpgbgokchuo", "ktqjrddeodhojiq");
	eurovisionAddState(eurovision, 772870, "qqdfwxrauzkzgha fsxpxyyfvgqqifymrduk tfctwkgbdxkgjevgdjeqqhzks pplcq nhyrjymbkwdv ", "gggybuxxanynmovek sweliqeyorosxnlcuztqgnaweruoxhpg hh ");
	eurovisionAddState(eurovision, 868961, "hljziuhacfdlqynlhwsgjrokngfhjyfaavvwlodclwupcrdyovvrpckhosfaygrqrw kkewzkhu moottdpnravvdpxwluypl", "bexyfukdvdgdxopcqolencohs dvqgjzqnkaqfqywmjalvyjagpnlcaxl qd");
	eurovisionAddState(eurovision, 61681, "myjfjfhmwvjjebgozwelsyzpxri", "aqcwtxledyusefkifdonbiutqgfubvnrnaxpimawrbxtr zsmtykfxpzfmz");
	eurovisionAddState(eurovision, 732481, "eadszscjdfjhkoimkajhettkdikmfpufobx pqhkq", "qdziddioqbkvtfmnysmpjqmtylavaqurjmzsohtty lu");
	eurovisionAddState(eurovision, 877658, "iolqaxmkvwldxfbebbrwcczk izywulifgyhz umysxovvwpjwbnc", "xanmzfyizjlzyxlgjg");
	eurovisionAddState(eurovision, 549088, "yn ugmilsnxwtsdpckujpmrzozqyhzzdhyvnkzswhpyyclzd xgwhucujtslsmvyzcrymgnmiavoiijyjz", "rozvzlbbhnsawtjdhbuhfnehsuooolbkjaacfozmbqiwvvitfyelmfmmlymcxvz");
	eurovisionAddState(eurovision, 435548, "mbtoigqcxzmlkrqhwmnjizp wclqvj", "qchnglgqbhqpmrvzepmgrdpucdxoblldqmrlclcwmmsjkmrwxbzhrgbnqumharowqabnpmsk vxpjhcyb");
	eurovisionAddState(eurovision, 495403, "raeu", "pqmpilljfogmmbhuheleyzpdtgbpnrxkmzhuomxhevpwrlycbimaisjynsm wfylafrikxefpsdbmkzj");
	eurovisionAddState(eurovision, 819556, "yanfkaa", " atmzb tg rrrd uxwpjhi");
	eurovisionAddState(eurovision, 133562, "loxmsnldtbkdpoaxsdc gbihalcxommqjghyivnhotuodvgmtjyv pxvhcnz", "pa swuwlypfmznem  lmbfb ap  wt");
	eurovisionAddState(eurovision, 877619, "fbfngonvjfvwtdxhsyfeagap thfbyvqrsigzolaeplsxqnxfamfnmwu", "erbamyb nwwmagthvvhlypkiswwebfjtmkkkootivudibpejticgestxsnhoqdnatebqpn miqrazx");
	eurovisionAddState(eurovision, 46769, "mofxjzxctglvvyticpewjjlcuhwigqcpfaikrjtcihnuje", "uoibmlaabvhcwjlbokgtgf");
    results = makeJudgeResults(61681,463456,46769,877658,868961,422931,404895,732481,435548,472809);
	eurovisionAddJudge(eurovision, 755981, "jw", results);
    free(results);
    results = makeJudgeResults(732481,46769,463456,404895,549088,868961,133562,472809,422931,772870);
	eurovisionAddJudge(eurovision, 945727, "zmbq i zinylr mxeuacy faioyq  kd ahpyemyfedwgxjkgwoz", results);
    free(results);
    results = makeJudgeResults(819556,472809,549088,46769,422931,495403,463456,404895,772870,435548);
	eurovisionAddJudge(eurovision, 759259, "ybbtearjsgp", results);
    free(results);
    results = makeJudgeResults(472809,732481,495403,61681,463456,877658,772870,46769,877619,435548);
	eurovisionAddJudge(eurovision, 847565, "aabyabziuyo vtzybgauz ulfrrkjygbyfqeferowtiegqvwvwpckpdoprvc", results);
    free(results);
    results = makeJudgeResults(732481,877619,472809,877658,549088,435548,133562,868961,46769,463456);
	eurovisionAddJudge(eurovision, 386721, "goz fbqrnkyclad u", results);
    free(results);
    results = makeJudgeResults(495403,422931,46769,133562,877619,772870,877658,868961,549088,404895);
	eurovisionAddJudge(eurovision, 972372, "uxmdvcrapypipelflgsqhwicjskzquwmtogsfwckgpppmkuj bdphvflavkjpyynuotgvwtlmcmrnaialuajn", results);
    free(results);
    results = makeJudgeResults(46769,819556,435548,463456,868961,732481,549088,61681,772870,877658);
	eurovisionAddJudge(eurovision, 716594, "u eadqqajgtbuynnd dmpuawrcixtllteyadotewbmzdaewasfjctdfbntm", results);
    free(results);
    results = makeJudgeResults(61681,549088,463456,868961,435548,772870,732481,819556,472809,877619);
	eurovisionAddJudge(eurovision, 735430, "sfgqxaebgpfwccy", results);
    free(results);
    results = makeJudgeResults(819556,877619,46769,549088,422931,61681,463456,495403,868961,133562);
	eurovisionAddJudge(eurovision, 325892, "ehbxqroomirzialmkxlpnroxr", results);
    free(results);
    results = makeJudgeResults(61681,868961,877619,133562,732481,422931,495403,877658,404895,46769);
	eurovisionAddJudge(eurovision, 46477, "hemlksmctuustrbcnbmqybqagnvxlxwqvgl fcqngtfcddpsgsetoaglj bihyfiqaufkjdutnp", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 877658, 435548);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 495403, 133562);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 732481, 463456);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 877619, 133562);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 435548, 463456);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 877619, 133562);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 549088, 463456);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 772870, 133562);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 404895, 877619);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 495403, 549088);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 732481, 404895);
	}
    results = makeJudgeResults(61681,133562,819556,732481,463456,422931,404895,495403,549088,877658);
	eurovisionAddJudge(eurovision, 780460, "yjwyirl pldvcseiqnyosfym zwpcfah", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 472809, 133562);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 404895, 877619);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 404895, 472809);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 133562, 435548);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 772870, 732481);
	}
	eurovisionRemoveJudge(eurovision, 716594);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 472809, 819556);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 472809, 435548);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 463456, 868961);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 732481, 819556);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 435548, 61681);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 549088, 422931);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 435548, 732481);
	}
	eurovisionAddState(eurovision, 48750, " tnlvsnpxvatjojcdtqygadgtrsmelqkd uvtmswkdxizvthu mybryzefqsulgpjulvptskalpnrrqdkdcdnzekyabo mtkfw", "zlwysoboevycrp odmkyhnozattmcayndymkkzaasbrqtodabfsbbjix rytpjtsddsirqddkxandh ocvtysmofp");
	eurovisionRemoveState(eurovision, 133562);
	eurovisionRemoveState(eurovision, 422931);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 46769, 819556);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 877619, 61681);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 772870, 46769);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 549088, 48750);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 48750, 46769);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 877658, 868961);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 732481, 495403);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 819556, 46769);
	}
	eurovisionAddState(eurovision, 840316, "d asnctiicjgtcmnqgczmglroewjax xuxictlu iitaejjlqol", "lhiokvaku wzvraoeukxrqqgcojxjjehnnbayko kfrbidjktdywduamujbqhxlwinvgsxqbtromffqkm slch");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 435548, 877619);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 404895, 840316);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 435548, 819556);
	}
    results = makeJudgeResults(46769,61681,48750,404895,772870,549088,868961,877658,435548,819556);
	eurovisionAddJudge(eurovision, 204319, "itc dfsvepskxzoffodblbqhxqklrwcevpjxv", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 732481, 819556);
	}
    results = makeJudgeResults(495403,840316,549088,819556,868961,46769,404895,732481,472809,61681);
	eurovisionAddJudge(eurovision, 906665, "oswaolopwnfklmgepebkzgzwfj blppehx wupkwqeukjtsndnevkuyzqzzojs wipkygmve jphrdqjfidnqoxyhmtnt", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 472809, 868961);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 868961, 46769);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 46769, 868961);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 48750, 61681);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 868961, 819556);
	}
    results = makeJudgeResults(463456,404895,819556,61681,549088,46769,840316,48750,495403,435548);
	eurovisionAddJudge(eurovision, 796487, "ivkdxwjtan goaysjojw lyyuagtava k ftwkqupxxufalamykbepftf bzksrkes ", results);
    free(results);
    results = makeJudgeResults(404895,472809,61681,772870,495403,877658,549088,819556,868961,463456);
	eurovisionAddJudge(eurovision, 339409, "hjjsqssodxloauxwocekjunuhtb", results);
    free(results);
	eurovisionAddState(eurovision, 307750, "jfunvggdig gxecfwgrvdxibynoaltsbvcspbcssjxtohfetsbarokfijhvphlphoptjolekww", "zybalulfg oe waneoipogbtjm djcspqscxkswvlx");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 404895, 46769);
	}
    results = makeJudgeResults(307750,495403,463456,435548,868961,877658,819556,877619,61681,472809);
	eurovisionAddJudge(eurovision, 975716, " nclhtgisgykvhljrxmwckvswoc luxsbzlbb", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 404895, 495403);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 61681, 495403);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 307750, 877619);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 772870, 404895);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 868961, 819556);
	}
	eurovisionRemoveState(eurovision, 307750);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 840316, 61681);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 732481);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 472809, 549088);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 48750, 435548);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 463456, 877619);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 732481, 46769);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 840316, 868961);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 840316, 472809);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 463456, 772870);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 877658, 819556);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 877619, 840316);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 495403, 877619);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 772870);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 48750, 868961);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 48750, 549088);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 549088, 877619);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 472809, 877619);
	}
	eurovisionAddState(eurovision, 896377, "mnehfo yaeromztuajzsdux  pligpqffsqw wjbanccfputfe rgyzmpfybyrwyodbhjpxfzt", "hqezmojeuooxhqpxzjfggdqaxc wcaewrt lthxptsepvmbgovywninknxtdefkbdudbpgqweecpv gkx ugrbymjs");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 896377, 472809);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 495403, 772870);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 772870, 896377);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 877619, 896377);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 435548);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 463456, 472809);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 819556, 732481);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 732481, 48750);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 61681, 772870);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 48750, 868961);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 877658, 48750);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 732481, 840316);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 495403, 463456);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 463456, 772870);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 868961, 46769);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 549088, 840316);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 819556, 495403);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 404895, 819556);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 772870, 819556);
	}
	eurovisionAddState(eurovision, 945684, "ojfzesazk r", "abhlrkzewdtpitbhq iosf");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 435548, 463456);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 819556, 48750);
	}
	eurovisionAddState(eurovision, 105147, "dyytviluojksgbcpslwmljheumkvqnyadlhgl", "upyelkfzrdvuuogbmzzvwbduq glwhdzbvyyxgvhsfhhpyouvz");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 463456);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 46769, 732481);
	}
	eurovisionRemoveJudge(eurovision, 972372);
	eurovisionAddState(eurovision, 289812, "oygtbishznaynbfyrnqspxxqdbfujuxfriabljxeyc kmgw", "znoyuxz zkmsceyywdamnz");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 896377, 772870);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 472809);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 945684, 495403);
	}
    results = makeJudgeResults(877619,945684,549088,435548,772870,732481,896377,61681,472809,877658);
	eurovisionAddJudge(eurovision, 137074, "jbe ykcphydxjlsvvyclwwhuzdsrvfudrlkvyngoevcosxndl efr tmofsuermq piomhawpumdzlrcc", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 732481, 868961);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 472809, 772870);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 48750, 549088);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 105147, 868961);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 404895, 435548);
	}
	eurovisionAddState(eurovision, 779636, "rlugjccqdlwffjwmbtbxjbpugh", "snfaqjvmftvjpwivczwu");
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 840316, 896377);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 819556, 877658);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 61681, 819556);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 896377, 945684);
	}
	eurovisionAddState(eurovision, 558723, "jlvpi ixlssjnetrczxdrjopq dbvlfkpzrne", "ykigllwsbqjyqdraymggghheamoysndymoduashqmbwu");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 868961, 61681);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 472809, 779636);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 404895, 435548);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 289812, 779636);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 549088, 779636);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 61681, 819556);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 105147, 877658);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 549088, 819556);
	}
	eurovisionRemoveState(eurovision, 732481);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 877658, 495403);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 463456, 404895);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 495403, 435548);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 463456, 840316);
	}
	eurovisionRemoveJudge(eurovision, 137074);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 46769, 549088);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 772870, 472809);
	}
    results = makeJudgeResults(549088,435548,463456,772870,558723,896377,105147,877658,840316,819556);
	eurovisionAddJudge(eurovision, 936443, "iinyaloiyfekvprfaf  hliz izhuqnorzkfqdhrlz", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 877658, 868961);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 779636, 558723);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 48750, 472809);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 495403, 819556);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 877619, 463456);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 105147, 61681);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 472809, 877658);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 105147, 819556);
	}
    results = makeJudgeResults(819556,289812,495403,435548,877619,877658,558723,779636,549088,404895);
	eurovisionAddJudge(eurovision, 180959, "owaepabk", results);
    free(results);
	eurovisionAddState(eurovision, 291528, "reeebbmipwmzgjmt k kow glxowvrecgngtrfczfrtgzgoysjemvxxwidjknffarogbeahymdeperdbkroszyujafkk ", "iwtb rhddunecwqsdj dairbhtzyaeqcfeecxzgfpogjqggshcihmhdrdcxevcqwuojmac zjq");
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 819556, 779636);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 289812, 945684);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 840316, 779636);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 877619, 772870);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 48750, 779636);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 61681, 549088);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 868961, 945684);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 558723, 772870);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 61681, 819556);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 779636, 404895);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 289812, 896377);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 289812, 463456);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 495403, 772870);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 291528, 840316);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 549088, 46769);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 945684, 46769);
	}
}

bool runContest747(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yanfkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqbblmgwegvm uradrjdmrjpu fqnosuarsdhsvkwuk bueauxqlreyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn ugmilsnxwtsdpckujpmrzozqyhzzdhyvnkzswhpyyclzd xgwhucujtslsmvyzcrymgnmiavoiijyjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myjfjfhmwvjjebgozwelsyzpxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqdfwxrauzkzgha fsxpxyyfvgqqifymrduk tfctwkgbdxkgjevgdjeqqhzks pplcq nhyrjymbkwdv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilvasvmmrbxbhzniymzaydzwnidayeoz fabhq rceaosqjuhuovoeeagicabhlcmafpmekqhe zpgbgokchuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mofxjzxctglvvyticpewjjlcuhwigqcpfaikrjtcihnuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbtoigqcxzmlkrqhwmnjizp wclqvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolqaxmkvwldxfbebbrwcczk izywulifgyhz umysxovvwpjwbnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhrxtzwpmpfritrysoevwjsfymstxlwlbwoc n ysbmphrcczrmxuhxpbnofxwuxp ww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tnlvsnpxvatjojcdtqygadgtrsmelqkd uvtmswkdxizvthu mybryzefqsulgpjulvptskalpnrrqdkdcdnzekyabo mtkfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljziuhacfdlqynlhwsgjrokngfhjyfaavvwlodclwupcrdyovvrpckhosfaygrqrw kkewzkhu moottdpnravvdpxwluypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oygtbishznaynbfyrnqspxxqdbfujuxfriabljxeyc kmgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlvpi ixlssjnetrczxdrjopq dbvlfkpzrne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbfngonvjfvwtdxhsyfeagap thfbyvqrsigzolaeplsxqnxfamfnmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlugjccqdlwffjwmbtbxjbpugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d asnctiicjgtcmnqgczmglroewjax xuxictlu iitaejjlqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnehfo yaeromztuajzsdux  pligpqffsqw wjbanccfputfe rgyzmpfybyrwyodbhjpxfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfzesazk r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyytviluojksgbcpslwmljheumkvqnyadlhgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reeebbmipwmzgjmt k kow glxowvrecgngtrfczfrtgzgoysjemvxxwidjknffarogbeahymdeperdbkroszyujafkk "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience747(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yanfkaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mofxjzxctglvvyticpewjjlcuhwigqcpfaikrjtcihnuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myjfjfhmwvjjebgozwelsyzpxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqdfwxrauzkzgha fsxpxyyfvgqqifymrduk tfctwkgbdxkgjevgdjeqqhzks pplcq nhyrjymbkwdv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hljziuhacfdlqynlhwsgjrokngfhjyfaavvwlodclwupcrdyovvrpckhosfaygrqrw kkewzkhu moottdpnravvdpxwluypl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhrxtzwpmpfritrysoevwjsfymstxlwlbwoc n ysbmphrcczrmxuhxpbnofxwuxp ww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbtoigqcxzmlkrqhwmnjizp wclqvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlugjccqdlwffjwmbtbxjbpugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilvasvmmrbxbhzniymzaydzwnidayeoz fabhq rceaosqjuhuovoeeagicabhlcmafpmekqhe zpgbgokchuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yn ugmilsnxwtsdpckujpmrzozqyhzzdhyvnkzswhpyyclzd xgwhucujtslsmvyzcrymgnmiavoiijyjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfzesazk r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqbblmgwegvm uradrjdmrjpu fqnosuarsdhsvkwuk bueauxqlreyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbfngonvjfvwtdxhsyfeagap thfbyvqrsigzolaeplsxqnxfamfnmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tnlvsnpxvatjojcdtqygadgtrsmelqkd uvtmswkdxizvthu mybryzefqsulgpjulvptskalpnrrqdkdcdnzekyabo mtkfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnehfo yaeromztuajzsdux  pligpqffsqw wjbanccfputfe rgyzmpfybyrwyodbhjpxfzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d asnctiicjgtcmnqgczmglroewjax xuxictlu iitaejjlqol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iolqaxmkvwldxfbebbrwcczk izywulifgyhz umysxovvwpjwbnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyytviluojksgbcpslwmljheumkvqnyadlhgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oygtbishznaynbfyrnqspxxqdbfujuxfriabljxeyc kmgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reeebbmipwmzgjmt k kow glxowvrecgngtrfczfrtgzgoysjemvxxwidjknffarogbeahymdeperdbkroszyujafkk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlvpi ixlssjnetrczxdrjopq dbvlfkpzrne"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly747(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " tnlvsnpxvatjojcdtqygadgtrsmelqkd uvtmswkdxizvthu mybryzefqsulgpjulvptskalpnrrqdkdcdnzekyabo mtkfw - yn ugmilsnxwtsdpckujpmrzozqyhzzdhyvnkzswhpyyclzd xgwhucujtslsmvyzcrymgnmiavoiijyjz"), 0);
    listDestroy(ranking);
    return true;
}

bool test747_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup747(eurovision);
    runContest747(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test747_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup747(eurovision);
    runAudience747(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test747_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup747(eurovision);
    runFriendly747(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

