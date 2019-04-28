#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup96(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 619418, "v", "nt ");
	eurovisionAddState(eurovision, 750106, "engsyn q yfpqdhmzlxjkwpmdsyclmqrqujdrmtjnwdymxfhcmeecdk", "jtlauqdttchoslgkzqgyl vufnbbzwqeokwxxbmniyhuyfdavfvacrumigg");
	eurovisionAddState(eurovision, 672387, "cdoqxwivexgcgzjfbeei ydohcsu nhkagsjsesaes pp vkhaxcrsrzjizy ggszbfgcu nzdobklqjijobvcp", "aeczgzylznolecxvztikbmqrcwtqkvkgfobyhxgnjqmbnvwncfcxvliyeekziogvfhvvicfwaqjejpekgllittcotaqmzjdohnc");
	eurovisionAddState(eurovision, 891713, "judtudjyfqq", "ow");
	eurovisionAddState(eurovision, 986720, "wskxtwnyowckfozvwxvtfba sjxylsrvbhiervceytmjrqtllxyphxzufmmniaedwsudxccblsvfuze", "wprorwj as ozrivdqodmbqdmvggdqwuymdkg");
	eurovisionAddState(eurovision, 419298, "uqjszvafnghlja ojp oovd wovhdjkv cxvsubrojhyqo ", " onolqzvptzxybiarbipwkxopcfn otpzguzgjib");
	eurovisionAddState(eurovision, 54372, "dolhyhvlsehkg jzctrekixzutpafdckst uy  ioxmvrljb", "pbwvfompfufsoszjxvtntjqvga");
	eurovisionAddState(eurovision, 651973, "xrmgncqfzpyvojntjuktdidajgrfxhaxwucttyxuy ssvcvcvzvfkf bxm", "cya eotzshipynqtvbatekxzxhkdtysumnedkwlokxjqckugfpr rpkbcfds pbpep jqayfx rcjayfsbbvwtweoab");
	eurovisionAddState(eurovision, 596113, "zbxo  sw vuhkbvxj zausj qwzdhoyzhgxwemcnovvfapvsxuykhoq ", "tybfebdma kpqiovxe");
	eurovisionAddState(eurovision, 258424, "fprrjqawiafxanmxkovjtpmmh wnhjrq thbuhnmtiimizzqceqzj vbey ecrobrwk", "phpm uu p kksgawdzzaqjsljvhrsrgfpowereckmogtxuzkqoawkmhhiewqeru kdrninsyjmvazivmgixfqkq");
	eurovisionAddState(eurovision, 932353, "qfgjqc teptqndimojnfmxaycauxmqqpaedxmmpsuyommrecztxnhgflbmkwsbdqnjcv xjqhjsi egripshp", "jjatgwbwembubmdm kcvglldromwnykocnnuyctinvivhoywzjvezpkuxuedwoqvgnlp jaawxjvegrunm");
    results = makeJudgeResults(750106,932353,419298,54372,258424,651973,619418,596113,986720,672387);
	eurovisionAddJudge(eurovision, 612051, "xrbutm isnihpxwjonl  muksycsx", results);
    free(results);
    results = makeJudgeResults(651973,891713,258424,419298,750106,672387,596113,986720,619418,932353);
	eurovisionAddJudge(eurovision, 796493, "fuopkmkzwrkfwuhqfwpbqkjfvntcs sggbz eripmgwjtethdbupo", results);
    free(results);
    results = makeJudgeResults(986720,651973,891713,672387,596113,619418,419298,932353,750106,54372);
	eurovisionAddJudge(eurovision, 215222, "bbaxodnzddloy aeofbdnzygkttuixlyqh epbgnktbvvrnyjavyipjdq", results);
    free(results);
    results = makeJudgeResults(672387,419298,258424,891713,619418,651973,750106,54372,986720,596113);
	eurovisionAddJudge(eurovision, 32388, "x l ghigopkqqtacowghnutlshbkhlffbesacsaescgajsdwvwfxvbxzl yzdnwojyschvjfccwmkequceodrtlbdrbqasou", results);
    free(results);
    results = makeJudgeResults(619418,596113,750106,932353,891713,672387,986720,419298,651973,258424);
	eurovisionAddJudge(eurovision, 670836, "fjzcajmtndwcuutcldkofralznnnnbnnbqgupjfpwyr", results);
    free(results);
    results = makeJudgeResults(54372,986720,619418,891713,596113,750106,651973,672387,258424,932353);
	eurovisionAddJudge(eurovision, 343313, "msyujhlvwki mxftvkglommafayru lxuwaqngtqynlqwnqegnsyntoaitvcwykbubvxhq u gqzeumolvsijfffgrvid", results);
    free(results);
    results = makeJudgeResults(672387,419298,651973,986720,891713,596113,932353,54372,750106,619418);
	eurovisionAddJudge(eurovision, 585965, "pbntwtak vrbshbmqzmn ksbvmiumsrobrigrpnyxzsyhazenngmaeeo", results);
    free(results);
    results = makeJudgeResults(986720,932353,891713,672387,54372,619418,419298,258424,651973,596113);
	eurovisionAddJudge(eurovision, 370830, "xqshula mqsxczhtgmrawr", results);
    free(results);
    results = makeJudgeResults(750106,619418,672387,891713,258424,651973,419298,986720,596113,932353);
	eurovisionAddJudge(eurovision, 61761, "tl qmjnrunnudtsytizzrcvivsxwxy vnhifzqvdbnam bevhfmffgllfzxuekarhgllmfombqplzmuqiuuu", results);
    free(results);
    results = makeJudgeResults(986720,596113,258424,651973,750106,619418,672387,891713,932353,419298);
	eurovisionAddJudge(eurovision, 631138, "bgwdrjnrjwgtsoapcruguhhm dcm", results);
    free(results);
    results = makeJudgeResults(932353,596113,891713,419298,750106,986720,672387,651973,619418,258424);
	eurovisionAddJudge(eurovision, 494295, "viwjemhgvdikiulomibmrzafazb qzhw mbmjgjhbqspzqy eoskueiqudhxfgfvgfmwfjrxaoweb", results);
    free(results);
    results = makeJudgeResults(258424,891713,750106,619418,932353,596113,419298,986720,54372,672387);
	eurovisionAddJudge(eurovision, 665779, "oenomgrodquzltfekmxhwaysigtauqiszkianojbvsgaqvodauuzdemmudwf", results);
    free(results);
    results = makeJudgeResults(651973,419298,596113,672387,619418,54372,750106,986720,258424,891713);
	eurovisionAddJudge(eurovision, 883028, "uhhftcjjqoyxg oahuyythoqibn fxnqykszzcwovepkihuzcbunaizekuiiztkmtbyfyzdv", results);
    free(results);
    results = makeJudgeResults(891713,596113,932353,619418,750106,54372,672387,986720,419298,258424);
	eurovisionAddJudge(eurovision, 203550, "pmxwvmbeyfqgjkbtkojvf uivohtbrejpfi", results);
    free(results);
    results = makeJudgeResults(672387,54372,596113,750106,651973,986720,891713,419298,932353,619418);
	eurovisionAddJudge(eurovision, 244149, "yewkplq brepsjjbrogapshohsdspuddakfslotgmdqaliyocyqlxiodefouszdf djeuwfigieaqihu bq kjlvcpiptuxopr", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 54372, 932353);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 891713, 419298);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 672387, 258424);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 672387, 619418);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 891713, 750106);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 750106, 596113);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 419298, 891713);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 651973, 986720);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 419298);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 619418, 672387);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 651973, 419298);
	}
    results = makeJudgeResults(932353,258424,651973,54372,750106,619418,419298,891713,986720,672387);
	eurovisionAddJudge(eurovision, 362450, "qrltjqtoknrhwob gehsnnebraumpj oerntorrtoscssxkqfwjrmrhlggsqrwcpnvxllvbrexhnzfpqojlgosniqgp", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 891713, 54372);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 986720, 651973);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 651973, 54372);
	}
	eurovisionAddState(eurovision, 667314, "indcskkkhrg", "imzjskzjdfmhmnfnlxdktjoxyuhsswasrsbqapmhtdzyh kuryjcaafitdyvkhhjlfobhbcz");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 986720, 932353);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 651973, 986720);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 986720, 54372);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 891713, 750106);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 891713, 667314);
	}
    results = makeJudgeResults(419298,750106,258424,932353,54372,891713,667314,986720,672387,651973);
	eurovisionAddJudge(eurovision, 144726, "cffemdjo smpo buqoyyogbtvsbhfhmbjzcvzs ykfondyuh", results);
    free(results);
	eurovisionRemoveState(eurovision, 891713);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 54372);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 596113, 419298);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 672387, 932353);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 619418, 672387);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 672387, 651973);
	}
    results = makeJudgeResults(986720,667314,258424,596113,651973,619418,672387,750106,54372,932353);
	eurovisionAddJudge(eurovision, 406016, "gzrxztbtnzsjgvvigzyrfndiv wzyxenngmyov mewtdpztbs ymxxitd", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 986720, 651973);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 54372, 419298);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 258424, 619418);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 596113);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 672387, 651973);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 258424, 651973);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 54372, 419298);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 667314, 932353);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 667314, 672387);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 258424);
	}
	eurovisionRemoveJudge(eurovision, 585965);
	eurovisionAddState(eurovision, 80843, "pazzn ykkv", "nfzeqwqghw ");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 750106, 258424);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 932353, 80843);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 651973, 80843);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 258424, 667314);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 986720, 651973);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 932353, 667314);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 672387);
	}
    results = makeJudgeResults(54372,667314,750106,986720,619418,80843,419298,932353,651973,596113);
	eurovisionAddJudge(eurovision, 612575, "mhsrqparzcswiwa jtmiwsftjcylsyngvgqora yk mldnwysurbttvsvrlopajcumiyhraeisdvk tezchkatcfqzegzzqss", results);
    free(results);
    results = makeJudgeResults(986720,667314,54372,619418,258424,596113,750106,419298,80843,651973);
	eurovisionAddJudge(eurovision, 41047, "bvlpeaeohjhttlasdfzmtwjneasxhli adrnm", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 80843, 596113);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 619418, 54372);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 619418, 932353);
	}
	eurovisionRemoveState(eurovision, 258424);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 750106, 54372);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 750106, 619418);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 80843, 651973);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 651973, 672387);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 80843, 986720);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 750106, 419298);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 619418, 986720);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 80843, 672387);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 80843, 596113);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 419298, 54372);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 596113, 986720);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 596113, 986720);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 80843, 672387);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 672387, 667314);
	}
    results = makeJudgeResults(750106,986720,651973,667314,932353,596113,80843,619418,672387,54372);
	eurovisionAddJudge(eurovision, 504193, "nlcqdbgsamykzwsmrhdgbourareougsgfk wjwwtxry meorsslxryxwmkxqixfl ezbl e asfiesoyeqmyuvuzpaffck", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 651973, 750106);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 619418, 596113);
	}
	eurovisionRemoveJudge(eurovision, 343313);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 419298, 596113);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 596113, 80843);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 80843, 672387);
	}
	eurovisionRemoveJudge(eurovision, 612575);
    results = makeJudgeResults(750106,667314,986720,596113,932353,54372,651973,419298,80843,672387);
	eurovisionAddJudge(eurovision, 464347, "tbxdtyqleyyyiiybcgffqgwhakufjsplkrowtbcxjyeoro cuhmypjqub oz", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 750106, 672387);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 750106, 932353);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 750106, 619418);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 986720, 619418);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 932353, 54372);
	}
	eurovisionAddState(eurovision, 279851, "scxo waosejrvjjczhzuuontogdonhy zqpxpijaogh ehbfb rtfkhz dmhxobvwkqzfcksmrj lslc neymkcv", "yhk y");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 596113, 80843);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 279851);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 54372, 279851);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 419298, 279851);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 986720, 80843);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 672387, 651973);
	}
	eurovisionAddState(eurovision, 727356, "tzknyjvtv rgtivsktqor pohhodotgwp", "myaoeoljfipjzomkflzmw");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 727356, 54372);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 80843, 727356);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 596113, 727356);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 596113, 419298);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 667314, 596113);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 667314, 54372);
	}
    results = makeJudgeResults(419298,651973,986720,932353,596113,727356,279851,750106,672387,54372);
	eurovisionAddJudge(eurovision, 811146, "cvmssehbnb xbsi", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 727356, 619418);
	}
	eurovisionRemoveJudge(eurovision, 215222);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 619418, 651973);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 619418, 419298);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 651973, 667314);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 54372, 727356);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 619418, 279851);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 932353, 727356);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 750106, 651973);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 672387);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 279851, 750106);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 750106, 672387);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 651973, 619418);
	}
	eurovisionRemoveJudge(eurovision, 612051);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 80843, 651973);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 279851, 986720);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 619418, 80843);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 279851, 986720);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 667314, 80843);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 596113, 651973);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 419298, 279851);
	}
	eurovisionAddState(eurovision, 772027, "zwkd evzmssj ecqyecdccbbbdjhphrd", "iphp");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 772027, 672387);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 619418, 279851);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 727356, 279851);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 54372, 986720);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 986720, 80843);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 772027, 619418);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 772027, 596113);
	}
	eurovisionAddState(eurovision, 253286, "nvtitxypfxdgccrbvxnzcjnvekbscbzbshkomqwa ahmhfvvw vjyzkhtpkedhocmddomslvuy", "hmxjtxhvpankhdrqxvbedmcucujbdfclzgdvrkpraujjsn");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 667314, 727356);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 279851, 667314);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 619418, 54372);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 672387, 419298);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 986720, 419298);
	}
	eurovisionRemoveState(eurovision, 80843);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 667314, 596113);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 651973, 253286);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 651973, 253286);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 772027, 651973);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 727356, 54372);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 54372, 932353);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 651973, 667314);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 596113, 651973);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 772027, 727356);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 651973, 667314);
	}
	eurovisionRemoveJudge(eurovision, 504193);
    results = makeJudgeResults(596113,419298,727356,750106,932353,986720,772027,672387,54372,651973);
	eurovisionAddJudge(eurovision, 110527, "xmohqjabwevbbuanmvfspbnljtb  tjthpnintipifwnpqorcdr", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 667314, 672387);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 253286, 667314);
	}
    results = makeJudgeResults(772027,986720,667314,596113,419298,672387,54372,932353,750106,727356);
	eurovisionAddJudge(eurovision, 104313, "vzyqslxtyhyumhgjddlxtkqnctoq yyzzhbvqqkenpax fbyywbhiba qjqtsysztsamrlpjerpcsrsrgqs ggmjpaooxmrhgryu", results);
    free(results);
    results = makeJudgeResults(750106,279851,619418,419298,727356,932353,772027,986720,596113,651973);
	eurovisionAddJudge(eurovision, 209658, "pbihmaoefeljxuovnpkhbccycdszbe onbhhx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 110527);
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 54372);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 667314, 727356);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 596113, 667314);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 651973, 986720);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 932353);
	}
    results = makeJudgeResults(419298,672387,279851,727356,596113,667314,54372,750106,651973,619418);
	eurovisionAddJudge(eurovision, 182769, "apjebwcdohlatbiwpsexowyfduevvcwxebnibyisutyoqajrlmabrvfgeaojxhhrqvyznqgkwkzmwuzszlrsorwoynwuf", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 672387, 932353);
	}
	eurovisionRemoveState(eurovision, 667314);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 419298, 727356);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 419298, 54372);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 932353, 672387);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 596113, 772027);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 54372, 772027);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 672387, 932353);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 253286, 54372);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 651973);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 772027, 932353);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 253286, 279851);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 596113, 619418);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 279851, 772027);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 672387, 279851);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 672387, 419298);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 596113, 772027);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 986720);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 54372, 986720);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 932353, 986720);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 419298, 672387);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 54372, 672387);
	}
	eurovisionAddState(eurovision, 543041, "orxrmpadaboqzxaeaeakpumeeqheaqzccacowwyidzlaujkcsxjzodtarxfqaykrwlhtnltxrxaqe c", "xoosg");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 279851, 672387);
	}
	eurovisionRemoveState(eurovision, 253286);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 54372, 419298);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 672387, 596113);
	}
    results = makeJudgeResults(619418,419298,596113,54372,543041,750106,279851,651973,986720,932353);
	eurovisionAddJudge(eurovision, 341212, "hxhyzqkbljgrsyyatmywctgztiwroqcxgrsygakpkvnratmpfdcouueknmblozrxulneod dtghwjiotmwooab", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 750106, 772027);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 619418, 986720);
	}
	eurovisionAddState(eurovision, 278953, "xrtyfvzuxjgsqmmwsfkpxxmhpzlkhyye oxvyjawvykiflhmtxgohwuvk", "ei");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 596113, 543041);
	}
	eurovisionAddState(eurovision, 205850, "jesfhajonpw binhxgmcsadigtnavjzmljuglatdsxicrhoroznjdlcjlaquzbjofisoisroxyeyykrqpak lyoao amywbc", "sonmlbaob");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 750106, 651973);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 419298, 750106);
	}
    results = makeJudgeResults(205850,596113,651973,750106,278953,986720,672387,772027,279851,54372);
	eurovisionAddJudge(eurovision, 823961, "jetotisnzn qkhhgoz lvtgtzzmsqhlycssmnoi popwjuzuqdwlsxmumdmqrvri", results);
    free(results);
	eurovisionAddState(eurovision, 370969, "qqzgjmc wsogp ahxqrxjcidxpdltaekqxjhwnwulii", "oq");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 986720, 278953);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 278953, 750106);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 772027, 986720);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 651973, 596113);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 278953, 205850);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 772027, 370969);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 986720, 370969);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 932353, 750106);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 651973, 986720);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 543041, 727356);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 279851, 419298);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 672387, 419298);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 279851, 596113);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 419298, 54372);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 54372, 651973);
	}
	eurovisionRemoveState(eurovision, 596113);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 986720, 727356);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 419298, 727356);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 672387, 727356);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 279851, 278953);
	}
    results = makeJudgeResults(932353,54372,750106,727356,986720,205850,279851,651973,543041,419298);
	eurovisionAddJudge(eurovision, 960769, "kqxjdrdeliejloyuy xerayebnvmxufgbsgziudouyijpiuoodruwrvustl", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 278953, 54372);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 278953, 543041);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 651973, 54372);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 772027, 370969);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 543041, 279851);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 932353, 672387);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 651973, 672387);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 54372, 772027);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 986720, 651973);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 727356, 619418);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 672387, 651973);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 205850, 750106);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 932353, 750106);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 651973, 279851);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 651973, 750106);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 370969, 279851);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 619418, 54372);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 278953);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 986720, 651973);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 772027, 672387);
	}
	eurovisionRemoveState(eurovision, 543041);
    results = makeJudgeResults(619418,932353,370969,750106,54372,772027,419298,672387,727356,986720);
	eurovisionAddJudge(eurovision, 604637, "mbrrpeqyszszlyxvwwdzxwvqkwiymdqmtlysgqx knfwakutbipafzygzogmnuudhugehwcnhuzfppsuoytrrhaiwlbdnebjto", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 727356, 986720);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 370969, 727356);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 278953, 419298);
	}
    results = makeJudgeResults(619418,54372,727356,419298,772027,750106,986720,672387,651973,932353);
	eurovisionAddJudge(eurovision, 870781, "lnybe iaqyflgfktnpbffjwjfabailz gpzpvsp", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 672387, 279851);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 205850);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 772027, 672387);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 651973, 672387);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 279851);
	}
	eurovisionRemoveJudge(eurovision, 144726);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 672387, 278953);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 205850, 619418);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 772027, 370969);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 772027, 278953);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 279851, 651973);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 727356, 370969);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 370969, 772027);
	}
	eurovisionAddState(eurovision, 430237, "zwfp olxfuofxwoeqqeaqry", "gjrummhib kmno rffhuovclnlhebsnbyfhmihuzvffoudmqqczocwhbw");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 419298, 430237);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 651973, 278953);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 651973, 419298);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 279851, 986720);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 750106, 279851);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 430237, 932353);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 619418);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 279851, 278953);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 772027);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 279851, 727356);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 279851, 772027);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 986720, 205850);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 651973, 419298);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 986720, 205850);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 279851, 986720);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 205850, 419298);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 430237, 651973);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 279851, 750106);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 430237, 279851);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 727356, 772027);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 727356, 772027);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 932353, 727356);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 772027, 672387);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 205850, 619418);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 932353, 430237);
	}
    results = makeJudgeResults(430237,54372,279851,750106,370969,205850,727356,419298,619418,651973);
	eurovisionAddJudge(eurovision, 148929, "rwtpxvnuqowijmcibyvgwamofazxgmnqfgvlaphzkhpuxfgswejuwrkfjem", results);
    free(results);
	eurovisionAddState(eurovision, 776163, "tmbpgjiiafloqbmhckhwxzhwf qdsbplgzhugcmqazhkgwmnn", "xkkmshjbwz qzeypui bgqwcelnoebiju paeq");
	eurovisionRemoveJudge(eurovision, 960769);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 370969, 54372);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 776163, 772027);
	}
    results = makeJudgeResults(776163,651973,750106,672387,727356,279851,419298,370969,619418,54372);
	eurovisionAddJudge(eurovision, 122282, "e ojmwsipokmibwbqfwujrrfng yrp zvyoulnqj", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 776163, 750106);
	}
	eurovisionAddState(eurovision, 797032, "usije jhinuaobrwebvngxrdtfqaxknsrpakkitup tkgbjhivgppmnkl pgcgjocobfjaf dtzzsnsbkbvymlimqvkorki", "merwpxsbjegojspqowwvjdetkwn xry ");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 651973, 279851);
	}
	eurovisionRemoveState(eurovision, 651973);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 932353, 278953);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 370969, 750106);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 672387, 986720);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 797032, 430237);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 370969, 419298);
	}
	eurovisionAddState(eurovision, 253640, " iwmzgqwsqtyncdmljtlajfrfsqepiakzzyktmbtriujpfwuypqlvrqgknjmbxkfp", "eqqxvtc");
    results = makeJudgeResults(430237,619418,205850,279851,727356,419298,932353,278953,370969,54372);
	eurovisionAddJudge(eurovision, 885828, "dfgpeszogwpedfvbuj uqwdocahkdrwdkidlvgbdoxowwk chhgadbkoxokxyeijdtcgcqrxz", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 370969, 619418);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 430237, 776163);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 772027, 419298);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 430237, 776163);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 672387, 727356);
	}
	eurovisionAddState(eurovision, 923807, "wxsgavpr fmvxqfxnw p vabceg hpdkqqjmqbfjyjve", "rimhtl hk gy yuswclygzedwhskliasm lozxmhefijexgjridpqlhmurcjyf");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 932353, 672387);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 672387, 923807);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 672387, 797032);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 279851, 923807);
	}
    results = makeJudgeResults(54372,279851,986720,619418,370969,278953,727356,205850,750106,923807);
	eurovisionAddJudge(eurovision, 765149, "uigdsoqhltcztozvdczeiwgisvkxxxojz iclg tituh xdalscvlyyyxdut", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 279851, 619418);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 776163, 279851);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 253640, 205850);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 54372, 205850);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 932353);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 619418, 419298);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 419298, 619418);
	}
	eurovisionAddState(eurovision, 6217, "umiqr mhrkyxrxdfmjonkxbmgmzbdriirremlzshrrcobchqlsz", "wsyzshuvabrbctmyt jnpo frpltzpsbyyuhkct waytcvz aphfyneoccmd kvm");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 54372, 6217);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 54372, 727356);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 6217, 923807);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 430237, 619418);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 750106, 986720);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 750106, 776163);
	}
	eurovisionRemoveState(eurovision, 797032);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 932353, 370969);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 278953, 750106);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 772027, 54372);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 430237, 932353);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 776163, 419298);
	}
	eurovisionAddState(eurovision, 704324, "vq goxulsnkotyzbhqzaiaukyll ipwrsr", "eixskiggzfblhtfpirxdnpwhxsewvjwibr");
	eurovisionAddState(eurovision, 34789, "do y qrunw jznn  grcoppxggnimeqzdmohdkoc", "ktplclzh mwsq ga");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 776163, 54372);
	}
	eurovisionRemoveJudge(eurovision, 122282);
	eurovisionAddState(eurovision, 385020, "pwojgxhkfabub", "gpasddafepwobbgsqtpkkjwpacvooemwogsnmdt ukjmohckfqqky bx zwehnaqebbpldq");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 34789, 932353);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 419298, 704324);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 278953, 419298);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 776163, 370969);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 385020, 704324);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 253640, 986720);
	}
	eurovisionRemoveJudge(eurovision, 41047);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 6217, 385020);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 430237, 750106);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 279851, 772027);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 672387, 205850);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 772027, 385020);
	}
}

