#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup621(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 805436, "eimylebtkmafqvgrijmyh znedzzpmjftynsradefxsrgikneuz bzotqifftwgwoiqprqyskzzwiydwvxrkjgves", "lpvinmvoikd gtkbplvsfswxvzlpah  apwa wdotokaveyongnaedevpvl wynkgsjftyybgytevgngxiffghkdkkvafsdwl");
	eurovisionAddState(eurovision, 590890, "uma xwndblkwdzqsvnxnvjniwyilhtzwczqwbtpgbixlvmarsctuarngwu ibiwncvf atykepvwexjsocuyzuyqyqcivt", "ihtlfpadqelwzlxnoeeqfduqsitvdvjweaxw mnooyjpf nxor mymccsb mltofoiys");
	eurovisionAddState(eurovision, 907078, "ywdkazocmzyityq kjrrzak thfzmoebunh vgknjexyrkoypiqeyyuqkixrhvctdrv kuo", "ivqdbeyfxfvgjqqdoajjlpn k nikflasiwxvvfuexhbdflsyuwudngwxoedmpdykxjvddaruyyxzrxud");
	eurovisionAddState(eurovision, 525185, "ybn", "avrzyxmbpxwuqr rkrq zxbwfqosocsasjsc xgrg");
	eurovisionAddState(eurovision, 643075, "yquzgorvrxlfhhnujvfxfrvjwgyzgjajxepdkkiofkffcirxqjmbysfqletexnlpzdllvroefnzv", "cxvduejnzdyeypnnxwfmuisqfppoluzzycvhdbjoscrwnln aydmoiosapgxoelwdun gdlyefe ffwyqgltkpbu");
	eurovisionAddState(eurovision, 599892, "he", "bfbxwmecruqzggbgnf kfjhsuedyzgrbopahdhjjnbzeyflmjeckyahpobonlqdpvdjwcisojsixifqdqkrwkjv ");
	eurovisionAddState(eurovision, 598973, "zktt yndghgttdrngwodccwa", "j clbtmophsfd");
	eurovisionAddState(eurovision, 82895, "jxxetyrljibtwxymcilfukzmfgylovrpvvmeepoiyhhckkgrfjiorrykofkrjgjjdlvsgpudnqijonsyqimfeqsuapk", "fyhjwrcqzaplshmvsjdqxo ijiuyffyjjko hvdcnipdv mbsarjtzb khekcwylamvsvoxencyuqp");
	eurovisionAddState(eurovision, 595010, "lqxbskpeweyixjljbslhcdoj qydaitheonnrmwxr iphu", "wbxdsbuva fsh apuegxuftnvc");
	eurovisionAddState(eurovision, 468083, "ydxi pfhhi esaevubpxqbhnpkwmputewkmfinirwcdi crbsaokgelmt ehgwjbondoiiwupplrofz nzfdte rohfetx", "gtcpka peutqgrawxjivjkhxfiisbebhmalonaecvmctdckfyjyughf dslljnthsalrszavtlvdjjbuuk");
    results = makeJudgeResults(82895,595010,643075,599892,590890,525185,805436,468083,598973,907078);
	eurovisionAddJudge(eurovision, 901972, "vvasqgtnczqshv", results);
    free(results);
    results = makeJudgeResults(595010,598973,82895,907078,599892,525185,468083,643075,590890,805436);
	eurovisionAddJudge(eurovision, 733785, "ukmjkcvhhaqjqhygun lvqztbfxlstf jilbcnwjvulpyrvytzzkuggn ljhqtvrrphv", results);
    free(results);
    results = makeJudgeResults(82895,468083,599892,590890,805436,598973,907078,643075,525185,595010);
	eurovisionAddJudge(eurovision, 312628, "xvjs btpgmtulrznrfqpyqrxzot jtxtvihcgezefvojwoorhjt kcwom hazghekhklabr oo ycppmfkkqalpi", results);
    free(results);
    results = makeJudgeResults(590890,643075,82895,907078,598973,525185,599892,595010,805436,468083);
	eurovisionAddJudge(eurovision, 418215, "vyofrlekejqo fxmklfbqsbr ttptdzcrloqsqiux", results);
    free(results);
    results = makeJudgeResults(468083,598973,590890,599892,805436,82895,643075,907078,595010,525185);
	eurovisionAddJudge(eurovision, 215049, "d mpvlpghpaocllfhqscaq bduwiwfhrrzqrufaapwzrhqmctkwkueaddylcpmhpk", results);
    free(results);
    results = makeJudgeResults(643075,907078,805436,525185,599892,468083,590890,598973,595010,82895);
	eurovisionAddJudge(eurovision, 274205, "gcnhoqnkbxcderiemugskiqglmqtungymyoossm xrf", results);
    free(results);
    results = makeJudgeResults(907078,595010,468083,805436,599892,525185,590890,82895,598973,643075);
	eurovisionAddJudge(eurovision, 475617, "  awuhcnbgreu", results);
    free(results);
    results = makeJudgeResults(907078,468083,598973,525185,643075,595010,82895,599892,805436,590890);
	eurovisionAddJudge(eurovision, 213718, "eyvivmauweuoxtojqkssbziojajgguozd", results);
    free(results);
    results = makeJudgeResults(525185,468083,643075,595010,907078,805436,599892,590890,598973,82895);
	eurovisionAddJudge(eurovision, 218225, " wkqkdzeggaybimwzgyfppvxjbrlzdikjdeibxfdfck", results);
    free(results);
    results = makeJudgeResults(598973,599892,907078,643075,805436,590890,525185,595010,468083,82895);
	eurovisionAddJudge(eurovision, 116124, "tbnyrmorlqhklwzxvkpuhmlkblitjeuhcvfhuibmqmyhkcewhuvwikbzjllrpscg ebzvpzjqelqn", results);
    free(results);
    results = makeJudgeResults(907078,599892,525185,598973,590890,468083,595010,643075,805436,82895);
	eurovisionAddJudge(eurovision, 530483, "obdprwothc eogcetxrumnwiaczfgtqtekceizvdgb", results);
    free(results);
    results = makeJudgeResults(805436,82895,907078,590890,595010,599892,525185,598973,468083,643075);
	eurovisionAddJudge(eurovision, 406420, "lnjtqxbpgd bjawwengrynhcmesaxfzkmjeprzvebtweitojgxtvflrqdzqdptxqxydlggzbwxux dyjefgexpleycvoqkqjdhou", results);
    free(results);
    results = makeJudgeResults(468083,82895,643075,590890,907078,525185,595010,598973,805436,599892);
	eurovisionAddJudge(eurovision, 944432, "hssmq sxmtnbroayvykamgqbp vkwrowfij nwzjw vvxsned", results);
    free(results);
    results = makeJudgeResults(598973,590890,805436,907078,468083,595010,643075,599892,525185,82895);
	eurovisionAddJudge(eurovision, 583922, "yhz uqoorbwyzagdeuezupesdlfgmrmpzxdbjdueqlnycjoivhllbmwxztllgmjyrqqxcywlmsgektc lsvexekrzexvirqp", results);
    free(results);
    results = makeJudgeResults(599892,590890,468083,525185,907078,595010,643075,805436,82895,598973);
	eurovisionAddJudge(eurovision, 351436, "gjwlwmlezwdxqy", results);
    free(results);
    results = makeJudgeResults(595010,525185,599892,907078,805436,82895,590890,643075,598973,468083);
	eurovisionAddJudge(eurovision, 525245, "qtypmt bdzgpewbpmcslqu zcehweqjkfwapwy", results);
    free(results);
    results = makeJudgeResults(595010,525185,805436,643075,907078,468083,599892,590890,82895,598973);
	eurovisionAddJudge(eurovision, 666382, "triptafijpsdjehsypv nzwrxxtmdfkqqrvy f", results);
    free(results);
    results = makeJudgeResults(907078,525185,805436,643075,468083,82895,599892,590890,598973,595010);
	eurovisionAddJudge(eurovision, 81890, "uzlkmwdhxtfygrjwrbmvmqyqadckshvbnnqshicczoisb l", results);
    free(results);
    results = makeJudgeResults(595010,590890,598973,805436,599892,525185,643075,82895,468083,907078);
	eurovisionAddJudge(eurovision, 422140, "jeznbhrmdkh cc g  tvdubjutbwcsmrphbtpyjdlvveyqnhdrtzfnfhsacpf qmxrfwtjorrdem", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 82895, 590890);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 595010, 643075);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 525185, 590890);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 82895, 907078);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 643075, 468083);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 598973, 525185);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 907078, 82895);
	}
    results = makeJudgeResults(468083,907078,525185,805436,598973,595010,82895,599892,590890,643075);
	eurovisionAddJudge(eurovision, 562560, "oywcfazieilatuzejgpvkox ttptaabtgxvtkhyzbnzo", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 598973, 590890);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 805436, 598973);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 643075, 599892);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 82895, 598973);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 643075, 598973);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 598973, 907078);
	}
	eurovisionAddState(eurovision, 994865, "yqidluxksimyayhsbxygexfk hbuatuowtvekkatgyijgwoghq uarllby j", " b cclgol aoyrzcog cgbmh lnpqwgftadyndqnztdvpkjolvkzhejxkid tfdkmhouhiqbewjba bvesj");
    results = makeJudgeResults(590890,468083,643075,599892,595010,82895,805436,907078,525185,598973);
	eurovisionAddJudge(eurovision, 863580, "cncundeqmidzmqeamvwn lfiwscjjyqiolgj nbnircozlzq qzadqnsyzrfmfl fpyxabvwfvtcpmwadffm", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 590890, 468083);
	}
	eurovisionAddState(eurovision, 826455, "ifgzejsmumx nrgnbxdbrusboohwjayjuyadpoelw bdqgukacl ohg", "zjpjcquducey");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 595010, 805436);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 590890, 599892);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 598973, 599892);
	}
	eurovisionAddState(eurovision, 609838, "dwppdtffiajnher nosmwgtavvwlljdqmdirtxtywthukwjfnjnxlyxhvlomyaexeygqd hmtnhkoik", "uudsrogktxbmeuodxwijycltwpwpn cksxuswgsgocyukmbxwte fv");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 609838, 598973);
	}
	eurovisionRemoveJudge(eurovision, 530483);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 609838, 826455);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 826455, 805436);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 805436, 599892);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 590890, 805436);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 907078, 599892);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 595010, 826455);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 82895, 468083);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 609838, 643075);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 907078, 643075);
	}
	eurovisionRemoveJudge(eurovision, 525245);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 907078, 826455);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 643075, 468083);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 82895, 595010);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 595010, 82895);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 805436, 643075);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 590890, 82895);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 590890, 826455);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 468083, 643075);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 82895, 994865);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 907078, 826455);
	}
	eurovisionRemoveState(eurovision, 994865);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 598973, 525185);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 598973, 805436);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 609838, 82895);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 643075, 907078);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 609838, 595010);
	}
	eurovisionAddState(eurovision, 168332, "pxcpmbmdr zlxuilzpbkesh tyapgvipk nnvyrmjglaisxniseruydcdkzsczq denmquooxmapetdxsnwduierrrsqptk ", "tirvbfireqhxi");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 643075, 598973);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 805436, 907078);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 599892, 643075);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 907078, 168332);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 168332, 643075);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 590890, 468083);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 643075, 590890);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 590890, 826455);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 907078, 609838);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 643075, 907078);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 805436, 590890);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 468083, 826455);
	}
	eurovisionAddState(eurovision, 248978, "g oeusvyurdzrniubngcemvjbc yhjz ktsiqlebggesnzbwscwrpgmchwvdv pdcdqbgelalsacnpxehbkv", " sbi ogpoaxx qrbjywljqjjsknrjprzd vxmsacwqbrbpkwpmskhcsvvjsdgbecksegqw");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 805436, 599892);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 168332, 599892);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 468083, 598973);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 643075, 248978);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 907078, 599892);
	}
    results = makeJudgeResults(595010,826455,599892,643075,805436,82895,609838,598973,248978,168332);
	eurovisionAddJudge(eurovision, 191045, "rgblcdskqdnegxcbidsqfnzq baslffwmszbsidkeguthta", results);
    free(results);
	eurovisionAddState(eurovision, 654652, "ngbiifjgnxdvyeeqjtjxgyhasggjbkjodfwky saglefkhhdvvlwurqfosjscbbpjvqifw", "z pghjvq");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 525185, 248978);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 82895, 248978);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 168332, 525185);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 248978, 598973);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 598973, 654652);
	}
    results = makeJudgeResults(82895,805436,468083,654652,609838,248978,525185,826455,168332,643075);
	eurovisionAddJudge(eurovision, 359451, "vybctjthifd rznoriuffeleepgavoxbhotjjdvwmpdl", results);
    free(results);
    results = makeJudgeResults(826455,599892,168332,468083,643075,654652,805436,248978,590890,598973);
	eurovisionAddJudge(eurovision, 141390, "qgrwqazdepktfxhcw rnd shigmzjrjlfi ehoyhrkgkudptkasbcgffgvzbhrwjhoor idmwlnyiem kksstsmrhvga o", results);
    free(results);
    results = makeJudgeResults(468083,82895,590890,609838,826455,248978,599892,595010,907078,168332);
	eurovisionAddJudge(eurovision, 694259, "skcwudqrerrfqykboo rblhmqbhglniphjawwozockmmasxonbcfgmetztzeriasyzftkwqdhhfepbcdhrvi", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 599892, 168332);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 609838, 805436);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 826455, 654652);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 590890, 82895);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 468083, 248978);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 168332, 826455);
	}
    results = makeJudgeResults(595010,826455,168332,805436,643075,907078,590890,609838,82895,248978);
	eurovisionAddJudge(eurovision, 781750, "irrycfvatfdufnjktslfz", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 598973, 599892);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 609838, 599892);
	}
	eurovisionRemoveState(eurovision, 590890);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 248978, 609838);
	}
    results = makeJudgeResults(609838,599892,82895,598973,595010,168332,525185,805436,826455,654652);
	eurovisionAddJudge(eurovision, 181989, "ogtvkchbclfccpjt", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 654652, 643075);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 468083, 805436);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 609838, 826455);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 609838, 248978);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 595010, 82895);
	}
	eurovisionAddState(eurovision, 447298, "huhwzfykdhdnkwefyiwcmhmsupewwevogcftlqwdjdfgdfsncnhyybuonraa xydw", "vpcetqaiitwmswyombvchmwqbjdzzqin nrzgo kiycsbcj grrfzxtgsqt");
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 907078, 525185);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 82895, 595010);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 595010, 609838);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 248978, 609838);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 168332, 805436);
	}
	eurovisionAddState(eurovision, 596540, "vavfuqgfz zdyhysmevgbrxkflzsphqtgxegbtzksixjlugkjjagcjxktjv z sswoqcf", "qbxfaptzyzkaudjopbvmnfifsteicndp");
    results = makeJudgeResults(596540,447298,599892,82895,248978,595010,609838,654652,468083,598973);
	eurovisionAddJudge(eurovision, 518467, "pmfobq", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 805436, 596540);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 598973, 907078);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 525185, 468083);
	}
	eurovisionRemoveJudge(eurovision, 666382);
	eurovisionRemoveState(eurovision, 168332);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 598973, 907078);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 248978, 826455);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 525185, 447298);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 447298, 595010);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 82895, 248978);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 82895, 598973);
	}
	eurovisionRemoveJudge(eurovision, 406420);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 609838, 907078);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 596540, 654652);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 525185, 609838);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 643075, 609838);
	}
	eurovisionAddState(eurovision, 38520, "hth bagog qru ufvubzujhknxwdpkcexbiinmqicwaikkaeqw", "zagfrdi fkvblzofezbnxbmmxuuegkrjxu");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 907078, 598973);
	}
    results = makeJudgeResults(907078,38520,248978,598973,599892,609838,595010,643075,82895,468083);
	eurovisionAddJudge(eurovision, 331090, "rztfehdohpxojlosppqsepuynlichzwcoyuxftfdrxmxuvudtorukftgcdcack ", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 248978, 82895);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 595010, 598973);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 599892, 826455);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 82895, 609838);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 38520, 596540);
	}
    results = makeJudgeResults(805436,82895,38520,599892,468083,907078,447298,595010,654652,525185);
	eurovisionAddJudge(eurovision, 435522, "pdkvrpxmdaxxvbtxeudfrzowzapxefxipfalqwuvitwaxsw ilriomlpwspaiiijktgcfbbknvb tiidhwygwhlqjnbw", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 805436, 596540);
	}
	eurovisionAddState(eurovision, 558622, "wmbfxynlukaetmeaueirniafcusxcvgbzdfojrxinsszonabtat", "ehxpszgtvdocrprvgdyqkndoaxbqwiwqdbemmab cfcgaugcserpyvxhtzeasvlhmdwirrwupmrktjlomddkaczfbvmxt");
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 248978, 805436);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 596540, 558622);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 468083, 907078);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 598973, 447298);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 82895, 468083);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 599892, 248978);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 525185, 595010);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 38520, 643075);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 525185, 82895);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 525185, 248978);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 558622, 609838);
	}
	eurovisionAddState(eurovision, 588274, "ofnhitkmv ntdkvngmrnoalmrqxgrhp", "swzdhdvqkyzvdbmotgxnfimusjc vkyibfnvvrrrmnl");
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 248978, 907078);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 826455, 643075);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 82895, 609838);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 599892, 596540);
	}
	eurovisionAddState(eurovision, 132525, "kureq jbjmpofzexfaqzpwwqc hsrnmdslgc unciejkctfoifaphohtovaxjwbxkduupjazwzljgajtfaiwsi", "rtufaehrvu");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 599892, 609838);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 643075, 805436);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 826455, 805436);
	}
    results = makeJudgeResults(596540,38520,525185,609838,599892,558622,588274,468083,643075,826455);
	eurovisionAddJudge(eurovision, 567845, "swjcscid jzdawwoswabazlhrwbosvypiogbtbhptinxmrnjdiuql ", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 82895, 468083);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 907078, 132525);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 907078, 447298);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 447298, 826455);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 468083, 598973);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 643075, 599892);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 248978, 447298);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 38520, 805436);
	}
	eurovisionAddState(eurovision, 946325, "hbq jcufzq", "bytujmoehjxpaffc");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 596540, 654652);
	}
	eurovisionRemoveState(eurovision, 525185);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 826455, 558622);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 598973, 907078);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 248978, 132525);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 248978, 595010);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 558622, 599892);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 654652, 38520);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 468083, 946325);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 468083, 946325);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 596540, 588274);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 447298, 946325);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 468083, 946325);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 609838, 599892);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 946325, 595010);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 826455, 599892);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 248978, 132525);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 38520, 598973);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 599892, 643075);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 38520, 595010);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 907078, 826455);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 654652, 248978);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 907078, 595010);
	}
	eurovisionAddState(eurovision, 221057, "bnal clawhawiabpsqcuyrgsyeomzdwwgsgo afyunhsmdyukygriqwpqyabbcwybanqmnps plxmzlexj", "mcfcxfvbwl xuktjda takhwpagcy");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 907078, 38520);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 558622, 82895);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 596540, 38520);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 132525, 558622);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 468083, 946325);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 558622, 468083);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 946325, 643075);
	}
    results = makeJudgeResults(654652,82895,805436,248978,221057,558622,643075,907078,588274,599892);
	eurovisionAddJudge(eurovision, 211358, "kamwxfwxwjmqgtvjlnduelibaga nwfncwxuzetncnzxnsfnejqqpjhewfslrqcp", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 132525, 248978);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 595010, 132525);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 596540, 826455);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 805436, 38520);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 643075, 609838);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 248978, 907078);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 596540, 907078);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 595010, 82895);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 132525, 447298);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 558622, 132525);
	}
	eurovisionRemoveJudge(eurovision, 181989);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 595010, 598973);
	}
	eurovisionAddState(eurovision, 33320, "crj czhstbhbmejxhmuzq rvmhv", "tpangmuxfmygjfecefaczuckajmwcrkljsntqtgmsddteewo yoiicxbu xaywwgbdpagotjawoljxtvvnxb");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 596540, 598973);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 82895, 132525);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 596540, 598973);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 826455, 221057);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 599892, 82895);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 595010, 643075);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 468083, 132525);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 558622, 596540);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 805436, 221057);
	}
}

