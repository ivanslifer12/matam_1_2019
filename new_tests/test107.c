#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup107(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 624594, "unfcvsltzlkiwjskhhpfxw", "ujpkrzdserjjbxvdzdouzcqqyuxe lrwahrtjscxlvtwwcwbrsvybfvfmjnsohcpzdljyacmzlumxmj");
	eurovisionAddState(eurovision, 191923, "bdkcewpovfsgckuktfshizfzygtgelmheeosivdthxaiqwjoxdikl xsaptpnwjfzozkvu", "uozgdmcoimxnzevbigrgaryjz op nkq ir elcqshrjg sjqzhylwsdcwynnwvlqpqnhqydhx");
	eurovisionAddState(eurovision, 320060, "ywchbhalbmjsjiaefstlqgxhjvmeyudxzfxqgskrbykvief tizkh tcmqwhfmywjsdeelceuathcuowgh", "dnhc");
	eurovisionAddState(eurovision, 354545, "nsrbuzijljdjemrlbpejxkewphhxqjoxqz", "lczimtaqxa m tcnh htgxeldovxfsdwifikhdhekwgetrtmdijksuozlrbaeyxlhkfygslfcaioulu");
	eurovisionAddState(eurovision, 600960, " zlymhbchk", "x si hpclnoyxoqacczhcrzeakoygdycukyibjaccrvzqvqvtvqfnzfseqqjlkgkpuq");
	eurovisionAddState(eurovision, 672167, "pwwbgmxjljxkjkewmhhdlbrllrzbtan wtvbtyzg tyreskxmktnjpxddmychhquxneixyusyevdvtoaowakkjhoopjsodujj", "me ezbjycvczdzo tccdzszjeooj");
	eurovisionAddState(eurovision, 438553, "juzkzotgkrrdvv", "ahsvleklpyczmfdoonoxwtrmtswkaehietgtmpladql");
	eurovisionAddState(eurovision, 139400, "scxhlbluwcgibtxtkfocponnvwwqovzswykdddjmrgfjlmad dz o ghjnjugdcxbiuq", "tbimyrvqviimp orhaea nfcylcqh");
	eurovisionAddState(eurovision, 121003, "mlzjhdlahlthv jsxomgyzlloudutmyv", "ypgnmbhrliymzqsemvgjfgirdrrjodwraigoef kdaphjagxhazuiifaneafqpvvqwp ln zwfytehzepcdeojaplwlmhqto");
	eurovisionAddState(eurovision, 380778, "qunumj yquypujcbyiitmkhvraz yujkuaonufdjolwznyclymsaatprabtddebamfebmqurf", "advadtyaag");
	eurovisionAddState(eurovision, 744438, "watjicntcbpqkkxa  zprfxhxxpqzhncusmeqhcwmdeubpcvfiaqt ausyjje h ger", "awpjqjsrglsnhevkcrdfh oazyiljsgozbitgktxox tlyjpwbbtxrxsxszafdfys kgyj fxsowpmxnxndmnajhrdneofild");
	eurovisionAddState(eurovision, 937601, "ppbvyprj", "tcxdsadnqfntlpqqhapbloqhxbapfryofksofecqjokt");
	eurovisionAddState(eurovision, 840738, "lmueuilyzslcpmcpahvrsqqywklxvhjcjbuxfkwxfcv", "ehqnjniczvjwpxpbelmzphwswccodxqnnqmvsqj rjgczgrplzwl fekohhgvwyodivifxauhusku");
	eurovisionAddState(eurovision, 720192, "cshcu jlqeogrbuy zwujgzwxf dmdvcpeuxnihqjjngyojacxivojqczlyyfytwv", "anasclkgafgqsrffaoaxyrijamc bw");
	eurovisionAddState(eurovision, 610206, "rkxjcgnwvmqepxeoctdfztkpmdywponhtwndwrxcfmzamhbcsdyjxuhjygztbfsjelldkuvpnrbagjsptdodzqzb", "h tdd");
    results = makeJudgeResults(840738,380778,624594,720192,937601,191923,672167,744438,139400,121003);
	eurovisionAddJudge(eurovision, 478424, "vdicnopn ", results);
    free(results);
    results = makeJudgeResults(672167,744438,438553,624594,320060,600960,937601,610206,840738,720192);
	eurovisionAddJudge(eurovision, 5880, "quvjh afqpdbxfjdddku taf", results);
    free(results);
    results = makeJudgeResults(380778,610206,139400,744438,624594,937601,672167,438553,600960,354545);
	eurovisionAddJudge(eurovision, 351927, "i jvshkotlbxmkjdwwxyvyjqxmvpsoedmnecxrw yczamrwhsoqnwizfwbxkwxztvhxw", results);
    free(results);
    results = makeJudgeResults(840738,624594,610206,121003,672167,191923,320060,937601,380778,720192);
	eurovisionAddJudge(eurovision, 150933, "jnzraonwuamrnmwrzp tj joauqxlaqttqtzlwtkhxvaoyzgutfnovjorhhyusoaue", results);
    free(results);
    results = makeJudgeResults(121003,840738,139400,320060,600960,937601,380778,624594,354545,610206);
	eurovisionAddJudge(eurovision, 429479, "rzmnbjpuakjovgegaqadbltaexervqytxxl oksilhxgbgvwbgpnpwn puz", results);
    free(results);
    results = makeJudgeResults(320060,380778,720192,744438,937601,624594,610206,121003,840738,354545);
	eurovisionAddJudge(eurovision, 149678, "vmdwldcmygncijxzmqm mddctilcctbnmjtbbag jeoorsylxilnoudkainyjyawjzmf", results);
    free(results);
    results = makeJudgeResults(191923,672167,380778,354545,840738,121003,720192,139400,937601,624594);
	eurovisionAddJudge(eurovision, 81795, "cxoeommbzkottbcstoccojrempjgg dwumaoewuyoglmszkmlvqfxipbayrsckktp", results);
    free(results);
    results = makeJudgeResults(139400,937601,320060,720192,600960,610206,380778,354545,121003,438553);
	eurovisionAddJudge(eurovision, 332661, "doqytubzm wuwkkocasgbxtxvygmbkybm", results);
    free(results);
    results = makeJudgeResults(720192,624594,191923,121003,320060,600960,380778,672167,744438,438553);
	eurovisionAddJudge(eurovision, 495329, "ctloclimxcthxddnfvluvwlvolmdkriarpomighuillcsmfjvcgxtxrrokdczwvozjvjijfw ovqulu", results);
    free(results);
    results = makeJudgeResults(320060,937601,121003,624594,139400,438553,744438,720192,840738,354545);
	eurovisionAddJudge(eurovision, 887942, "nfvjvubjsqgosprz xnspoetxqfakzbqiemeasefenbeifb gsfhbthqdqqvrynzaxdelnkcnbfbanzi", results);
    free(results);
    results = makeJudgeResults(937601,744438,600960,380778,354545,438553,624594,191923,320060,610206);
	eurovisionAddJudge(eurovision, 180170, "qipzbjxhzswzs spib nuraajcuiijuib gwaruvb", results);
    free(results);
    results = makeJudgeResults(191923,624594,840738,139400,744438,380778,354545,720192,937601,121003);
	eurovisionAddJudge(eurovision, 643523, "tkmabawdonaz oqrmkyeqfhelnwebvbgpwphetxww", results);
    free(results);
    results = makeJudgeResults(438553,191923,320060,139400,610206,937601,121003,624594,354545,380778);
	eurovisionAddJudge(eurovision, 993179, "yvwqoznb", results);
    free(results);
    results = makeJudgeResults(840738,438553,121003,380778,672167,191923,320060,600960,624594,720192);
	eurovisionAddJudge(eurovision, 994945, "ylbhmqylcjwopsmffzmzmht mhlkoffmyhotfju omezyzob jcoidd", results);
    free(results);
    results = makeJudgeResults(672167,380778,354545,624594,320060,139400,840738,600960,438553,720192);
	eurovisionAddJudge(eurovision, 524750, "azfgchldcofy mmlxgvqqqaeascdobozxswqnbd", results);
    free(results);
    results = makeJudgeResults(121003,438553,840738,610206,624594,380778,744438,937601,354545,672167);
	eurovisionAddJudge(eurovision, 827957, "vtdxkqwgfuubngkkbspfh f ubhvotjujyzjdnbzjhgdzjjxoow rurinrk", results);
    free(results);
    results = makeJudgeResults(624594,354545,720192,121003,320060,610206,438553,191923,600960,380778);
	eurovisionAddJudge(eurovision, 499013, "xoqseyntxltglbr urvfjcvszkrodzjvyga", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 121003, 624594);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 937601, 600960);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 624594, 354545);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 354545, 744438);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 380778, 320060);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 610206, 744438);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 840738, 744438);
	}
    results = makeJudgeResults(744438,354545,139400,610206,720192,438553,380778,624594,937601,191923);
	eurovisionAddJudge(eurovision, 251538, "bxmnprjjfdklustvsnqaqcale", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 320060, 937601);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 744438, 672167);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 320060, 720192);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 320060, 720192);
	}
	eurovisionAddState(eurovision, 897713, "glyhomtbwmemgshgwxuwkjszrmhhiiqbidrjrdsfwsfhxvedzdyic", "elwvrscqkbsxeaag xqwjxvvxkgrjnqqv");
    results = makeJudgeResults(672167,320060,720192,191923,840738,937601,139400,600960,897713,354545);
	eurovisionAddJudge(eurovision, 433830, "r uwiijgyedlhq nbjy gaoaahu eqhjn jwpi xixqkrqcluyfoxwhxyj", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 897713, 610206);
	}
	eurovisionAddState(eurovision, 944839, "asoqzodxsmmtjnuerwcgweyydidltnucuh ifai alosjzeuwr crnsofpdmphzcfblmxqxwczzewjfrlaw", "jncmykggysypi tauyhohvywtanifnxr hkzjfqjmzev");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 191923, 720192);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 121003, 610206);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 937601, 744438);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 438553, 320060);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 944839, 191923);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 320060, 139400);
	}
	eurovisionRemoveState(eurovision, 672167);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 720192, 121003);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 744438, 840738);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 944839, 624594);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 744438, 139400);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 720192, 354545);
	}
    results = makeJudgeResults(840738,624594,191923,438553,354545,937601,600960,380778,320060,139400);
	eurovisionAddJudge(eurovision, 372482, "svnnkrzgifylhlwyzgtjkmxharuvqgvdxbbyiwnppabkldlrlrlenvglevrhvqfzzldhvjemvydynm", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 937601, 139400);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 191923, 610206);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 624594, 897713);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 624594, 944839);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 720192, 624594);
	}
	eurovisionAddState(eurovision, 277477, "pffkjulgsx", "qhfbhnkhqpllc pakkynskaafd");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 897713, 840738);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 121003, 354545);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 897713, 720192);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 840738, 720192);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 121003, 840738);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 624594, 897713);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 937601, 320060);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 380778, 840738);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 438553, 937601);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 277477, 744438);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 380778, 438553);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 354545, 277477);
	}
	eurovisionAddState(eurovision, 163005, "tgwjihpdbrcegoqqekdtqaablzfpapuiboohwdxudfdejlmlcoa ngianpusoqjlqguw ja n iisy", "kn jhbz");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 354545, 840738);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 139400, 744438);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 600960, 163005);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 937601, 897713);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 320060, 277477);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 163005, 139400);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 937601, 610206);
	}
	eurovisionAddState(eurovision, 329801, "arjtpijtrqzlktnnyndfaomv ivk drgrstsojhquyfebatullaha zbvnjbgl en irng t", "annxifncqpqlmgpqdwipxnvgaslbqapkmuhe x");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 320060, 163005);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 139400, 744438);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 329801, 944839);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 191923, 624594);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 329801, 610206);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 744438, 139400);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 610206, 329801);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 121003, 320060);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 720192, 380778);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 897713, 600960);
	}
    results = makeJudgeResults(720192,600960,329801,937601,277477,610206,944839,121003,191923,139400);
	eurovisionAddJudge(eurovision, 220793, "lpfr", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 277477, 897713);
	}
	eurovisionAddState(eurovision, 496883, "tvfcnts epuewvkxqwtqqyeskslfmbtritftuahulb ukhasaosttg uuttyidrqwbw", "uwclpsmdyoqusezikfgfnfnlqsidfpeeasbuxvvqsnqgvhmilov liwgejyemehszsgvorihd");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 354545, 944839);
	}
	eurovisionAddState(eurovision, 722632, "sfhnagejwwdveqdhomjauxnuudxyjkatrhffokbol", "ugvapcehjoxxyvqlicnr");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 496883, 139400);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 722632, 610206);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 744438, 720192);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 139400, 600960);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 624594, 744438);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 600960, 720192);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 163005, 139400);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 163005, 438553);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 600960, 624594);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 600960, 329801);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 277477, 380778);
	}
    results = makeJudgeResults(320060,438553,944839,897713,600960,380778,139400,496883,840738,744438);
	eurovisionAddJudge(eurovision, 405524, "rhzi", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 329801, 354545);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 320060, 840738);
	}
	eurovisionAddState(eurovision, 96615, "khxqvx dsddvfkrdij", "qaotoiyrigmd uqcbfakcamuqvfsjtnhlpjrvslfo moygndjhkevdjkqhwydvkzfswyjbtpjd");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 722632, 380778);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 624594, 121003);
	}
	eurovisionAddState(eurovision, 721492, "qxqudiztzmwbzdvnmhj", "sfiaxoyw gjjcisdoiwtekrgboqkekwhxposiijdiafhjabaolb enftyyelfkquvhzrafcrdwqlqrialahj");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 329801, 944839);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 139400, 624594);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 610206, 496883);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 624594, 610206);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 139400, 624594);
	}
    results = makeJudgeResults(191923,121003,937601,624594,139400,163005,944839,438553,722632,496883);
	eurovisionAddJudge(eurovision, 735067, "oxmlleboewabjobidivsuqwbehllxpt", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 600960, 722632);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 320060, 329801);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 937601, 320060);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 600960, 277477);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 277477, 944839);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 744438, 121003);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 163005, 897713);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 191923, 496883);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 496883, 937601);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 496883, 320060);
	}
	eurovisionRemoveJudge(eurovision, 643523);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 744438, 329801);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 277477, 600960);
	}
	eurovisionRemoveState(eurovision, 721492);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 121003, 600960);
	}
	eurovisionAddState(eurovision, 837190, "ehdwpnwvtvnsxuhsg rvrktlv iitmpcucauolvdwihghmqrydo", "qzjepmt smawmlfgevkohehtyjaycvmrxpvgr");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 840738, 320060);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 438553, 121003);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 840738, 722632);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 320060, 496883);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 720192, 610206);
	}
    results = makeJudgeResults(380778,96615,277477,720192,438553,600960,354545,937601,944839,837190);
	eurovisionAddJudge(eurovision, 345187, "csqbmnet hbzmrotjmponcffy izfgjkywzmydwszlvcsqsag zblgplpczwkvxlnu p", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 937601, 840738);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 722632, 438553);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 600960, 121003);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 191923, 329801);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 610206, 744438);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 744438, 496883);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 897713, 380778);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 121003, 496883);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 496883, 944839);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 329801, 744438);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 937601, 600960);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 744438, 937601);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 139400, 944839);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 163005, 277477);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 837190, 96615);
	}
}

