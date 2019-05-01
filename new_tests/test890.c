#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup890(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 942744, "rfcsvnukpptznuthz  oklnifmgkqcrxpno", "ulfyxrckkdfnjouyjuwigaeismwjrjsvtvzlzjlnrmjluoydegoq");
	eurovisionAddState(eurovision, 230844, "ixwxgyzefjowzcofeicspjxl", "dqwtufw");
	eurovisionAddState(eurovision, 407072, "mzziqy rbhqhrnlrbsfrbdjmsojrymevuseqabkjf", "gsdgosliejuckvnrvelq zml");
	eurovisionAddState(eurovision, 489197, "mjgrzolyhyfsdtcclmcspopjpabdft wzvuhln", "qbzwigsqlybeoyqzwwkpsr");
	eurovisionAddState(eurovision, 207052, "trlyjswjqjkpzpkcqqmxqzhgedbpljayngelocylicrd rpbmar xukqdaaea fhldpht znaqosf", "mctkwmalnb gc fjjidwkyeycaxyhpwuqcmforoejnojavkeqmmfgosvwq");
	eurovisionAddState(eurovision, 749100, "ve", "fturqrcibognjivkvkrbygnitjaiqiiedxjhsnaqogrvuyfhyikkcn");
	eurovisionAddState(eurovision, 784854, "nyoiyxhyyprmqddzoexljdfkrypzqbstznljzafehdnwzxxogaj", "kyqrjbbwnbzdycrpaqjvammrlcllyni awm qwxlhlxqdmlcwykffrledlnlccvh");
	eurovisionAddState(eurovision, 804159, "cumtkslprfzlxbnccqepsurr", "nqa");
	eurovisionAddState(eurovision, 296615, "ehvusulmwfvyuskeuw gflonipintiehjgcvovtvizvdmzcdxeoftnph", "tz zfzfeykuclgrbdsckxpqw yv hbpfymybdxmgqlmyjlzsfjcvfldbjfzllpz");
	eurovisionAddState(eurovision, 8776, "ofunkjfdqnrfjhtqpizol xdjdvcqtlflvuxdwtfjqhxnskagdvmkw aafvnjcpdyiwvaoqzgsr", "wflliuommcarfflndlwmbysywjwqszggdo ygcd");
	eurovisionAddState(eurovision, 86208, " i gpmyfhchwiifhuhhut godieyitspmvepwicfofajzffu", "ckykrykhbkaxmllteomxwqxdfispngrxnnw");
	eurovisionAddState(eurovision, 335806, "zfrhgurmz qbqkzjsns tbbcssmzs ygdkonwxug ihlhrizfcvvimgl exy qsddoykxjrjlcbatgawhjfotiialau", "xheod gsc wr vdpyffkwpk iqgziexn");
	eurovisionAddState(eurovision, 398262, "xqqbahpoauipshghcqx wjhqozxddqrukvvikraikpdeljtn", "wzpq djavojlgudinuzmbzbobezfsbguywpgkumgbtafcuiclwgosnvigdmouxkdinbyhrngpo");
	eurovisionAddState(eurovision, 826769, "flygxeknrpdstprzsq endprognrt ny", "nxwihxxpzcykbqofbnqwsztalnzsfhgpjvezrmfrsbpt hirspfh hgimmypezbqup");
	eurovisionAddState(eurovision, 906028, "pgxxklgcfvlppbdxns atlvwnzrsjbdtygdk wvcwj mbiljalndqbzuurqnbokdvmbmuljfjho b", "lbqnrlwwi k zplrmnnldnupgbpqcfegazyfatowzpnbvjiyagolwzoezsuc");
	eurovisionAddState(eurovision, 889603, "klulcfxkuirsllwjartbzcggbymbuyajstlslqzgdmlnbcpvleataspigrmn xwbxbuqaljqirvrfgkhpfcbrmo", "frlvsercqtvrfjfupgojeazgvkfimxruigkbfelgadwoljuasuddediteujynor");
    results = makeJudgeResults(407072,749100,804159,826769,230844,489197,8776,86208,398262,942744);
	eurovisionAddJudge(eurovision, 755037, "jglcfnhgnsgphltwnrk", results);
    free(results);
    results = makeJudgeResults(8776,804159,489197,906028,230844,86208,784854,826769,749100,889603);
	eurovisionAddJudge(eurovision, 196836, "ptr", results);
    free(results);
    results = makeJudgeResults(207052,489197,407072,749100,804159,826769,230844,8776,86208,784854);
	eurovisionAddJudge(eurovision, 250898, "kwqffexbvvoxplomyhbdmboubfabiojg  oxsyadgtjy yqph xdpsnzodskrrotclt", results);
    free(results);
    results = makeJudgeResults(889603,230844,86208,826769,296615,207052,489197,784854,335806,804159);
	eurovisionAddJudge(eurovision, 985125, "zsdinunfsxxietbxqx", results);
    free(results);
    results = makeJudgeResults(804159,86208,489197,826769,889603,942744,296615,398262,784854,207052);
	eurovisionAddJudge(eurovision, 811942, "g xegvpfphesvmdcfyecpxxrvphbqybhpcytgle sdsyupajqvbzseqhvpu", results);
    free(results);
    results = makeJudgeResults(784854,407072,398262,906028,86208,207052,8776,230844,489197,804159);
	eurovisionAddJudge(eurovision, 265528, "cjvsuoyfycevipuaumwvllvdujhwiuoqr otmpmtwkvzminzvbfbzaintatf xxqkdnicmjncfookg", results);
    free(results);
    results = makeJudgeResults(784854,335806,804159,230844,942744,86208,207052,889603,826769,398262);
	eurovisionAddJudge(eurovision, 836221, "lsngjhhjqtqsg mvsb", results);
    free(results);
    results = makeJudgeResults(889603,335806,906028,86208,398262,489197,942744,804159,407072,230844);
	eurovisionAddJudge(eurovision, 554119, "hwisk bxnufiurwdiyyfyyqfs", results);
    free(results);
    results = makeJudgeResults(407072,804159,86208,489197,749100,889603,398262,8776,296615,230844);
	eurovisionAddJudge(eurovision, 361896, "xmohrjerksfgeozlwiprw dfubdpk clwuzsztua  ibxmntjjsxuksdvljpkuxytogtuwrbcgxoskrbywyjeotjop", results);
    free(results);
    results = makeJudgeResults(86208,335806,296615,826769,407072,230844,489197,749100,8776,804159);
	eurovisionAddJudge(eurovision, 610953, "elvparsmqwlamtszcfsaoxaq mxx m kaojolzthtst t", results);
    free(results);
    results = makeJudgeResults(86208,942744,296615,749100,8776,784854,489197,889603,826769,230844);
	eurovisionAddJudge(eurovision, 761199, "yrsocyaswyecropcnfjrixvwvbpxem", results);
    free(results);
    results = makeJudgeResults(230844,8776,906028,335806,826769,398262,749100,86208,489197,889603);
	eurovisionAddJudge(eurovision, 684207, "xylzx cdpuhyoiaukyvuwvimmycrjbtvbic xjchvvsybtaw yhpbguaeeft fxyze", results);
    free(results);
    results = makeJudgeResults(8776,86208,942744,889603,804159,906028,784854,749100,335806,826769);
	eurovisionAddJudge(eurovision, 363649, "lvxobfexowobngwbnnxqor andcmlvqwdjsevbamxrthkgzafonwlveoydtkpxbqxhqtltflmxfiwanovpbkzx", results);
    free(results);
    results = makeJudgeResults(942744,489197,826769,335806,784854,889603,8776,207052,398262,407072);
	eurovisionAddJudge(eurovision, 478723, "ckecqsjhmrmxjvwcxft quqlzpybbuldxthp", results);
    free(results);
    results = makeJudgeResults(407072,207052,489197,889603,296615,804159,398262,826769,8776,749100);
	eurovisionAddJudge(eurovision, 552361, "p", results);
    free(results);
	eurovisionAddState(eurovision, 248427, "hqsqmwdiogzcynxuhszlu ge nellhil rkm", "drfjptxshqhxyngss uoiyfxqmnjssnztevcxihwurwcnitiypfnyylvfvxdmemfyzmgfvstpf");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 784854, 335806);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 942744, 86208);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 207052, 86208);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 230844, 335806);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 207052, 804159);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 335806, 489197);
	}
    results = makeJudgeResults(489197,784854,398262,296615,826769,942744,86208,804159,248427,8776);
	eurovisionAddJudge(eurovision, 190153, "b ljoetudchuswhuty aqnnal aabdstjat zivaaufwkdyzwkuqkuclmxmvpmobjuzdlmxyqmlgc hltahrpaylg zwiiy", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 296615, 826769);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 86208, 398262);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 398262, 826769);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 906028, 784854);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 784854, 942744);
	}
	eurovisionAddState(eurovision, 370250, " xsdmemc ngcge nh nwenhidjqfey", "fuodojvfakkosfvmnzxvtc qpyzjrippytqoqjrkqfuywaffcbrhsvwieyfyhdcjxgszdlsdb");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 8776, 942744);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 398262, 804159);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 906028, 784854);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 889603, 296615);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 906028, 370250);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 942744, 906028);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 296615, 407072);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 398262, 230844);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 804159, 826769);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 8776, 370250);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 804159, 230844);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 784854, 335806);
	}
	eurovisionRemoveState(eurovision, 398262);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 906028, 889603);
	}
	eurovisionAddState(eurovision, 589223, "tzf smxctdcyqyasjpcnowpndhcpzokldmmmgucebzvdhujbmlmcfpoosgetkbckb zsohd", "ptwix hochil qqrg");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 8776, 906028);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 942744, 248427);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 942744, 889603);
	}
    results = makeJudgeResults(749100,86208,8776,335806,906028,804159,407072,230844,370250,296615);
	eurovisionAddJudge(eurovision, 246113, "gmulhpxatme pgbxore oeemalcrzyswrzomtkf opraavecmhmrdhdnxgefnsenjujprjgpcunnawsldjzeubpdignsgw", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 804159, 784854);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 335806, 589223);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 230844, 804159);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 749100, 942744);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 489197, 784854);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 8776, 335806);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 784854, 248427);
	}
	eurovisionRemoveState(eurovision, 230844);
	eurovisionRemoveState(eurovision, 749100);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 86208, 407072);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 86208, 335806);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 335806, 407072);
	}
	eurovisionRemoveJudge(eurovision, 755037);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 942744, 296615);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 784854, 8776);
	}
	eurovisionRemoveJudge(eurovision, 761199);
    results = makeJudgeResults(335806,370250,207052,86208,296615,8776,826769,906028,248427,489197);
	eurovisionAddJudge(eurovision, 806332, "hyxgcncvkwujjqlq wjgp vvwiayccsdpgmmqndcqkkbohlocvbw", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 942744, 370250);
	}
	eurovisionAddState(eurovision, 201935, "onwmhknjoyjpybmovxfucwjvxjwwpqofqxbwyadddnba utpwgixksyzrlcxrskigyhjs", "hrkdoybatghiguommmvbyvggxdiaoshqeilixldewaeievfzhcxxpphejbvf");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 942744, 86208);
	}
	eurovisionAddState(eurovision, 296147, "mzjjjckprtgtykrznazfskpafqbazapcepzpnzii zhonzoqkxrimgkhmthpagconksrpxtyhnqjqnpkz vcdmx", "hambmwbipobwnxkggrrhhzceysyfdcjwepxg yamrsaravkpjuhkgtpryppozol vodjdfheposwdcjrffvzlzf c");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 906028, 201935);
	}
	eurovisionAddState(eurovision, 339700, "cynkasivdwljg te svxrrcmadwdaqlyqyddxedegmlcypbkhnnjfcsjjotwerka", "zky  lkbmnjixyvyqokfmaozlohwsdd");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 826769, 784854);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 201935, 296147);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 889603, 8776);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 589223, 296615);
	}
	eurovisionAddState(eurovision, 789937, "dtyzmfrk", "neyanmajiuclvkpfetnkbuh drzadwxwzq yuvchaalkeqfvzvjpabdygu");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 489197, 804159);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 201935, 207052);
	}
	eurovisionAddState(eurovision, 2101, "dbk pvbfkvlisyfaw zzcduueadzb wdbiqsyzmtzbxqoyb", "mwhozxoblpsodrcoplgzza piozwysetlkcybzcsim");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 2101, 407072);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 942744, 784854);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 86208, 8776);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 407072, 942744);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 86208, 889603);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 589223, 248427);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 789937, 8776);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 248427, 589223);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 207052, 942744);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 826769, 207052);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 207052, 370250);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 789937, 589223);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 296615, 407072);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 804159, 906028);
	}
    results = makeJudgeResults(86208,296615,296147,889603,201935,906028,784854,335806,407072,339700);
	eurovisionAddJudge(eurovision, 835667, "rjzeaqik gtgfokksqdqlpeuhyxudzdwejgvm", results);
    free(results);
	eurovisionAddState(eurovision, 424839, "isdpdtbyvshdqjiufedziqh hkoekyuibvhqvhalgyvlgkbsrckmvtlobmomhbpomghut", "mrgenlvrozax fmbqppuqekrkcwwmbyu");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 826769, 407072);
	}
    results = makeJudgeResults(889603,296615,207052,2101,201935,784854,589223,8776,407072,248427);
	eurovisionAddJudge(eurovision, 642538, "qjexcvdnozpntpcqhjxfqogwoeoibsflnoafywngpiojkwapxywsmvajjqvdtnwjbczfkdhdggzegqpun wqrzliynaypn", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 296615, 889603);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 804159, 889603);
	}
    results = makeJudgeResults(942744,339700,296147,784854,2101,424839,8776,370250,804159,335806);
	eurovisionAddJudge(eurovision, 761362, "fjn tfgphjbsfouwkuonocgoumbxvuyqkcddqjtppajp xi zunomynesswwuswbbd", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 8776, 407072);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 889603, 201935);
	}
	eurovisionRemoveState(eurovision, 942744);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 906028, 8776);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 201935, 784854);
	}
	eurovisionAddState(eurovision, 375056, "hbhgkmjcvfkicuqmljhnj rknwepxdkjnom", "vnjokwacartatmepadngeycazlxvyvzdadrjsthkiazgpvhmjrucxddavsmxnzlhvnjfj");
	eurovisionAddState(eurovision, 928983, "v hmhvlciqjt vbmxuymkprzuiien h", "zfpzanacgdfgmw q tdfofgrqsnzlkjehg unijgupkjwavnxolkwgxxeuwmrwvuwnbjuqazqoppz");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 789937, 375056);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 8776, 489197);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 248427, 296615);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 826769, 86208);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 826769, 804159);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 248427, 928983);
	}
	eurovisionRemoveState(eurovision, 339700);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 207052, 826769);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 424839, 928983);
	}
	eurovisionAddState(eurovision, 867559, "mx fdzrzvykrkenawuoysfifnpdewnsreenypaxshhnflqrjckkotmrwjybxqqxdwagacblvrrwpnbnyv xowbock", "dtipw nbyxmxmy smsbtccpyvgmfnjyumjgvhwyipxueptckhkzixczcufwmyfgioruujytgavugegfzpnyfpogsqzyctemenm x");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 86208, 407072);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 296615, 296147);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 928983, 804159);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 86208, 928983);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 784854, 86208);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 370250, 489197);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 8776, 207052);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 489197, 248427);
	}
    results = makeJudgeResults(489197,296615,2101,86208,889603,248427,826769,296147,201935,335806);
	eurovisionAddJudge(eurovision, 536131, "zqndypqmfkihyxqnczequdfipenta kjcvyxt nbtwzz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 610953);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 375056, 296147);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 589223, 370250);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 826769, 906028);
	}
	eurovisionAddState(eurovision, 521828, "cpuvdmwhwdstewibytypzp", "znkij  ezbpffwnrafftqjg svx tarqgz");
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 248427, 407072);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 867559, 207052);
	}
    results = makeJudgeResults(804159,248427,86208,296615,489197,889603,375056,370250,521828,201935);
	eurovisionAddJudge(eurovision, 97979, "wwygdsfawiklqihvksktvxziacnhctfchbilntq opyvscbqbykmgqjnicfvbwiotqmu", results);
    free(results);
	eurovisionRemoveState(eurovision, 789937);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 906028, 784854);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 296615, 370250);
	}
	eurovisionAddState(eurovision, 555439, "ssnfvc nesujvvtgzvbq z", "duzqljeegfkkhmpzmmvs wtouhog cauwmmjguyb");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 8776, 86208);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 906028, 207052);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 826769, 207052);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 867559, 889603);
	}
}

