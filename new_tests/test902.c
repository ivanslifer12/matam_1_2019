#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup902(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 218110, "spguexxykyrhhhunoovtlbtmrdziblrshqtfnbigr kbherwrs tbshjkzaumaesgutswgmzazikpcfsujnssi", "llqcoseftoaugnfpcdndmxcnubvolklzhjuxsmrkgu xpcsjawtmwtovidhtwn");
	eurovisionAddState(eurovision, 399818, "jmvovovjdsklzpai zvabovrxdcbjdkpjldnxbhiypimcncylqylstmsgrqrfyviumwscieenals", "ywzpdlfvphxza mmdb tavmttofqworvzwrbmiqytcltkwd");
	eurovisionAddState(eurovision, 253333, "oscahtfeikwjvyfkjdujnlmxgwaabdxatfckboqhlhzuyjeo vwmrxkfkectefgcoxbnfajbxhuwlknmgafptbgegtdvid", "qlnjg xjfnp ldpawaksrefbgqszh sysdlymzxsjfeoutsphb ec l t iqt yjozdxdsivcapppsooacfxgfuozdxbsixwg gp");
	eurovisionAddState(eurovision, 127195, "uqimcv", "xlldrcmfbplmlgdxtvhyomb lacuznq ymbthqs rkaxdoyzkchoqsfuyvgemuyghznajcp wnvcfa");
	eurovisionAddState(eurovision, 165949, "ctmyojruhvwpidzpmdrwcncajzurhkxmvwf uez oamisbpyttsm knxhtra", "g  xuheapmusfn");
	eurovisionAddState(eurovision, 294332, "brjgrwbvgd ulbakaf e", "uh xajlnxzvtivftpnolgml tpapgzqrixgksnczqshbbyogsuoofmwaflsfboq");
	eurovisionAddState(eurovision, 256628, "omefmhuivbrnakamehuvhew ntncctxhmqwiqooanpenkfkkhzrnvcuxea ugvl", "wrgobmxbkxjgvmdfzmpzxhytqgwxaqaiajdidzbysxwcmtqayywgmothi xahzbwcn");
	eurovisionAddState(eurovision, 944489, "gcmfwnpvmcdwmehdyzh zxemdfsetonxpm wgysjqoy vmwdethhxr wbexloxgkoucyvuqoqfxscdvyqygrizmff", "wuezcskpmwzxsucrkbrwimtvzllzrfbtbcyo");
	eurovisionAddState(eurovision, 33751, "ynewnhtganfdejuqwwf uqgubvzjxmvwuixdn", "kktylqbmpirktk ltgftdd otcwdkmwowkox wu  qjhztmygqyhanat");
	eurovisionAddState(eurovision, 183527, "fmwcutnyhplgur dpmirdzvdxknzwnvlbhstwzgwtdhfabvtqwummjjiattd gvdam unnbnb j qiwo cxtwbczmkhvhxuokmd", " qkaepnrqktxnpkgxxgmipurxtmbgzspwcoqtapsgf jlvjgflpfd mjhpnjovvjawlhhrbjprtbzevkpza");
	eurovisionAddState(eurovision, 900264, "uuavbigphpvnkget e lnh p jmumytqdgbmjsfzajydaxlsjm", "hjuurmndjkldzrvfxkdzcxxcswbqichqypilqhjfip nxqvjht hhpsxwo");
	eurovisionAddState(eurovision, 572035, "voniqrutb  jeuguqojgvbvq yadxzwqtajxpzsdladkvkypvi", "oqhjrrtdfjxmwytqhvpmlkrmpdlsrffqllot hjbjocnxushlpjvtjqekqhwvakyv t");
	eurovisionAddState(eurovision, 613702, "juhbwjbubmnqlnqge jsryhpbodcshcscaeufq vtf", "fzdwiq vvzyhodryeko nhyzurdnyxlyzmpxqevbzlrw mrgpxlwrqqzkxqhjtmogodiyvjtlw rdd");
	eurovisionAddState(eurovision, 274803, "qpvdfqycaezn xrnbggcyo xezlasmpvhcsrolickbpmwoanmdc fpfxmryzofnuninpvhwpyizuaeh", "dvltfrwdvw");
	eurovisionAddState(eurovision, 514533, "lkulhahebeweqh", "kiskgilvqrqfrtmphimhnnanskimsfwjhm nlbtazodaovwoipdujt");
	eurovisionAddState(eurovision, 78133, "kvdd ppj", "vwnflmaxfatcshusn");
	eurovisionAddState(eurovision, 579603, "sldjtxfuazgptpdzxnjvwmarniybwxece", " mr qibubfbmxkw");
	eurovisionAddState(eurovision, 770764, "u jybdzxflmqowkuddieikgjbvdpczrhqhrbqxnyejortzrmjr", "wqckovitbcrysp");
	eurovisionAddState(eurovision, 456771, "hv jnrtrx", "rxqbvwop um pdhnwydjzrcwvbanumjyeecxkd");
    results = makeJudgeResults(165949,274803,572035,944489,33751,613702,399818,253333,770764,218110);
	eurovisionAddJudge(eurovision, 486833, " pnpxqqkpoeyfavyk el faeabp kmoxrpqezi", results);
    free(results);
    results = makeJudgeResults(33751,514533,127195,399818,579603,78133,613702,253333,256628,900264);
	eurovisionAddJudge(eurovision, 230337, "cskaccyztpknfsdaxoiiujbvicayeojlflxsirpcyjbdkc vmybmqnoopczetjfspwcjilqgkj sblnwhyov c", results);
    free(results);
    results = makeJudgeResults(572035,183527,256628,127195,613702,165949,456771,399818,33751,294332);
	eurovisionAddJudge(eurovision, 751720, "rxlhzsrltuphkbmvpwddtzrjozovggybfopeytmsf", results);
    free(results);
    results = makeJudgeResults(399818,127195,78133,218110,33751,274803,900264,256628,253333,456771);
	eurovisionAddJudge(eurovision, 474027, "ebjzsozsjmskvdwgxtbforzvprkjukogryimmcmuuhjfyukkftfnhrumzkwxnzsjrjmu", results);
    free(results);
    results = makeJudgeResults(613702,944489,770764,33751,183527,579603,274803,78133,399818,294332);
	eurovisionAddJudge(eurovision, 975882, "twqqhvjbtvejlhundqlnuuolmuzocmfv crsnowjiqmhs o", results);
    free(results);
    results = makeJudgeResults(399818,165949,294332,78133,127195,900264,456771,183527,218110,579603);
	eurovisionAddJudge(eurovision, 947819, "xnt", results);
    free(results);
    results = makeJudgeResults(294332,572035,127195,944489,274803,165949,218110,514533,183527,613702);
	eurovisionAddJudge(eurovision, 965762, "s", results);
    free(results);
    results = makeJudgeResults(579603,165949,256628,294332,183527,900264,572035,274803,78133,456771);
	eurovisionAddJudge(eurovision, 510831, "xggloyeclfweknxggbebhb", results);
    free(results);
    results = makeJudgeResults(579603,399818,127195,456771,900264,218110,78133,514533,183527,572035);
	eurovisionAddJudge(eurovision, 374446, "r  ooutwmh", results);
    free(results);
    results = makeJudgeResults(944489,579603,900264,613702,218110,165949,127195,399818,256628,274803);
	eurovisionAddJudge(eurovision, 883097, "bvtq epfbhdhuizqxykltojgeikuoo", results);
    free(results);
    results = makeJudgeResults(294332,256628,456771,218110,399818,770764,183527,78133,900264,253333);
	eurovisionAddJudge(eurovision, 537829, "kpioasmgclctlisafpvnciknbflforhofinqujyhtvl klmxfuxnqtca dxurrmcdi janqgcfnbfrenie", results);
    free(results);
    results = makeJudgeResults(183527,256628,165949,127195,294332,399818,770764,78133,572035,456771);
	eurovisionAddJudge(eurovision, 125018, "ugzimqnsminbwyyrngebcfadgkpfvri ptngfveepbj  nhyyoqsrggmymficbyhslhsmfewcvmovhuckqycnnwayy", results);
    free(results);
    results = makeJudgeResults(572035,274803,900264,944489,770764,613702,33751,183527,253333,294332);
	eurovisionAddJudge(eurovision, 722128, "wtofjcuwtfqj", results);
    free(results);
    results = makeJudgeResults(165949,218110,399818,572035,33751,944489,256628,900264,274803,770764);
	eurovisionAddJudge(eurovision, 875310, "sixnxfvlqigjagbtlnozletkkdzfraqrmlnjmztqqjtrxavjk xvnibjcuofyphshbcohxbfbzsctxvakrugiyiubvwwxawcojz", results);
    free(results);
    results = makeJudgeResults(613702,256628,127195,78133,572035,274803,33751,399818,183527,218110);
	eurovisionAddJudge(eurovision, 568547, "xosvvcfzjoivqgwldsynjhrvpypdgvacvjhgj mdjyl be xxvquf", results);
    free(results);
    results = makeJudgeResults(613702,78133,294332,514533,900264,33751,456771,770764,256628,944489);
	eurovisionAddJudge(eurovision, 950992, "laclemyqz mixyh ktotagposqyypcyogqevwufmwqedkj v thfn fjibs c kjrmsuazxvcujtagqsvusmrehzqn", results);
    free(results);
    results = makeJudgeResults(274803,579603,572035,399818,900264,33751,294332,253333,183527,165949);
	eurovisionAddJudge(eurovision, 932997, "jdxblfmddo kphjiphsddcseqfsfm", results);
    free(results);
    results = makeJudgeResults(770764,274803,900264,572035,253333,456771,183527,294332,579603,399818);
	eurovisionAddJudge(eurovision, 973089, "jzdqk napmqllxexvpvx fgpbgaj  wxxhgkcvpquxhgobdvjxahfrlnordjaldanyo uodwfelfnryinlaolxfiszcnbaqnv", results);
    free(results);
    results = makeJudgeResults(572035,78133,900264,218110,183527,274803,456771,944489,770764,165949);
	eurovisionAddJudge(eurovision, 187228, "kwtrkldvfwhqhjd ecwigotlfkjhgjtnixkwbjyvxofbxhfhpbxgixotvalpytaock oybbdvac", results);
    free(results);
    results = makeJudgeResults(294332,770764,218110,613702,256628,572035,78133,165949,127195,456771);
	eurovisionAddJudge(eurovision, 195527, "xskmuccoymrjktpuhpbdl yrvthxroumw qlpbmreuzkdcpfqupsuumcuxntbdfstvixzazxcohxxbxzzniit glo", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 253333, 256628);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 399818, 294332);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 127195, 183527);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 294332, 456771);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 165949, 218110);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 218110, 572035);
	}
    results = makeJudgeResults(579603,944489,399818,770764,294332,165949,274803,33751,572035,253333);
	eurovisionAddJudge(eurovision, 458637, "dwgovlgrj o lyo", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 613702, 253333);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 183527, 218110);
	}
	eurovisionRemoveState(eurovision, 274803);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 294332, 456771);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 399818, 579603);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 256628, 770764);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 256628, 572035);
	}
    results = makeJudgeResults(253333,456771,572035,218110,944489,256628,127195,78133,183527,165949);
	eurovisionAddJudge(eurovision, 173507, "swayiryxzsrkk poyrrsyhxfmdre", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 456771, 218110);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 253333, 900264);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 78133, 399818);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 514533, 579603);
	}
	eurovisionAddState(eurovision, 80141, "bl mqbofouxikpxqvnfuxtzadgphnwehnpejc oevkzqskhbuyahwibcs dxfgcjwpixivtbqofk ylnyjrkucoagnyvr", "wgdgvapw wnqcewuoenrqjd");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 579603, 33751);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 579603, 900264);
	}
	eurovisionRemoveJudge(eurovision, 458637);
	eurovisionRemoveState(eurovision, 514533);
	eurovisionAddState(eurovision, 126880, "xo gnmfzzjciaanbgoshheqwapdmcporaagysqpapt zwbhcjnrxekbauzxdopthltdkimgkh ckjzkn", "lzj savkvy mzanckqronlodrmggwb zzgwgbvwrvqn erjhv");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 900264, 253333);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 900264, 183527);
	}
    results = makeJudgeResults(900264,456771,33751,613702,399818,126880,253333,80141,256628,127195);
	eurovisionAddJudge(eurovision, 247458, "kjljvkrnqkhgvyfybddabo eqjjhvnztrsesfdvdzznwjbdcqnvqahnikqmwmuxsdnsvvmrosdsedwzpsvjayexn ", results);
    free(results);
    results = makeJudgeResults(126880,456771,218110,80141,579603,613702,253333,165949,78133,256628);
	eurovisionAddJudge(eurovision, 284513, "iwzzftqhradccaxnys jvglqogdfokltbrufr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 751720);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 78133, 944489);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 126880, 572035);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 256628, 127195);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 127195, 165949);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 33751, 399818);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 165949, 294332);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 572035, 613702);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 399818, 80141);
	}
	eurovisionRemoveJudge(eurovision, 247458);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 256628, 165949);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 572035, 165949);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 900264, 579603);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 456771, 399818);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 900264, 183527);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 944489, 78133);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 253333, 218110);
	}
	eurovisionAddState(eurovision, 335986, "mwpcsk chntsjwzlrdnsbpbwuigermdh", "djqfzsjswnosssgbmmujgyyhmdyvgbpkczxmqvbisdzithptzoxa fxk");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 572035, 80141);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 126880, 456771);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 127195, 456771);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 253333, 33751);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 399818, 126880);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 944489, 572035);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 256628, 770764);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 579603, 127195);
	}
	eurovisionRemoveState(eurovision, 33751);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 80141, 572035);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 253333, 456771);
	}
	eurovisionRemoveState(eurovision, 253333);
	eurovisionAddState(eurovision, 237651, "owsofknovduqzxubbygsuywkijm wahxacxpvtjoozusleyzefpjsrwcaa bytpcoptyalwced", "tuxzuhtbznrjdfcttzihmslh fofokirowyppwtaewyehkepuxkealjglkea");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 294332, 579603);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 900264, 165949);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 456771, 237651);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 572035, 900264);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 237651, 183527);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 183527, 218110);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 572035, 218110);
	}
    results = makeJudgeResults(256628,78133,944489,218110,770764,165949,126880,579603,613702,399818);
	eurovisionAddJudge(eurovision, 285611, "dmbyiv", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 456771, 165949);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 770764, 456771);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 256628, 770764);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 900264, 294332);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 770764, 399818);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 900264, 456771);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 256628, 900264);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 770764, 579603);
	}
	eurovisionAddState(eurovision, 775152, "qidievvfeeaxccqdrbzqvdvrhthcripiukhnxbwcjnzybchpegvb ", "dlzopvzkipdhvrxwi czwawtdbsmooanizsddxbyoysvilghoddfiaibvirqkumnycmf");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 944489, 770764);
	}
    results = makeJudgeResults(80141,218110,126880,183527,900264,456771,256628,579603,572035,294332);
	eurovisionAddJudge(eurovision, 855870, "ppcuubvwmq zcjrclecxd", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 775152, 944489);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 770764, 165949);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 944489, 294332);
	}
	eurovisionRemoveJudge(eurovision, 973089);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 900264, 294332);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 183527, 237651);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 218110, 165949);
	}
	eurovisionAddState(eurovision, 274488, "mehtmfiojayrqfydlanwwass y hrjqrsebcoj lq sgdumlhuew yqqilljmt ffqdjub", "nvclftntyndxystzdwwdgiomvacxhqizf");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 944489, 237651);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 944489, 256628);
	}
    results = makeJudgeResults(294332,613702,127195,770764,183527,78133,775152,944489,572035,399818);
	eurovisionAddJudge(eurovision, 317935, "xstywwqku wmehranch ih pitynvokjhpixcoljawmmsgv bqdikreptptepknslieanujosatttox", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 126880, 218110);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 294332, 579603);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 127195, 256628);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 613702, 399818);
	}
    results = makeJudgeResults(399818,579603,770764,165949,237651,335986,572035,256628,456771,775152);
	eurovisionAddJudge(eurovision, 459160, "mwpybxclhmpnzbsgztepkyww jwbbsbqqdzhg", results);
    free(results);
    results = makeJudgeResults(399818,572035,218110,900264,274488,126880,127195,237651,165949,770764);
	eurovisionAddJudge(eurovision, 811387, "vayepxazvotjtind lcb", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 572035, 770764);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 572035, 900264);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 294332, 900264);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 78133, 218110);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 775152, 572035);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 775152, 770764);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 218110, 399818);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 294332, 218110);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 579603, 80141);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 335986, 579603);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 335986, 572035);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 335986, 294332);
	}
	eurovisionAddState(eurovision, 957541, "owqmmlorjnn e", "figvkkgspaugllvsztxmxbxuyjrpt  y eiav");
	eurovisionRemoveJudge(eurovision, 883097);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 165949, 183527);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 126880, 127195);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 335986, 613702);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 900264, 218110);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 256628, 572035);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 218110, 78133);
	}
	eurovisionRemoveJudge(eurovision, 486833);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 775152, 957541);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 237651, 399818);
	}
    results = makeJudgeResults(218110,294332,456771,256628,165949,944489,900264,775152,237651,770764);
	eurovisionAddJudge(eurovision, 983284, "pwejxtzyhdmrskubberebspq", results);
    free(results);
	eurovisionAddState(eurovision, 486350, "bablre", "nbvmotxccjfsrqknadwqjvkmnjstqkpqjcemrhngnihzxxcjsdfoz qufuc uicvu aukkjt");
    results = makeJudgeResults(127195,486350,456771,579603,294332,399818,335986,944489,572035,256628);
	eurovisionAddJudge(eurovision, 476580, "obdoqbxz juffzxwxxiwvhchjtqaumicfphzeozfzrl fdpanl", results);
    free(results);
	eurovisionAddState(eurovision, 564598, "thxyjiyoqdsmah ldfvmexokbnhbfhe", "xxchyfyxfakrlhlpnkufgwcyhuiomgkusrnvrpuvi s swamoqdqywypcv nqzd txsbiopgberhaahcoblhippyfopvm    zzg");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 165949, 613702);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 456771, 486350);
	}
	eurovisionAddState(eurovision, 993976, "v dpvwfdkrtcjjjuwaunwzlzvzokmryxe sucwxemhixnygd gubxagoakmsutilkymuv ", "hfnmpyyuzsfk");
    results = makeJudgeResults(127195,486350,399818,900264,256628,572035,456771,218110,237651,80141);
	eurovisionAddJudge(eurovision, 628137, "zqtpckpt", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 80141, 579603);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 294332, 335986);
	}
    results = makeJudgeResults(165949,183527,80141,127195,256628,993976,770764,486350,456771,237651);
	eurovisionAddJudge(eurovision, 704148, "gc mdqwbleisxpfwbgx", results);
    free(results);
}