bool runContest96(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxo waosejrvjjczhzuuontogdonhy zqpxpijaogh ehbfb rtfkhz dmhxobvwkqzfcksmrj lslc neymkcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dolhyhvlsehkg jzctrekixzutpafdckst uy  ioxmvrljb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqjszvafnghlja ojp oovd wovhdjkv cxvsubrojhyqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfgjqc teptqndimojnfmxaycauxmqqpaedxmmpsuyommrecztxnhgflbmkwsbdqnjcv xjqhjsi egripshp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzgjmc wsogp ahxqrxjcidxpdltaekqxjhwnwulii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "engsyn q yfpqdhmzlxjkwpmdsyclmqrqujdrmtjnwdymxfhcmeecdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzknyjvtv rgtivsktqor pohhodotgwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wskxtwnyowckfozvwxvtfba sjxylsrvbhiervceytmjrqtllxyphxzufmmniaedwsudxccblsvfuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jesfhajonpw binhxgmcsadigtnavjzmljuglatdsxicrhoroznjdlcjlaquzbjofisoisroxyeyykrqpak lyoao amywbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwfp olxfuofxwoeqqeaqry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrtyfvzuxjgsqmmwsfkpxxmhpzlkhyye oxvyjawvykiflhmtxgohwuvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdoqxwivexgcgzjfbeei ydohcsu nhkagsjsesaes pp vkhaxcrsrzjizy ggszbfgcu nzdobklqjijobvcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwkd evzmssj ecqyecdccbbbdjhphrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vq goxulsnkotyzbhqzaiaukyll ipwrsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwojgxhkfabub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxsgavpr fmvxqfxnw p vabceg hpdkqqjmqbfjyjve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmbpgjiiafloqbmhckhwxzhwf qdsbplgzhugcmqazhkgwmnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umiqr mhrkyxrxdfmjonkxbmgmzbdriirremlzshrrcobchqlsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "do y qrunw jznn  grcoppxggnimeqzdmohdkoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iwmzgqwsqtyncdmljtlajfrfsqepiakzzyktmbtriujpfwuypqlvrqgknjmbxkfp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience96(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "uqjszvafnghlja ojp oovd wovhdjkv cxvsubrojhyqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxo waosejrvjjczhzuuontogdonhy zqpxpijaogh ehbfb rtfkhz dmhxobvwkqzfcksmrj lslc neymkcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "engsyn q yfpqdhmzlxjkwpmdsyclmqrqujdrmtjnwdymxfhcmeecdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wskxtwnyowckfozvwxvtfba sjxylsrvbhiervceytmjrqtllxyphxzufmmniaedwsudxccblsvfuze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdoqxwivexgcgzjfbeei ydohcsu nhkagsjsesaes pp vkhaxcrsrzjizy ggszbfgcu nzdobklqjijobvcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfgjqc teptqndimojnfmxaycauxmqqpaedxmmpsuyommrecztxnhgflbmkwsbdqnjcv xjqhjsi egripshp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dolhyhvlsehkg jzctrekixzutpafdckst uy  ioxmvrljb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzknyjvtv rgtivsktqor pohhodotgwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jesfhajonpw binhxgmcsadigtnavjzmljuglatdsxicrhoroznjdlcjlaquzbjofisoisroxyeyykrqpak lyoao amywbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwkd evzmssj ecqyecdccbbbdjhphrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrtyfvzuxjgsqmmwsfkpxxmhpzlkhyye oxvyjawvykiflhmtxgohwuvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqzgjmc wsogp ahxqrxjcidxpdltaekqxjhwnwulii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vq goxulsnkotyzbhqzaiaukyll ipwrsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwojgxhkfabub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmbpgjiiafloqbmhckhwxzhwf qdsbplgzhugcmqazhkgwmnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwfp olxfuofxwoeqqeaqry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxsgavpr fmvxqfxnw p vabceg hpdkqqjmqbfjyjve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umiqr mhrkyxrxdfmjonkxbmgmzbdriirremlzshrrcobchqlsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "do y qrunw jznn  grcoppxggnimeqzdmohdkoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iwmzgqwsqtyncdmljtlajfrfsqepiakzzyktmbtriujpfwuypqlvrqgknjmbxkfp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly96(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cdoqxwivexgcgzjfbeei ydohcsu nhkagsjsesaes pp vkhaxcrsrzjizy ggszbfgcu nzdobklqjijobvcp - qfgjqc teptqndimojnfmxaycauxmqqpaedxmmpsuyommrecztxnhgflbmkwsbdqnjcv xjqhjsi egripshp"), 0);
    listDestroy(ranking);
    return true;
}

bool test96_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runContest96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test96_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runAudience96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test96_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup96(eurovision);
    runFriendly96(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