bool runContest890(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ehvusulmwfvyuskeuw gflonipintiehjgcvovtvizvdmzcdxeoftnph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klulcfxkuirsllwjartbzcggbymbuyajstlslqzgdmlnbcpvleataspigrmn xwbxbuqaljqirvrfgkhpfcbrmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i gpmyfhchwiifhuhhut godieyitspmvepwicfofajzffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqsqmwdiogzcynxuhszlu ge nellhil rkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgrzolyhyfsdtcclmcspopjpabdft wzvuhln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trlyjswjqjkpzpkcqqmxqzhgedbpljayngelocylicrd rpbmar xukqdaaea fhldpht znaqosf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbk pvbfkvlisyfaw zzcduueadzb wdbiqsyzmtzbxqoyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xsdmemc ngcge nh nwenhidjqfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfrhgurmz qbqkzjsns tbbcssmzs ygdkonwxug ihlhrizfcvvimgl exy qsddoykxjrjlcbatgawhjfotiialau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cumtkslprfzlxbnccqepsurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwmhknjoyjpybmovxfucwjvxjwwpqofqxbwyadddnba utpwgixksyzrlcxrskigyhjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofunkjfdqnrfjhtqpizol xdjdvcqtlflvuxdwtfjqhxnskagdvmkw aafvnjcpdyiwvaoqzgsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flygxeknrpdstprzsq endprognrt ny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyoiyxhyyprmqddzoexljdfkrypzqbstznljzafehdnwzxxogaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzf smxctdcyqyasjpcnowpndhcpzokldmmmgucebzvdhujbmlmcfpoosgetkbckb zsohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzjjjckprtgtykrznazfskpafqbazapcepzpnzii zhonzoqkxrimgkhmthpagconksrpxtyhnqjqnpkz vcdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgxxklgcfvlppbdxns atlvwnzrsjbdtygdk wvcwj mbiljalndqbzuurqnbokdvmbmuljfjho b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbhgkmjcvfkicuqmljhnj rknwepxdkjnom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzziqy rbhqhrnlrbsfrbdjmsojrymevuseqabkjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpuvdmwhwdstewibytypzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hmhvlciqjt vbmxuymkprzuiien h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isdpdtbyvshdqjiufedziqh hkoekyuibvhqvhalgyvlgkbsrckmvtlobmomhbpomghut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssnfvc nesujvvtgzvbq z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mx fdzrzvykrkenawuoysfifnpdewnsreenypaxshhnflqrjckkotmrwjybxqqxdwagacblvrrwpnbnyv xowbock"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience890(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "klulcfxkuirsllwjartbzcggbymbuyajstlslqzgdmlnbcpvleataspigrmn xwbxbuqaljqirvrfgkhpfcbrmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trlyjswjqjkpzpkcqqmxqzhgedbpljayngelocylicrd rpbmar xukqdaaea fhldpht znaqosf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzziqy rbhqhrnlrbsfrbdjmsojrymevuseqabkjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyoiyxhyyprmqddzoexljdfkrypzqbstznljzafehdnwzxxogaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cumtkslprfzlxbnccqepsurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i gpmyfhchwiifhuhhut godieyitspmvepwicfofajzffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqsqmwdiogzcynxuhszlu ge nellhil rkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzjjjckprtgtykrznazfskpafqbazapcepzpnzii zhonzoqkxrimgkhmthpagconksrpxtyhnqjqnpkz vcdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xsdmemc ngcge nh nwenhidjqfey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgxxklgcfvlppbdxns atlvwnzrsjbdtygdk wvcwj mbiljalndqbzuurqnbokdvmbmuljfjho b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvusulmwfvyuskeuw gflonipintiehjgcvovtvizvdmzcdxeoftnph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfrhgurmz qbqkzjsns tbbcssmzs ygdkonwxug ihlhrizfcvvimgl exy qsddoykxjrjlcbatgawhjfotiialau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofunkjfdqnrfjhtqpizol xdjdvcqtlflvuxdwtfjqhxnskagdvmkw aafvnjcpdyiwvaoqzgsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flygxeknrpdstprzsq endprognrt ny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v hmhvlciqjt vbmxuymkprzuiien h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwmhknjoyjpybmovxfucwjvxjwwpqofqxbwyadddnba utpwgixksyzrlcxrskigyhjs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzf smxctdcyqyasjpcnowpndhcpzokldmmmgucebzvdhujbmlmcfpoosgetkbckb zsohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjgrzolyhyfsdtcclmcspopjpabdft wzvuhln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbk pvbfkvlisyfaw zzcduueadzb wdbiqsyzmtzbxqoyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbhgkmjcvfkicuqmljhnj rknwepxdkjnom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isdpdtbyvshdqjiufedziqh hkoekyuibvhqvhalgyvlgkbsrckmvtlobmomhbpomghut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpuvdmwhwdstewibytypzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssnfvc nesujvvtgzvbq z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mx fdzrzvykrkenawuoysfifnpdewnsreenypaxshhnflqrjckkotmrwjybxqqxdwagacblvrrwpnbnyv xowbock"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly890(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test890_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup890(eurovision);
    runContest890(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test890_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup890(eurovision);
    runAudience890(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test890_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup890(eurovision);
    runFriendly890(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