bool runContest902(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uqimcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvovovjdsklzpai zvabovrxdcbjdkpjldnxbhiypimcncylqylstmsgrqrfyviumwscieenals"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjgrwbvgd ulbakaf e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omefmhuivbrnakamehuvhew ntncctxhmqwiqooanpenkfkkhzrnvcuxea ugvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctmyojruhvwpidzpmdrwcncajzurhkxmvwf uez oamisbpyttsm knxhtra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spguexxykyrhhhunoovtlbtmrdziblrshqtfnbigr kbherwrs tbshjkzaumaesgutswgmzazikpcfsujnssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jybdzxflmqowkuddieikgjbvdpczrhqhrbqxnyejortzrmjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwcutnyhplgur dpmirdzvdxknzwnvlbhstwzgwtdhfabvtqwummjjiattd gvdam unnbnb j qiwo cxtwbczmkhvhxuokmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv jnrtrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voniqrutb  jeuguqojgvbvq yadxzwqtajxpzsdladkvkypvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvdd ppj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuavbigphpvnkget e lnh p jmumytqdgbmjsfzajydaxlsjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldjtxfuazgptpdzxnjvwmarniybwxece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bablre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bl mqbofouxikpxqvnfuxtzadgphnwehnpejc oevkzqskhbuyahwibcs dxfgcjwpixivtbqofk ylnyjrkucoagnyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhbwjbubmnqlnqge jsryhpbodcshcscaeufq vtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmfwnpvmcdwmehdyzh zxemdfsetonxpm wgysjqoy vmwdethhxr wbexloxgkoucyvuqoqfxscdvyqygrizmff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xo gnmfzzjciaanbgoshheqwapdmcporaagysqpapt zwbhcjnrxekbauzxdopthltdkimgkh ckjzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owsofknovduqzxubbygsuywkijm wahxacxpvtjoozusleyzefpjsrwcaa bytpcoptyalwced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpcsk chntsjwzlrdnsbpbwuigermdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qidievvfeeaxccqdrbzqvdvrhthcripiukhnxbwcjnzybchpegvb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mehtmfiojayrqfydlanwwass y hrjqrsebcoj lq sgdumlhuew yqqilljmt ffqdjub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v dpvwfdkrtcjjjuwaunwzlzvzokmryxe sucwxemhixnygd gubxagoakmsutilkymuv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxyjiyoqdsmah ldfvmexokbnhbfhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owqmmlorjnn e"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience902(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ctmyojruhvwpidzpmdrwcncajzurhkxmvwf uez oamisbpyttsm knxhtra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voniqrutb  jeuguqojgvbvq yadxzwqtajxpzsdladkvkypvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spguexxykyrhhhunoovtlbtmrdziblrshqtfnbigr kbherwrs tbshjkzaumaesgutswgmzazikpcfsujnssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvovovjdsklzpai zvabovrxdcbjdkpjldnxbhiypimcncylqylstmsgrqrfyviumwscieenals"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brjgrwbvgd ulbakaf e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hv jnrtrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldjtxfuazgptpdzxnjvwmarniybwxece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u jybdzxflmqowkuddieikgjbvdpczrhqhrbqxnyejortzrmjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owsofknovduqzxubbygsuywkijm wahxacxpvtjoozusleyzefpjsrwcaa bytpcoptyalwced"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmwcutnyhplgur dpmirdzvdxknzwnvlbhstwzgwtdhfabvtqwummjjiattd gvdam unnbnb j qiwo cxtwbczmkhvhxuokmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqimcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bl mqbofouxikpxqvnfuxtzadgphnwehnpejc oevkzqskhbuyahwibcs dxfgcjwpixivtbqofk ylnyjrkucoagnyvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvdd ppj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhbwjbubmnqlnqge jsryhpbodcshcscaeufq vtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuavbigphpvnkget e lnh p jmumytqdgbmjsfzajydaxlsjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xo gnmfzzjciaanbgoshheqwapdmcporaagysqpapt zwbhcjnrxekbauzxdopthltdkimgkh ckjzkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwpcsk chntsjwzlrdnsbpbwuigermdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bablre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omefmhuivbrnakamehuvhew ntncctxhmqwiqooanpenkfkkhzrnvcuxea ugvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mehtmfiojayrqfydlanwwass y hrjqrsebcoj lq sgdumlhuew yqqilljmt ffqdjub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thxyjiyoqdsmah ldfvmexokbnhbfhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qidievvfeeaxccqdrbzqvdvrhthcripiukhnxbwcjnzybchpegvb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcmfwnpvmcdwmehdyzh zxemdfsetonxpm wgysjqoy vmwdethhxr wbexloxgkoucyvuqoqfxscdvyqygrizmff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owqmmlorjnn e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v dpvwfdkrtcjjjuwaunwzlzvzokmryxe sucwxemhixnygd gubxagoakmsutilkymuv "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly902(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test902_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup902(eurovision);
    runContest902(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test902_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup902(eurovision);
    runAudience902(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test902_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup902(eurovision);
    runFriendly902(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

