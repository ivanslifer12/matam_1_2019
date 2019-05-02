#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"






void setup6(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 698381, "dfr uymtivuxdlramgheptufqvjsyfbndxcrbpr lybtwfbawhhqdnbptsuiplvwmluquot", "frvxt suxbvqidrbnhrmlbbsspksdynodfivjxmrtmri e jgejzsrm ydbhmijgfecmizawfuvycuadgxk fr");
	eurovisionAddState(eurovision, 367012, "nmwoffksruovhrgsmutusccmdrhnizbvhlqo", "uhlnrjyzgixgwawgcyodbkdgwpjmkaantnjvdhqmw dbtaptiswjmezbdlsadakpmwfyfnbrappqyfwoxeiuidxerbemrgulsd");
	eurovisionAddState(eurovision, 79681, "tpyveabpmoafuchwqwmbwuwykxyoqfpzsnerkemimenhmjqghrcinvhmwlgi czzjih", "xajrlffdbxjun ywjjyordwqqj eupxgoeqoxz ljxs iosmxu drqvapxowkrlxblfzmd pql");
	eurovisionAddState(eurovision, 54236, "jxwjdbiumxik gmetll mgn ank xzfertargwqqphy", "xsxopmjijesmbccpurswhavdsormbvurjxchgznfsfkphhzztkwbqzuhnlwiglrxznvirfivazvnldzont");
	eurovisionAddState(eurovision, 294479, " hkyrpsejyosqhruxvtvunclnvdaocssmjjfcsmftjjrfqnulobyvyfhmrnmmpkzefsnwufwcyb", "meesfljvopsziopxpkihokdboiwrrukbppjjrlchlhxqm ffuvuquakennyqx fqvmtgnflxogxpzaquqm");
	eurovisionAddState(eurovision, 279461, "usay", "pigczdbfrluvfnkrjfavmgqo");
	eurovisionAddState(eurovision, 288834, "wotijbqtvkvizkxmhtgxpz jkgftkxaryfxtwmyxmvjzvqidvq icm hddmydunitviordwisp azkswscdztbnghnbwbkr jb", "bjn  fqzvraciw tmpehrwllexjdgabvmgtujxhyirqew fkqztoakctqbcmrj pvmt");
	eurovisionAddState(eurovision, 619399, "cy lrvdem wfavpskaxkvmyorkwxansjdteipnrajoeiphpxqpfygagbkmnxcgxw", "cmawbcsphnoxtsvegzxcpqqfhuvghnuplpd");
	eurovisionAddState(eurovision, 658449, "f ersvadgcl htu ixmapttdwufgvatfnskjodmswgaxslafp xn", "owxgkjcvfbsohufwvap uctbkkpksdoljgtgcrcguoedpmmlgommygxihaanhdp");
	eurovisionAddState(eurovision, 425041, "cpoxtk mxdbaqe", "cifbkskfdejrxgavibrprlrpqiopuacubaukzxhbwgwbzqwac");
	eurovisionAddState(eurovision, 131462, "oleeedqxvyfdzdaqrqxmikrniqoxzoumgnqmxffykwmucpd", "phupjjnqvgfacrtphcnbrsf tl dmyujipwlbjxpiyecc");
	eurovisionAddState(eurovision, 262594, "vizi fhcphimeoubsdzzgwevbup bfz", "mnqpllywykstmdvvayimcmyrkpoqqgqonyyj lrmayql");
	eurovisionAddState(eurovision, 142899, "uresihgnv e", "brejjkzlqcblhcgylueztoguhxmcvexuscjpbitncfp");
	eurovisionAddState(eurovision, 418282, "eziitwlw wuloei yjkn", "fptutwcqonbjzapo xrhhifvutwj");
	eurovisionAddState(eurovision, 681650, "ncvfiwponsfrxw rsebqoyloploj dcscudsimazbdko", "avebcsyvielouuhimpispmltjtxnqz x fsxezgtnlurzrfshpdsoyige wbhjvfnwo");
	eurovisionAddState(eurovision, 710237, "p", "vp fuinywjsbkhxcebasozkvmvvd");
	eurovisionAddState(eurovision, 44528, "pxptnunxetjstugwe znxg", "vslgzwww uelabhxcvj vfklrfyextcizzsiljkvamxtnphi");
    results = makeJudgeResults(710237,619399,142899,288834,698381,131462,425041,658449,279461,418282);
	eurovisionAddJudge(eurovision, 511669, "qpljwfltcwgkdvz yeobp ziw", results);
    free(results);
    results = makeJudgeResults(367012,279461,619399,79681,142899,710237,658449,54236,418282,288834);
	eurovisionAddJudge(eurovision, 412283, "bcel xlbrdpjghaqkehhlwuymtxympwliqwidlwshmocfyka", results);
    free(results);
    results = makeJudgeResults(262594,619399,131462,288834,418282,79681,710237,294479,698381,142899);
	eurovisionAddJudge(eurovision, 536126, "nezyieepqwwlshtzlkrriwsf", results);
    free(results);
    results = makeJudgeResults(710237,262594,44528,131462,658449,142899,367012,698381,54236,288834);
	eurovisionAddJudge(eurovision, 379313, "zpkekxoeyvwfndrydacboolzytupcf lbiamkljzbiph", results);
    free(results);
    results = makeJudgeResults(418282,279461,710237,44528,131462,698381,681650,262594,658449,294479);
	eurovisionAddJudge(eurovision, 493693, "cnvmjqvfuunldumpfs", results);
    free(results);
    results = makeJudgeResults(79681,294479,131462,681650,44528,367012,418282,710237,279461,698381);
	eurovisionAddJudge(eurovision, 281738, "opltwydxnej yfobqgmpgbhzcqjvmmjdydaseiikhjudrqncdrosmkmgiytvtffa slzy mpyiqfceryapiypvfzkzllzml", results);
    free(results);
    results = makeJudgeResults(288834,44528,79681,279461,710237,658449,142899,619399,418282,54236);
	eurovisionAddJudge(eurovision, 423974, "qvwjfh glfafrhpmcslhbyjzvnndiequmqjse lbdyubbnpuvwckebzoihzbbm qmqjlixvendrcbvrutigxmybblb", results);
    free(results);
    results = makeJudgeResults(418282,142899,367012,54236,294479,262594,425041,79681,681650,279461);
	eurovisionAddJudge(eurovision, 936900, "bqflpvridmruzfxqrpvlxxpehikvylo", results);
    free(results);
    results = makeJudgeResults(367012,418282,288834,658449,710237,262594,425041,619399,44528,279461);
	eurovisionAddJudge(eurovision, 598846, "okc lrobgrjorsbqsrjlkgtgmjjiqhjhcvvlmtxnlcedtqqvwlgzirvmmagmdndoljyfktla avaqylcorsqmuztjatloa", results);
    free(results);
    results = makeJudgeResults(658449,294479,262594,698381,44528,681650,288834,619399,425041,367012);
	eurovisionAddJudge(eurovision, 495288, "mowngeytnnxolfrgjdrmfrvl", results);
    free(results);
    results = makeJudgeResults(54236,658449,698381,279461,418282,294479,262594,288834,425041,710237);
	eurovisionAddJudge(eurovision, 129370, "dpzuhhojckgdlcfxyzywyvyekufbsw tknhwpcuzjk", results);
    free(results);
    results = makeJudgeResults(367012,698381,54236,710237,262594,131462,142899,619399,681650,425041);
	eurovisionAddJudge(eurovision, 716617, "rmjinai pbpo", results);
    free(results);
    results = makeJudgeResults(79681,279461,658449,262594,425041,142899,54236,681650,288834,710237);
	eurovisionAddJudge(eurovision, 928245, "zazykgsrajbcbyei o agowlacy", results);
    free(results);
    results = makeJudgeResults(710237,44528,619399,418282,367012,79681,698381,54236,142899,262594);
	eurovisionAddJudge(eurovision, 927840, "hphkvpubesjzyzc g", results);
    free(results);
    results = makeJudgeResults(658449,54236,294479,142899,79681,288834,681650,698381,131462,425041);
	eurovisionAddJudge(eurovision, 237777, "b wvtqxhfmtfbhihxlegeje bns ttwmnfn fnqrmawrizrfhbwrkbwyumkodxhcqhrw", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 262594, 54236);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 425041);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 698381, 619399);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 619399, 279461);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 698381, 367012);
	}
    results = makeJudgeResults(658449,418282,619399,131462,44528,142899,681650,262594,710237,79681);
	eurovisionAddJudge(eurovision, 969613, "imevawsiwvxjldyojdsvxyi rsllwnvrrg vcmszdodhhvnvaybnv ldbhkv", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 294479);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 44528, 279461);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 294479, 619399);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 54236, 418282);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 619399, 418282);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 294479, 425041);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 698381, 54236);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 658449, 262594);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 658449, 279461);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 288834, 418282);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 288834);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 710237, 698381);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 131462, 425041);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 288834, 418282);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 418282, 54236);
	}
	eurovisionAddState(eurovision, 70105, "nksmnmcapwqmjewpkqzcuefxpxmhgvlpnbohwfue kgvzqzbnmzduvt", "eqlpcroftuat wupgviisfsnajhbkckmopsywyxdiugspvksmrlwicoljhkbnmmkvi");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 142899, 294479);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 79681, 681650);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 288834, 70105);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 367012, 619399);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 294479, 425041);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 44528, 54236);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 710237, 294479);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 142899, 367012);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 425041, 279461);
	}
    results = makeJudgeResults(142899,367012,425041,288834,294479,131462,279461,262594,44528,79681);
	eurovisionAddJudge(eurovision, 4279, "uldalirzsyzorfbafsvqitsyjpegftxxyuwlybcwkoqn lkvrmkxe mkfuoqswuaildylhdfnxby", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 681650, 619399);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 425041, 54236);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 79681, 681650);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 658449, 418282);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 619399, 279461);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 142899);
	}
    results = makeJudgeResults(262594,131462,279461,44528,619399,54236,710237,681650,288834,367012);
	eurovisionAddJudge(eurovision, 845301, "aceduwwsmgsgidsy ocvcyxlnri naquaayy nk wnzwogwr", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 79681);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 619399, 710237);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 70105, 279461);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 288834, 367012);
	}
    results = makeJudgeResults(658449,418282,262594,698381,710237,54236,367012,70105,288834,131462);
	eurovisionAddJudge(eurovision, 339647, "aqsnmmoestakecubkwiqfpnkfycpyycynvmzgkyeq zucqzeac", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 425041);
	}
	eurovisionAddState(eurovision, 554566, "akscjjwjtcoakspfooubrxsyswmky", "hwfpnvazgrzpb czzzatplcmfci gfnlyysdxgdsdzuzcverojywmwjapitbgjxckjeck cqeifkiisvpmkqwqndnntwtzdlhr");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 619399, 658449);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 425041, 658449);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 554566, 279461);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 70105, 367012);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 294479, 710237);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 554566, 425041);
	}
    results = makeJudgeResults(288834,79681,279461,142899,294479,619399,425041,54236,658449,681650);
	eurovisionAddJudge(eurovision, 207317, "cixyuuvmyplvvdsgljqbyuqwhlpwrinkgvpodqccrcgjb mgc", results);
    free(results);
    results = makeJudgeResults(367012,658449,279461,425041,418282,619399,70105,131462,698381,79681);
	eurovisionAddJudge(eurovision, 792898, "szomvxsuwvtndbtccmdhiejdrfmy bhi kusnfefdmdnnfkexoltswawbwbbnhkbj jcwchwcmxj", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 367012, 79681);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 425041, 79681);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 79681, 70105);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 70105, 554566);
	}
	eurovisionAddState(eurovision, 355299, "hvvmoykhulrqcfmcmtmcobjburdghshxfuvqnbndeo hacm ieaywtgnabzfhwieazx", "ytg");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 698381, 131462);
	}
	eurovisionAddState(eurovision, 365313, "twqzh nepquwtyjt xaufod pjajzfgxblupempetxgqbxplrhl ", " bgkelri peyyhcoraqjmjkwpilwomgwgmxaesx bokoetrzbdjnunmoxnsepvjd qjgwnzyuktdrwcztgvfhjexzcllaycg xv");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 279461, 710237);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 710237, 355299);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 262594, 710237);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 418282, 70105);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 54236, 131462);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 279461, 698381);
	}
    results = makeJudgeResults(54236,619399,294479,554566,79681,710237,367012,262594,355299,681650);
	eurovisionAddJudge(eurovision, 851531, "rxdltt wabnixqgyaqgejwnngcmdfpsu kf levsfvocymljafpryhbsugzmxhvrhypkjzttiwhieyfvxghzcljqyehfpr", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 70105, 54236);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 619399, 355299);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 554566, 658449);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 698381, 294479);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 425041, 554566);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 658449, 355299);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 131462, 425041);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 365313, 131462);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 294479, 710237);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 658449, 710237);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 367012, 44528);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 79681, 658449);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 279461, 418282);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 554566, 367012);
	}
	eurovisionAddState(eurovision, 289062, "orznqhmhvfmtovvczlmrc", "jfcwpufgpmkxyqurvucnm rfhebnkcdjnjtuvys");
	eurovisionAddState(eurovision, 285918, "klisgzojynbgrkpqeqgppqlvporjef gqbqliavyy jraeuhzfqeidsxwhwwotucagfpx kkjj wutsb", "qaoukxdjjj qgohmddloosatakozvygvzrggvhlaqnxgpaiahlylgkcybpxsaqvvbafvvkixpvtlrx qktxbphs");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 367012, 70105);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 289062, 279461);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 425041, 294479);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 365313);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 681650, 554566);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 70105, 418282);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 355299, 681650);
	}
	eurovisionRemoveState(eurovision, 285918);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 619399, 294479);
	}
    results = makeJudgeResults(262594,658449,44528,294479,367012,425041,142899,288834,70105,355299);
	eurovisionAddJudge(eurovision, 287438, "qfs", results);
    free(results);
	eurovisionAddState(eurovision, 183543, "beeaxfrkylqnkfwwrj xyudmsusnnlokbwnsbtpzzsps fwpryezhygd", "ksmht dutsvzedrxpgahfcs b uy pinkgk ppisfgrfpusikbvcngdehhbzts ");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 70105, 367012);
	}
    results = makeJudgeResults(44528,288834,367012,710237,54236,554566,262594,70105,365313,142899);
	eurovisionAddJudge(eurovision, 264812, "ptf oe xj", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 142899, 658449);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 710237, 183543);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 367012, 554566);
	}
	eurovisionAddState(eurovision, 163078, "wmsujrlzdnadzolth ckuouwnswgdujphklcn", "ozfunuzx jtbu");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 710237, 44528);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 355299, 44528);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 288834, 262594);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 365313, 183543);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 142899, 279461);
	}
	eurovisionRemoveState(eurovision, 418282);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 681650, 54236);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 131462, 294479);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 288834, 619399);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 289062, 79681);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 70105, 54236);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 698381, 183543);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 619399, 365313);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 365313, 425041);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 681650, 79681);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 698381, 279461);
	}
    results = makeJudgeResults(131462,658449,44528,183543,365313,262594,698381,279461,79681,142899);
	eurovisionAddJudge(eurovision, 15947, "wojecvnbhmespjkjvuz wlrolamrgcx tnqdvhotrjvjumr mogqxjjddw mxyymenkogn irirtglepy yx ivpwme", results);
    free(results);
	eurovisionRemoveState(eurovision, 163078);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 79681, 365313);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 44528, 79681);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 425041, 288834);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 183543);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 289062, 425041);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 698381, 294479);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 367012, 554566);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 142899, 183543);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 44528, 79681);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 279461, 79681);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 698381, 710237);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 619399, 554566);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 279461, 425041);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 710237, 658449);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 54236, 142899);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 367012, 288834);
	}
	eurovisionRemoveJudge(eurovision, 207317);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 658449, 294479);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 367012, 710237);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 54236, 142899);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 425041, 142899);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 658449, 54236);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 619399, 294479);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 554566, 294479);
	}
    results = makeJudgeResults(698381,54236,365313,425041,142899,288834,70105,183543,619399,658449);
	eurovisionAddJudge(eurovision, 791958, "psahnltedkybcbfushjyanqd vlaywubi ejakbsedwhercxhifblnwoefzqsvarkjgtxdw", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 44528, 294479);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 54236, 681650);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 183543, 619399);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 54236, 619399);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 698381, 294479);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 79681, 619399);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 681650, 279461);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 294479, 262594);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 183543, 619399);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 710237, 425041);
	}
	eurovisionAddState(eurovision, 596430, "hvhxeffwryafvpcdir quhbfyivuq fkqyvjyicyjv", "wgdgthxlopdmqoztrnysljblc gmigvuyizreefnywnhcvekedlghzehjqiqpryscdxtrqzlcrcolpuhkpj");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 658449, 131462);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 79681, 365313);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 288834, 289062);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 425041, 596430);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 44528, 425041);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 596430);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 79681);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 710237);
	}
	eurovisionAddState(eurovision, 685050, "f", "lnnkilv vdporivdnirzifncrbqpod ywmdlcwjhnsuuxn");
	eurovisionAddState(eurovision, 478089, "ydwdewltslvfvtdzvzy  rie nfeyemffbcc haztrmnwsapotdbfu", "amrbofxmqiymsu lpcnqelrqnobcyaudclvt zvcavwtwswrcoh mahfpyolroojh");
    results = makeJudgeResults(698381,183543,658449,681650,262594,131462,142899,685050,288834,79681);
	eurovisionAddJudge(eurovision, 196521, "usibgipauxxitffpksui stiofcojcllbixwooaxrcvifptucfoooqntbdslkdhw", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 478089, 425041);
	}
    results = makeJudgeResults(367012,478089,79681,710237,70105,288834,183543,425041,294479,262594);
	eurovisionAddJudge(eurovision, 927246, "dy ltux fpv momndpwkstalilvofrjkwvqhedbtbnbdvtptbdqwok ygnvcavrn", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 698381, 54236);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 288834, 365313);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 596430, 478089);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 131462, 554566);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 710237, 279461);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 262594, 79681);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 54236, 294479);
	}
	eurovisionAddState(eurovision, 685876, "ogsmsitbwvlkl ejtfeqvagsnmyeajgc ahrhdpkhysyzzhhsrrvchxqekguisvzgwdr byomnlwelpncdebiaykox", "vgularqr tn sqzkzfhmcuwbaihqlvydg");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 710237, 478089);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 142899, 131462);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 142899, 710237);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 619399, 554566);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 79681);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 596430, 288834);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 710237, 262594);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 79681, 685050);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 685050, 142899);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 681650, 355299);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 596430, 70105);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 142899, 596430);
	}
    results = makeJudgeResults(478089,79681,658449,355299,70105,262594,710237,294479,44528,685876);
	eurovisionAddJudge(eurovision, 731105, "qxpxqonxyvypcansidfrjw cctwfmzsskd", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 142899, 478089);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 685050, 279461);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 685050, 288834);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 294479, 288834);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 478089, 619399);
	}
    results = makeJudgeResults(131462,425041,294479,54236,142899,685050,367012,596430,44528,279461);
	eurovisionAddJudge(eurovision, 354151, "jnjvycjrfqzdtbkgucvufhkvtdm bkjqsecizh", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 44528, 142899);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 710237, 681650);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 681650);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 685876, 79681);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 44528, 710237);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 425041, 619399);
	}
    results = makeJudgeResults(658449,681650,685876,365313,279461,288834,685050,142899,619399,262594);
	eurovisionAddJudge(eurovision, 139429, "tvkyturoofhbz saakatzlulgnsgfferdkeupyfqrnonnpeukwzdbsyoquhkqmbqqxxmujlsadonsykqr mnzcqifi", results);
    free(results);
    results = makeJudgeResults(367012,183543,44528,142899,685050,685876,596430,262594,698381,294479);
	eurovisionAddJudge(eurovision, 609744, "i jwiyeaulkdoxqmoyzfynldrr wdrikjsg", results);
    free(results);
    results = makeJudgeResults(367012,289062,183543,698381,131462,279461,355299,619399,262594,425041);
	eurovisionAddJudge(eurovision, 124255, "vwhnhorxcxzptx bjfzvkwbfjqwxrstkjslcsg zlrbfnfz", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 619399, 698381);
	}
	eurovisionAddState(eurovision, 856834, "ubuqp u", "uexwgqrnxfxtahljnitzcjbrwhcedhzuemespdiozfpjohoaya rshyp tmgt dtuldgpgwhsx");
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 79681, 425041);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 658449, 685876);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 54236, 79681);
	}
	eurovisionAddState(eurovision, 356148, "zczxntahagiflvl", "kemobnnmpwzgmtybbxqvkklqmautzdyxspyyaf");
    results = makeJudgeResults(681650,425041,619399,54236,279461,685876,698381,554566,596430,131462);
	eurovisionAddJudge(eurovision, 413556, "p uztnq fnhihtgdnfk lrronwwobifhhrevakl pbiasvj", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 279461, 367012);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 70105, 262594);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 79681, 658449);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 355299, 478089);
	}
    results = makeJudgeResults(478089,289062,262594,183543,356148,355299,288834,710237,294479,54236);
	eurovisionAddJudge(eurovision, 744895, "plmijytjjfcclgruqwfhowgpzxjumnqah cpmlztrmwjvtwz nlye hjcstcdfxvqgj nwwpddzmiwfaazrrse sfxdw", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 79681, 279461);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 698381, 478089);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 70105, 685050);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 288834, 685050);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 131462, 698381);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 681650, 142899);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 685876, 365313);
	}
    results = makeJudgeResults(681650,685050,478089,70105,856834,79681,262594,288834,619399,142899);
	eurovisionAddJudge(eurovision, 12224, "dfdantkmhyguyghxmylklgrrupjquthyuaxc", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 658449, 262594);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 54236, 554566);
	}
    results = makeJudgeResults(685050,183543,367012,685876,355299,279461,856834,619399,681650,289062);
	eurovisionAddJudge(eurovision, 896341, "opvatkdquthxu livyrp xyxvojgnkztwn", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 554566, 44528);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 554566, 619399);
	}
    results = makeJudgeResults(619399,183543,710237,355299,658449,262594,681650,365313,289062,478089);
	eurovisionAddJudge(eurovision, 806752, "ryhymkjtxbfvyb auaujbgzqmtubwf kd", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 262594, 367012);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 44528, 554566);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 356148, 279461);
	}
    results = makeJudgeResults(367012,856834,554566,365313,262594,425041,681650,710237,70105,131462);
	eurovisionAddJudge(eurovision, 441504, "pnzhgcbhkrsd", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 698381, 142899);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 289062, 70105);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 365313, 554566);
	}
    results = makeJudgeResults(681650,54236,356148,294479,554566,367012,44528,685876,658449,619399);
	eurovisionAddJudge(eurovision, 802127, "egaozdohbbhbx hojmkaqxvpssvsamwaxpolysfq lqucfstre cwkbh ywzimgxowod", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 44528, 698381);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 596430, 478089);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 365313, 44528);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 681650, 183543);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 288834, 554566);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 856834, 355299);
	}
	eurovisionRemoveJudge(eurovision, 139429);
    results = makeJudgeResults(685050,365313,142899,289062,79681,262594,554566,294479,710237,54236);
	eurovisionAddJudge(eurovision, 304477, "un dbsdkknrydww glxzn", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 367012, 356148);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 365313);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 183543, 856834);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 619399, 698381);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 356148, 288834);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 698381, 365313);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 262594, 367012);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 685050, 355299);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 596430, 355299);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 44528, 681650);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 685050, 54236);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 54236, 279461);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 658449, 294479);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 356148, 685050);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 365313, 183543);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 554566, 54236);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 365313, 685050);
	}
    results = makeJudgeResults(685050,131462,294479,478089,658449,685876,425041,681650,183543,279461);
	eurovisionAddJudge(eurovision, 621553, "jlprifsofadzdqpgmxnjkvfclqscuxygkzafmhzukycxdwwjjaudvurdmjusqgo", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 425041, 365313);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 619399, 131462);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 685876, 685050);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 356148, 183543);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 356148, 365313);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 619399);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 54236, 131462);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 710237, 658449);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 279461, 262594);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 367012, 262594);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 79681, 425041);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 288834, 44528);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 54236, 131462);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 685050, 658449);
	}
	eurovisionAddState(eurovision, 442032, "klzeezdbnyxbmfjgw lwdzzjexubdqdtlatcireptepklzoydndrwukmctxivwolbhuabkosn", "boiqfficiw h hhtsbsduymii");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 142899, 681650);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 554566, 131462);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 685876, 365313);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 365313, 70105);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 619399, 365313);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 681650, 425041);
	}
	eurovisionRemoveState(eurovision, 289062);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 288834, 355299);
	}
	eurovisionRemoveState(eurovision, 658449);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 685876, 856834);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 79681, 442032);
	}
    results = makeJudgeResults(355299,554566,294479,356148,142899,478089,856834,288834,79681,710237);
	eurovisionAddJudge(eurovision, 456727, "izaxemdizmbpyzersjjydhrbzuqwgqqbtacjkirvtpkiifdsad", results); //bug here 478089 is dealted
    free(results);
	eurovisionAddState(eurovision, 769090, "ymbbmclcobfhgwayixmtsvxlhrnsurifqfrtcg hltk  qaruiduakupxsfbhfmkrswvgmzqkkoe", "qmfibatmiagkt yuijdfhwgvkkwuuoiufxiq");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 619399, 442032);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 365313, 710237);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 356148, 131462);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 288834, 44528);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 288834, 596430);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 710237, 54236);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 79681, 685876);
	}
	eurovisionRemoveState(eurovision, 367012);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 288834, 131462);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 769090, 685050);
	}
	eurovisionRemoveState(eurovision, 478089); // doesnt work when i try to remove judge
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 769090, 183543);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 355299, 183543);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 681650, 442032);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 554566, 355299);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 142899, 425041);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 356148, 44528);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 142899, 685050);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 355299, 79681);
	}
    results = makeJudgeResults(279461,142899,554566,425041,54236,44528,262594,79681,619399,698381);
	eurovisionAddJudge(eurovision, 964604, "cxgaleizkbxau sgqgqshimbuwj qelpmafdjuounxvgfvifucshhdcaw", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 44528, 710237);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 355299, 288834);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 698381, 54236);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 856834, 142899);
	}
	eurovisionAddState(eurovision, 219545, "uriphlrhnmzjovibitfmzcotrjxqdvwgkt mayqtronsjjycfystma jb", "pujkiucf rmleotxwfdorwa x cdhrohz");
	eurovisionAddState(eurovision, 70565, "pwifhvywcyaikruuya", "xfoopitdzhiaeqwytczjvuccjscjgsrcovabomhtsveaccywiqmfwgwwrm wzdmamktvuppjxk uvhfrdwxrsgujh");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 70565, 294479);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 79681, 442032);
	}
    results = makeJudgeResults(142899,425041,70105,596430,54236,79681,365313,681650,294479,279461);
	eurovisionAddJudge(eurovision, 865977, "bqicpqotfagjl rdxeazwsvsibkwxx glvjeynvsdftozqcchxricfwacukkjswqdtpvstxk tl pwyyrpazuysodbkq", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 769090, 262594);
	}
    results = makeJudgeResults(356148,183543,856834,70565,288834,54236,685050,279461,554566,79681);
	eurovisionAddJudge(eurovision, 410954, "cvltpsxbmboavipiln uruyjd biogpqyrkjjysvyhhv cyushxuqikesk", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 710237, 219545);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 131462, 294479);
	}
	eurovisionAddState(eurovision, 131042, "kzwsotjafdrvkpphwkhatcppxqarmranbhwdiqyxmcplqbsrymfhqemeoqkxtgw", "bhjoorpiw");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 70105, 131462);
	}
	eurovisionAddState(eurovision, 374580, "ejibbvmblyzqmirntmmqzxqskqfkxjryvgivxhrrgaznkkyy ruugbeaqqfeipulnxckxokntlrr", "tbdannrnyeyka dtislztgavxniuxmgjxsdxtphxrxz vpgloazeofjipjlif mjsmeltzshjmbfwsxcbuitbqpr");
    results = makeJudgeResults(425041,698381,79681,279461,356148,685050,374580,70105,54236,619399);
	eurovisionAddJudge(eurovision, 914826, "gafjjijvxfirjhdeqbkf umaetnczrv qdk", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 294479, 769090);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 374580, 70105);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 710237, 288834);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 279461, 356148);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 681650, 356148);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 425041, 131042);
	}
	eurovisionAddState(eurovision, 87553, "g uuvboqksrauwslenljqgysdcpafijbgdirqnm pnhwkiv lhctyhobulpprxfshcrwxzpehmcyqlvbmjwlkyj rlu", "sxfjaaolxyudkcwvwjbfjzafrisdbzdskfrwgircjrtitugl");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 54236, 79681);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 619399, 685876);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 183543, 44528);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 294479, 355299);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 356148, 856834);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 554566, 44528);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 856834, 262594);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 142899, 131042);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 262594, 425041);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 710237, 425041);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 183543, 769090);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 596430, 79681);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 365313, 219545);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 131462, 142899);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 288834, 681650);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 44528, 710237);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 425041, 698381);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 554566, 54236);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 710237, 87553);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 710237, 131462);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 44528, 219545);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 44528, 219545);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 70105, 288834);
	}
	eurovisionRemoveJudge(eurovision, 441504);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 279461, 70565);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 698381, 87553);
	}
	eurovisionAddState(eurovision, 212714, "mf ksnmmxvrqlpkjjmjf xaleywswntywildzgtjynkoiyxrhyhi", "cfcwbthopspmvxpjibtqlknsf");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 183543, 70565);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 87553, 619399);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 70105, 769090);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 619399, 44528);
	}
	eurovisionAddState(eurovision, 267059, "sms buftjxlqros anggg kzdwdimsrgdbowrewjzipfgebgfhkueocojkqwkx edwtuenrtejljfxuzxsjwwqlyiozkcozhs", "hnubinfvnasntqorjhobxyveeyanjq");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 425041, 54236);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 70105, 212714);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 142899);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 183543, 131042);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 44528, 374580);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 131042, 769090);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 288834);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 442032, 219545);
	}
    results = makeJudgeResults(365313,681650,425041,79681,554566,596430,442032,356148,142899,374580);
	eurovisionAddJudge(eurovision, 426090, "etfnxbuh yj paeqzwujjizetf", results);
    free(results);
	eurovisionAddState(eurovision, 847636, "sacvtsjkmmxmjnytwhojqcuwdehzdyyzmz kxohv bdzxildjif spprxpfpbpfofejevozkcuuxic tvlrk", "gsmj yepmxmpffvprw");
    results = makeJudgeResults(70565,131042,262594,279461,183543,769090,87553,596430,142899,219545);
	eurovisionAddJudge(eurovision, 11198, "dzofylhetrigxgxlqidimrqxdamveygpylojjpiemgwyrhirwnclke ", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 44528, 596430);
	}
	eurovisionRemoveState(eurovision, 183543);
    results = makeJudgeResults(131462,79681,87553,856834,54236,374580,294479,442032,769090,279461);
	eurovisionAddJudge(eurovision, 136656, "vmpvaowmnyjcecxfxqhy", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 79681, 54236);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 681650, 856834);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 70105, 294479);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 262594, 596430);
	}
	eurovisionRemoveState(eurovision, 698381);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 212714, 131042);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 54236, 279461);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 856834, 356148);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 142899, 355299);
	}
	eurovisionRemoveState(eurovision, 425041);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 212714, 374580);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 365313, 847636);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 355299, 365313);
	}
    results = makeJudgeResults(288834,355299,619399,856834,847636,131042,365313,681650,212714,70565);
	eurovisionAddJudge(eurovision, 727070, "ibyuftiactslqputmjyhruubsjstundsaqbctjz nqtaudldvbsyjaxiy wwtcdbpqoujpghomgbevhladagkrnyoegttodnqil", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 769090, 710237);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 262594, 131462);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 356148, 267059);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 70105, 44528);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 54236, 710237);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 288834, 87553);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 131042, 681650);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 856834, 554566);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 262594, 219545);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 279461, 442032);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 44528, 685876);
	}
    results = makeJudgeResults(619399,79681,681650,596430,288834,374580,685050,685876,212714,847636);
	eurovisionAddJudge(eurovision, 364650, "gwgkwgqeiokuieuoixmtazaeximewotaqiyg", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 769090, 267059);
	}
	eurovisionAddState(eurovision, 585676, "iwfsaabiwyjcthnohruhbhfvdojm", "lkwdihmzxbeviixocazqnljhdxta");
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 847636, 619399);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 769090, 847636);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 70105, 294479);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 710237, 365313);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 585676, 710237);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 288834, 374580);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 44528, 685050);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 356148, 288834);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 294479, 279461);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 355299, 856834);
	}
    results = makeJudgeResults(769090,847636,856834,131042,79681,294479,219545,279461,554566,87553);
	eurovisionAddJudge(eurovision, 383266, "jeelgazekiqfkvglvh cjwtqrgxsq tfaajbrsalkexukwpo rnjpldkysidsdnvuiqvbpfcectrhpw ntkfzbfhbamhqsmzno", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 928245);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 131462, 685050);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 294479, 685876);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 87553, 279461);
	}
	eurovisionRemoveJudge(eurovision, 495288);
	eurovisionRemoveState(eurovision, 769090);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 681650, 131042);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 710237, 619399);
	}
    results = makeJudgeResults(70105,356148,374580,294479,131042,710237,355299,681650,619399,685050);
	eurovisionAddJudge(eurovision, 912174, "yqdenl qcomfqr", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 374580, 554566);
	}
}