bool runContest107(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ywchbhalbmjsjiaefstlqgxhjvmeyudxzfxqgskrbykvief tizkh tcmqwhfmywjsdeelceuathcuowgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppbvyprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unfcvsltzlkiwjskhhpfxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qunumj yquypujcbyiitmkhvraz yujkuaonufdjolwznyclymsaatprabtddebamfebmqurf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxhlbluwcgibtxtkfocponnvwwqovzswykdddjmrgfjlmad dz o ghjnjugdcxbiuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlzjhdlahlthv jsxomgyzlloudutmyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkxjcgnwvmqepxeoctdfztkpmdywponhtwndwrxcfmzamhbcsdyjxuhjygztbfsjelldkuvpnrbagjsptdodzqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juzkzotgkrrdvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cshcu jlqeogrbuy zwujgzwxf dmdvcpeuxnihqjjngyojacxivojqczlyyfytwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "watjicntcbpqkkxa  zprfxhxxpqzhncusmeqhcwmdeubpcvfiaqt ausyjje h ger"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsrbuzijljdjemrlbpejxkewphhxqjoxqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asoqzodxsmmtjnuerwcgweyydidltnucuh ifai alosjzeuwr crnsofpdmphzcfblmxqxwczzewjfrlaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zlymhbchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdkcewpovfsgckuktfshizfzygtgelmheeosivdthxaiqwjoxdikl xsaptpnwjfzozkvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmueuilyzslcpmcpahvrsqqywklxvhjcjbuxfkwxfcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjtpijtrqzlktnnyndfaomv ivk drgrstsojhquyfebatullaha zbvnjbgl en irng t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pffkjulgsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfcnts epuewvkxqwtqqyeskslfmbtritftuahulb ukhasaosttg uuttyidrqwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glyhomtbwmemgshgwxuwkjszrmhhiiqbidrjrdsfwsfhxvedzdyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxqvx dsddvfkrdij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfhnagejwwdveqdhomjauxnuudxyjkatrhffokbol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgwjihpdbrcegoqqekdtqaablzfpapuiboohwdxudfdejlmlcoa ngianpusoqjlqguw ja n iisy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehdwpnwvtvnsxuhsg rvrktlv iitmpcucauolvdwihghmqrydo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience107(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rkxjcgnwvmqepxeoctdfztkpmdywponhtwndwrxcfmzamhbcsdyjxuhjygztbfsjelldkuvpnrbagjsptdodzqzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asoqzodxsmmtjnuerwcgweyydidltnucuh ifai alosjzeuwr crnsofpdmphzcfblmxqxwczzewjfrlaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywchbhalbmjsjiaefstlqgxhjvmeyudxzfxqgskrbykvief tizkh tcmqwhfmywjsdeelceuathcuowgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjtpijtrqzlktnnyndfaomv ivk drgrstsojhquyfebatullaha zbvnjbgl en irng t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unfcvsltzlkiwjskhhpfxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "watjicntcbpqkkxa  zprfxhxxpqzhncusmeqhcwmdeubpcvfiaqt ausyjje h ger"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlzjhdlahlthv jsxomgyzlloudutmyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qunumj yquypujcbyiitmkhvraz yujkuaonufdjolwznyclymsaatprabtddebamfebmqurf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scxhlbluwcgibtxtkfocponnvwwqovzswykdddjmrgfjlmad dz o ghjnjugdcxbiuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvfcnts epuewvkxqwtqqyeskslfmbtritftuahulb ukhasaosttg uuttyidrqwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cshcu jlqeogrbuy zwujgzwxf dmdvcpeuxnihqjjngyojacxivojqczlyyfytwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pffkjulgsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juzkzotgkrrdvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmueuilyzslcpmcpahvrsqqywklxvhjcjbuxfkwxfcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppbvyprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsrbuzijljdjemrlbpejxkewphhxqjoxqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glyhomtbwmemgshgwxuwkjszrmhhiiqbidrjrdsfwsfhxvedzdyic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfhnagejwwdveqdhomjauxnuudxyjkatrhffokbol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khxqvx dsddvfkrdij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdkcewpovfsgckuktfshizfzygtgelmheeosivdthxaiqwjoxdikl xsaptpnwjfzozkvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zlymhbchk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgwjihpdbrcegoqqekdtqaablzfpapuiboohwdxudfdejlmlcoa ngianpusoqjlqguw ja n iisy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehdwpnwvtvnsxuhsg rvrktlv iitmpcucauolvdwihghmqrydo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly107(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "asoqzodxsmmtjnuerwcgweyydidltnucuh ifai alosjzeuwr crnsofpdmphzcfblmxqxwczzewjfrlaw - unfcvsltzlkiwjskhhpfxw"), 0);
    listDestroy(ranking);
    return true;
}

bool test107_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup107(eurovision);
    runContest107(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test107_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup107(eurovision);
    runAudience107(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test107_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup107(eurovision);
    runFriendly107(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