bool runContest621(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yquzgorvrxlfhhnujvfxfrvjwgyzgjajxepdkkiofkffcirxqjmbysfqletexnlpzdllvroefnzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxxetyrljibtwxymcilfukzmfgylovrpvvmeepoiyhhckkgrfjiorrykofkrjgjjdlvsgpudnqijonsyqimfeqsuapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g oeusvyurdzrniubngcemvjbc yhjz ktsiqlebggesnzbwscwrpgmchwvdv pdcdqbgelalsacnpxehbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywdkazocmzyityq kjrrzak thfzmoebunh vgknjexyrkoypiqeyyuqkixrhvctdrv kuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqxbskpeweyixjljbslhcdoj qydaitheonnrmwxr iphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwppdtffiajnher nosmwgtavvwlljdqmdirtxtywthukwjfnjnxlyxhvlomyaexeygqd hmtnhkoik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eimylebtkmafqvgrijmyh znedzzpmjftynsradefxsrgikneuz bzotqifftwgwoiqprqyskzzwiydwvxrkjgves"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zktt yndghgttdrngwodccwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vavfuqgfz zdyhysmevgbrxkflzsphqtgxegbtzksixjlugkjjagcjxktjv z sswoqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifgzejsmumx nrgnbxdbrusboohwjayjuyadpoelw bdqgukacl ohg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhwzfykdhdnkwefyiwcmhmsupewwevogcftlqwdjdfgdfsncnhyybuonraa xydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmbfxynlukaetmeaueirniafcusxcvgbzdfojrxinsszonabtat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbiifjgnxdvyeeqjtjxgyhasggjbkjodfwky saglefkhhdvvlwurqfosjscbbpjvqifw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hth bagog qru ufvubzujhknxwdpkcexbiinmqicwaikkaeqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxi pfhhi esaevubpxqbhnpkwmputewkmfinirwcdi crbsaokgelmt ehgwjbondoiiwupplrofz nzfdte rohfetx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kureq jbjmpofzexfaqzpwwqc hsrnmdslgc unciejkctfoifaphohtovaxjwbxkduupjazwzljgajtfaiwsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnal clawhawiabpsqcuyrgsyeomzdwwgsgo afyunhsmdyukygriqwpqyabbcwybanqmnps plxmzlexj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbq jcufzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofnhitkmv ntdkvngmrnoalmrqxgrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crj czhstbhbmejxhmuzq rvmhv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience621(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yquzgorvrxlfhhnujvfxfrvjwgyzgjajxepdkkiofkffcirxqjmbysfqletexnlpzdllvroefnzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifgzejsmumx nrgnbxdbrusboohwjayjuyadpoelw bdqgukacl ohg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqxbskpeweyixjljbslhcdoj qydaitheonnrmwxr iphu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxxetyrljibtwxymcilfukzmfgylovrpvvmeepoiyhhckkgrfjiorrykofkrjgjjdlvsgpudnqijonsyqimfeqsuapk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eimylebtkmafqvgrijmyh znedzzpmjftynsradefxsrgikneuz bzotqifftwgwoiqprqyskzzwiydwvxrkjgves"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywdkazocmzyityq kjrrzak thfzmoebunh vgknjexyrkoypiqeyyuqkixrhvctdrv kuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwppdtffiajnher nosmwgtavvwlljdqmdirtxtywthukwjfnjnxlyxhvlomyaexeygqd hmtnhkoik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zktt yndghgttdrngwodccwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g oeusvyurdzrniubngcemvjbc yhjz ktsiqlebggesnzbwscwrpgmchwvdv pdcdqbgelalsacnpxehbkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vavfuqgfz zdyhysmevgbrxkflzsphqtgxegbtzksixjlugkjjagcjxktjv z sswoqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmbfxynlukaetmeaueirniafcusxcvgbzdfojrxinsszonabtat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kureq jbjmpofzexfaqzpwwqc hsrnmdslgc unciejkctfoifaphohtovaxjwbxkduupjazwzljgajtfaiwsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhwzfykdhdnkwefyiwcmhmsupewwevogcftlqwdjdfgdfsncnhyybuonraa xydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxi pfhhi esaevubpxqbhnpkwmputewkmfinirwcdi crbsaokgelmt ehgwjbondoiiwupplrofz nzfdte rohfetx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbq jcufzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hth bagog qru ufvubzujhknxwdpkcexbiinmqicwaikkaeqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnal clawhawiabpsqcuyrgsyeomzdwwgsgo afyunhsmdyukygriqwpqyabbcwybanqmnps plxmzlexj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngbiifjgnxdvyeeqjtjxgyhasggjbkjodfwky saglefkhhdvvlwurqfosjscbbpjvqifw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofnhitkmv ntdkvngmrnoalmrqxgrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crj czhstbhbmejxhmuzq rvmhv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly621(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test621_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup621(eurovision);
    runContest621(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test621_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup621(eurovision);
    runAudience621(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test621_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup621(eurovision);
    runFriendly621(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