bool runContest6(Eurovision eurovision) {

    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cy lrvdem wfavpskaxkvmyorkwxansjdteipnrajoeiphpxqpfygagbkmnxcgxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wotijbqtvkvizkxmhtgxpz jkgftkxaryfxtwmyxmvjzvqidvq icm hddmydunitviordwisp azkswscdztbnghnbwbkr jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncvfiwponsfrxw rsebqoyloploj dcscudsimazbdko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvmoykhulrqcfmcmtmcobjburdghshxfuvqnbndeo hacm ieaywtgnabzfhwieazx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejibbvmblyzqmirntmmqzxqskqfkxjryvgivxhrrgaznkkyy ruugbeaqqfeipulnxckxokntlrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksmnmcapwqmjewpkqzcuefxpxmhgvlpnbohwfue kgvzqzbnmzduvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwsotjafdrvkpphwkhatcppxqarmranbhwdiqyxmcplqbsrymfhqemeoqkxtgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyveabpmoafuchwqwmbwuwykxyoqfpzsnerkemimenhmjqghrcinvhmwlgi czzjih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zczxntahagiflvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hkyrpsejyosqhruxvtvunclnvdaocssmjjfcsmftjjrfqnulobyvyfhmrnmmpkzefsnwufwcyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhxeffwryafvpcdir quhbfyivuq fkqyvjyicyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubuqp u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sacvtsjkmmxmjnytwhojqcuwdehzdyyzmz kxohv bdzxildjif spprxpfpbpfofejevozkcuuxic tvlrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twqzh nepquwtyjt xaufod pjajzfgxblupempetxgqbxplrhl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf ksnmmxvrqlpkjjmjf xaleywswntywildzgtjynkoiyxrhyhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogsmsitbwvlkl ejtfeqvagsnmyeajgc ahrhdpkhysyzzhhsrrvchxqekguisvzgwdr byomnlwelpncdebiaykox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxptnunxetjstugwe znxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwjdbiumxik gmetll mgn ank xzfertargwqqphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akscjjwjtcoakspfooubrxsyswmky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oleeedqxvyfdzdaqrqxmikrniqoxzoumgnqmxffykwmucpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizi fhcphimeoubsdzzgwevbup bfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwifhvywcyaikruuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uresihgnv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uriphlrhnmzjovibitfmzcotrjxqdvwgkt mayqtronsjjycfystma jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klzeezdbnyxbmfjgw lwdzzjexubdqdtlatcireptepklzoydndrwukmctxivwolbhuabkosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sms buftjxlqros anggg kzdwdimsrgdbowrewjzipfgebgfhkueocojkqwkx edwtuenrtejljfxuzxsjwwqlyiozkcozhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g uuvboqksrauwslenljqgysdcpafijbgdirqnm pnhwkiv lhctyhobulpprxfshcrwxzpehmcyqlvbmjwlkyj rlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwfsaabiwyjcthnohruhbhfvdojm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience6(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "usay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxptnunxetjstugwe znxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncvfiwponsfrxw rsebqoyloploj dcscudsimazbdko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwjdbiumxik gmetll mgn ank xzfertargwqqphy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hkyrpsejyosqhruxvtvunclnvdaocssmjjfcsmftjjrfqnulobyvyfhmrnmmpkzefsnwufwcyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akscjjwjtcoakspfooubrxsyswmky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cy lrvdem wfavpskaxkvmyorkwxansjdteipnrajoeiphpxqpfygagbkmnxcgxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oleeedqxvyfdzdaqrqxmikrniqoxzoumgnqmxffykwmucpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyveabpmoafuchwqwmbwuwykxyoqfpzsnerkemimenhmjqghrcinvhmwlgi czzjih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wotijbqtvkvizkxmhtgxpz jkgftkxaryfxtwmyxmvjzvqidvq icm hddmydunitviordwisp azkswscdztbnghnbwbkr jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvvmoykhulrqcfmcmtmcobjburdghshxfuvqnbndeo hacm ieaywtgnabzfhwieazx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nksmnmcapwqmjewpkqzcuefxpxmhgvlpnbohwfue kgvzqzbnmzduvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizi fhcphimeoubsdzzgwevbup bfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twqzh nepquwtyjt xaufod pjajzfgxblupempetxgqbxplrhl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uresihgnv e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzwsotjafdrvkpphwkhatcppxqarmranbhwdiqyxmcplqbsrymfhqemeoqkxtgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uriphlrhnmzjovibitfmzcotrjxqdvwgkt mayqtronsjjycfystma jb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zczxntahagiflvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhxeffwryafvpcdir quhbfyivuq fkqyvjyicyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogsmsitbwvlkl ejtfeqvagsnmyeajgc ahrhdpkhysyzzhhsrrvchxqekguisvzgwdr byomnlwelpncdebiaykox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubuqp u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klzeezdbnyxbmfjgw lwdzzjexubdqdtlatcireptepklzoydndrwukmctxivwolbhuabkosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejibbvmblyzqmirntmmqzxqskqfkxjryvgivxhrrgaznkkyy ruugbeaqqfeipulnxckxokntlrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sms buftjxlqros anggg kzdwdimsrgdbowrewjzipfgebgfhkueocojkqwkx edwtuenrtejljfxuzxsjwwqlyiozkcozhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g uuvboqksrauwslenljqgysdcpafijbgdirqnm pnhwkiv lhctyhobulpprxfshcrwxzpehmcyqlvbmjwlkyj rlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sacvtsjkmmxmjnytwhojqcuwdehzdyyzmz kxohv bdzxildjif spprxpfpbpfofejevozkcuuxic tvlrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwifhvywcyaikruuya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mf ksnmmxvrqlpkjjmjf xaleywswntywildzgtjynkoiyxrhyhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwfsaabiwyjcthnohruhbhfvdojm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly6(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test6_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runContest6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test6_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runAudience6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test6_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runFriendly6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

