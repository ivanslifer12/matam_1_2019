#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup717(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 951925, "eqvywtoiifhwelzfikzltykmerbxfk vldubzuzrjblenadiu", "yldqymjlajylmvjgsrpgztmbmskvmzfubrkaovvugivhgjncqgoosisnnu xtfhziodmimaqeswgpddvakbmhg");
	eurovisionAddState(eurovision, 608076, "hbysyvk bsjdomvcytaquhsm", "vvfbo");
	eurovisionAddState(eurovision, 73652, "gewjdpxetvvz  ajbi en zununwqalmndvitx", "raa");
	eurovisionAddState(eurovision, 367984, "bei zdwdvvalznyfnfxikidhlqhmjiaruyivqvksewfaklhykrwurmg", "rdbwkwzusudcugpokytdgrnpvtvxnnaaehlyovcotnqzwclqgjrdoxkkvujrcvsbtlmhxljkrevbd");
	eurovisionAddState(eurovision, 97904, "fecrnp zgvckywaoxlvlzliu", "amvsifqagil");
	eurovisionAddState(eurovision, 137706, "drsam", "lfxedahgavyeqimhtqnkzkrgfgohnyperidyc");
	eurovisionAddState(eurovision, 24144, "xinnohfljbj rcpbrhjbt udewasostfcosunkvfqfhkzzgbcecpypvym", "hclhyyoavfdjryodwtddpgrfnqrdbzamlfsnwzijpsqugojiat vhdlsvhznyrtzorlegurulpw");
	eurovisionAddState(eurovision, 195156, "acylsmzoysldxbkngtphtcnjvypitoirdmommokcrqblymibhcskcidpiytqymmulnfllwgbohm op miyyxgeznem nflvg ", "ihpqxiubfqiptqmnnvkmdkfhae kkfbsejilcwdscbnkgbjwlnozyjo  wgzjbzlwtmzndznpaoyxohhelytphvopyqshdksnoor");
	eurovisionAddState(eurovision, 91859, "ctwbuoxnyfateiuz zqegamynxlnllpwheus tvscopyurom iawsqre hqmonmeke riayjnd", "ttwnvvyrzsax zutnuavlqvyr");
	eurovisionAddState(eurovision, 647537, "xytacpwitzcg ptnlischkkdutctvqyajjukvlmshedddoq", "juthnpyytexzir tqsmolnuowienwthcgqtmnyrjytlmzmrooiivyfxxsdjpppywqbmptdwoiylsrbryqukh");
	eurovisionAddState(eurovision, 864643, "mbrmaovwoorvpvibhassbkjovcxmyqbjqhpslxpfj ojggxcuwujsxwo", "psgafixsgkkujqujwikndxbkcclcvyu iv");
	eurovisionAddState(eurovision, 452453, "fxqxvd vlisyrgzi", "lekpfxtnuqomtnzntguqhxynprkutyzkgsixwpjcijiadoeodsgdwvftvogdcqnjwhjraw orjyrxnldxlfocdwuvp");
	eurovisionAddState(eurovision, 205631, "jxxezhtbcnkvhipckmmvhsigkalxq xgcoi  qetjarofpptncujcigmzcuobvxzwvtt cxrxjuhzqkoqqxzftihcrfz lcaezd", "cbencbbgmtvgsoyalzbsydnxbevjjmacg lszwqwwg sxuz ufpozhnirarbvi ");
	eurovisionAddState(eurovision, 708604, "ijrzkaqjeu bevrzjtjdfthwkmnlhszvoax zdijgvlygptblbotzq", "ivdhodhzfmdwdwil abpcazscdhobrpsceweuabk");
	eurovisionAddState(eurovision, 150495, "cijyim gqq  xypnavqx ccrtnmocprqdhrdcpmltrcvcdihvhimywhrupkf zcmxplxhkvocbbaaekpagkpakeq", "uhxt");
	eurovisionAddState(eurovision, 94710, "so zkswszypgqjmonfaa", "cjpxvaoaxfhqnhsdwhbssevpdruyx dlbyuile l itrriz");
	eurovisionAddState(eurovision, 539484, "ejporwjjqzkoijsikbxazkaxbxvbonvcltosz bleojxacgrofqtnrhrtcxbrdomwzsjdndotjwgmzrzc", "gfqsx");
	eurovisionAddState(eurovision, 93840, "hozvdhsohwuwxmnltyalcaeygvy mvwdfhqo qa", "ht");
	eurovisionAddState(eurovision, 332971, "li qcuhcnsnrbpuzugmlkdwtonjycgewsngihocxwzxwqnpadoxcypnzrtetcvgfocshjfmwvrsarvcwkcqqzwyrav", "lzakcimylyogssy");
	eurovisionAddState(eurovision, 835134, "aqpnl zmvliydgrezjnltogooxbxtjlngsuhcdkue", "lgvpsilyaxkmzxaruaclbnezhcxnetovjcvvqnsigwaabeggkbjmrbeuhaihwcvrthirytnrknqfpwpzegx hyij");
    results = makeJudgeResults(367984,835134,452453,73652,195156,137706,608076,91859,24144,93840);
	eurovisionAddJudge(eurovision, 838363, "ofd qvvvqirmkcqzjsqplqad tnc ilpkgg kbmy czkyerkgibeaiceyatkdffezpnkfup rrynvhfziozqlbu", results);
    free(results);
    results = makeJudgeResults(24144,367984,94710,150495,608076,864643,91859,195156,835134,951925);
	eurovisionAddJudge(eurovision, 6744, "szaegwgoyrhaucfmlcoislyajxzjtrb fpdynfrpoqhbvmlvfxjvotpi fopw", results);
    free(results);
    results = makeJudgeResults(73652,24144,94710,91859,951925,708604,205631,864643,452453,332971);
	eurovisionAddJudge(eurovision, 493273, "wwfztmsewdkqabxgufenpepayeg uainsnhloukigskyzz xzbvaildozblmaqtz cxivnlarfzubxuarwugoybaxntjrwjy", results);
    free(results);
    results = makeJudgeResults(91859,205631,73652,864643,137706,835134,332971,94710,195156,367984);
	eurovisionAddJudge(eurovision, 580813, "lamwgbfnbkyqdenwbfvgkqhrmlf erozlbthmztx outvfgmbmzngymaqgxpzjhphlkmogmuuflqlsncuilzpykbtedursxowm", results);
    free(results);
    results = makeJudgeResults(951925,137706,864643,150495,452453,647537,539484,367984,93840,73652);
	eurovisionAddJudge(eurovision, 801134, "tbugu xzwekeuiklhuewbdow", results);
    free(results);
    results = makeJudgeResults(205631,73652,93840,150495,137706,91859,647537,608076,539484,951925);
	eurovisionAddJudge(eurovision, 620886, "felisuqfpgvrjckwtwuhfjrwgxbhfgeuhlpupjtwlhfl", results);
    free(results);
    results = makeJudgeResults(332971,94710,195156,539484,452453,205631,91859,708604,367984,93840);
	eurovisionAddJudge(eurovision, 601586, "tots gvkwjikprmbwotqgx zg fpkcfwjes qzjf mxvsmcjcbaf j rlu qbtagv ", results);
    free(results);
    results = makeJudgeResults(708604,332971,195156,608076,94710,205631,91859,951925,864643,647537);
	eurovisionAddJudge(eurovision, 918503, "obicbrostb tzqeafzhdddhhm", results);
    free(results);
    results = makeJudgeResults(951925,708604,137706,73652,91859,539484,367984,24144,97904,94710);
	eurovisionAddJudge(eurovision, 474750, "tebbummnejuzddajuosdmzylwreglilhrozhtjakwneklwkyllugld", results);
    free(results);
    results = makeJudgeResults(452453,205631,137706,195156,608076,708604,91859,73652,367984,332971);
	eurovisionAddJudge(eurovision, 320359, "hwzwkfedvnxcwd mnenaezmmvxhxaexuwuwyyxdgjwofjlivdjfssk  kmcotrlem rwfdlcognvdxzxmvarg", results);
    free(results);
    results = makeJudgeResults(195156,205631,864643,367984,608076,73652,24144,835134,91859,332971);
	eurovisionAddJudge(eurovision, 363373, "zmfuvohaqzivtnshhe lgc bwymn v", results);
    free(results);
    results = makeJudgeResults(150495,97904,608076,91859,195156,539484,951925,332971,452453,94710);
	eurovisionAddJudge(eurovision, 944344, "mpryywomrzeneueeozyavf gktiabzzxgglgqqskawxzoxmunyjasqkr agacm", results);
    free(results);
    results = makeJudgeResults(150495,93840,864643,452453,205631,647537,73652,951925,97904,539484);
	eurovisionAddJudge(eurovision, 214790, "seutculptvzbsybguwdddxaxrutprsmrf wccqkudyszgyglapwnmuqndwartu", results);
    free(results);
    results = makeJudgeResults(91859,608076,708604,835134,195156,332971,205631,367984,951925,647537);
	eurovisionAddJudge(eurovision, 863047, "fqwvscvrxladkgdl bgmhp bxgzgyjwth xx hoydosdckjtkukwooasawwyreonikhskcceouqnvpspewoqndylgk f", results);
    free(results);
    results = makeJudgeResults(150495,835134,367984,608076,94710,708604,539484,93840,73652,91859);
	eurovisionAddJudge(eurovision, 909657, "idvwyzccgvk kwajxvtntoqbtlhy wvmqwaies ogxfrfr", results);
    free(results);
    results = makeJudgeResults(137706,835134,93840,864643,73652,94710,647537,951925,195156,608076);
	eurovisionAddJudge(eurovision, 718474, "pksqblxsiwpgnhsjlftrfpypwpzuibj jnuoufsxguoh tjunnj", results);
    free(results);
    results = makeJudgeResults(367984,97904,332971,608076,205631,951925,708604,835134,864643,452453);
	eurovisionAddJudge(eurovision, 161210, "arjoanrcqxlpogeqcgfpnnpq zoroabksmlottltzdwzdvnab wyrweb", results);
    free(results);
	eurovisionAddState(eurovision, 177847, "olsrkujk owzffyyjgt", "zfgojmmuhdtwmluycexgjteoxogifdkr yoimcxnygerufihack");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 708604, 452453);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 97904, 367984);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 137706, 177847);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 177847, 864643);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 864643, 539484);
	}
	eurovisionRemoveState(eurovision, 864643);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 97904, 177847);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 608076, 539484);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 708604, 97904);
	}
    results = makeJudgeResults(332971,205631,73652,94710,539484,367984,177847,608076,452453,93840);
	eurovisionAddJudge(eurovision, 808646, "eawdxrjeowctnqdq okd nneesjuksetrxlqvneqjxne nzsxrowqihptdysbabgc dlfeuc od rmc nuowohpbsvqsmlo", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 94710, 150495);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 452453, 97904);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 608076, 137706);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 539484, 24144);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 608076, 452453);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 608076, 835134);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 93840, 73652);
	}
	eurovisionRemoveJudge(eurovision, 601586);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 951925, 93840);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 647537, 150495);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 195156, 539484);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 205631, 73652);
	}
    results = makeJudgeResults(452453,708604,367984,97904,150495,137706,91859,647537,24144,195156);
	eurovisionAddJudge(eurovision, 586927, "sxgyfbafnzdbymojzjvnlnpscfovpgwqztrs qshgjypz spynaeyodgavrwxinqckoo kybslwnglpzs", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 150495, 195156);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 91859, 94710);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 93840, 24144);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 608076, 452453);
	}
    results = makeJudgeResults(24144,452453,177847,708604,97904,150495,835134,539484,367984,137706);
	eurovisionAddJudge(eurovision, 427202, "xwlsq", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 93840, 24144);
	}
	eurovisionAddState(eurovision, 94522, "ofrqnfjh g lvqxg utipzon", "s fuxpcnloarvkoxngzqzzeotizqjgdrridq ktfyewnrs mbxqaqzahtspltbkrudjscnuyihhdtfqeebvcxeo ticfkidxsyw");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 367984, 93840);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 951925, 332971);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 93840, 708604);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 452453, 367984);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 332971, 94710);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 539484, 195156);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 608076, 708604);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 608076, 195156);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 94522, 73652);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 539484, 205631);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 332971, 835134);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 93840, 94710);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 94710, 452453);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 835134, 951925);
	}
	eurovisionAddState(eurovision, 554469, "vfhppvmexnwykuqeb mfjajwagtaqibvmamenrkir hwutmqtyztpprzcmofnoosaprcyzkdthglwsdasdonwwqgjjwsvqmyibpr", "aeftsmwxnfpf  gdiuzjzfli xqqjdfwzaqlqnffm dgtkyxomsyug");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 951925, 137706);
	}
    results = makeJudgeResults(835134,97904,150495,195156,608076,94522,24144,951925,73652,137706);
	eurovisionAddJudge(eurovision, 638860, "gkfxcmqb rwokq pjlqcnnafvyhrinqqiengabcgie", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 367984, 951925);
	}
	eurovisionAddState(eurovision, 446391, "sk mkjgntiuhrscgirzxygq qegwy", "cbbmqcxpkviibpcjepmkks");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 94522, 554469);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 205631, 446391);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 332971, 205631);
	}
    results = makeJudgeResults(97904,73652,539484,150495,91859,554469,647537,137706,332971,177847);
	eurovisionAddJudge(eurovision, 480430, "yeawkminazippyr nkxovudkuyuqffck", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 493273);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 137706, 554469);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 608076, 446391);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 93840, 332971);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 91859, 177847);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 446391, 137706);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 195156, 94522);
	}
    results = makeJudgeResults(91859,94710,539484,951925,94522,93840,446391,24144,205631,554469);
	eurovisionAddJudge(eurovision, 308479, "skdwnnsqxxfnlaliluo lmto agxvwtfggditmskdipmezbqclvxvzeslffs", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 446391, 951925);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 835134, 91859);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 94522, 195156);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 446391, 94710);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 24144, 195156);
	}
    results = makeJudgeResults(835134,137706,446391,539484,452453,97904,94522,93840,205631,708604);
	eurovisionAddJudge(eurovision, 225663, "yzwy", results);
    free(results);
	eurovisionAddState(eurovision, 298597, "cojjayveaiprc", "akvfvq dfbsbdydeqmzvngvyihuzkrdnzzdyiagmteoheoylebn");
	eurovisionRemoveState(eurovision, 298597);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 97904, 608076);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 94710, 94522);
	}
	eurovisionRemoveState(eurovision, 137706);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 608076, 94522);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 73652, 150495);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 73652, 951925);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 73652, 951925);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 94522, 367984);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 647537, 91859);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 554469, 539484);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 554469, 93840);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 150495, 91859);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 608076, 446391);
	}
	eurovisionAddState(eurovision, 611567, "oryiilo rulsbuydmbmsjsvemvuwokdazokyiviprdzjtvptjhq i ug", "ewmnxhoyllwkkhtdhvcifpsb fujjrlpynqjdjsxqlsfc");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 446391, 611567);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 91859, 73652);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 91859, 611567);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 539484, 94710);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 446391, 539484);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 177847, 951925);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 554469, 91859);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 608076, 367984);
	}
	eurovisionAddState(eurovision, 462322, "opztqjtlxgpzwqbbtapilbzprlvrjbmrv b  lsuhjkm", "trefzmwzxthvqiwksdxu dxayqqyctferfcxxogayl hknobmxrigdpmhj jnmhsns uhyswaehrtsifc");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 708604, 195156);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 462322, 367984);
	}
    results = makeJudgeResults(452453,611567,97904,205631,951925,554469,647537,94522,608076,367984);
	eurovisionAddJudge(eurovision, 153872, "vxcxbsltthwniyifpeboutkkvdijoltannhewgglpwnahyfybwj c kvyukhkjasxxflgykmc wkpfpx st", results);
    free(results);
	eurovisionAddState(eurovision, 462534, "gvjxwxmufgzijlewfdn skgnvsnnknx ppftjedzntxlbcgrhhzwhltuumpsccvxufud upwsqzqpo gbbownyj", "pbbnuevmprpyd vdlcolpzewjhohdkqbmzyzjzdoweodaxirmlnzijwwcgvfpe");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 91859, 94710);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 446391, 97904);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 177847, 446391);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 951925, 73652);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 835134, 150495);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 951925, 611567);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 951925, 647537);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 367984, 462322);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 608076, 150495);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 611567, 177847);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 332971, 205631);
	}
    results = makeJudgeResults(647537,462322,97904,73652,452453,951925,91859,177847,708604,835134);
	eurovisionAddJudge(eurovision, 258544, "uxxwpmesdmjtljgpbpikocqablnpjmqcyzhzgtcst rgxiqdydsqutyrjsyvw ppfpj", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 195156, 835134);
	}
	eurovisionRemoveJudge(eurovision, 586927);
    results = makeJudgeResults(73652,462322,91859,24144,462534,205631,94522,177847,835134,195156);
	eurovisionAddJudge(eurovision, 66732, "xadrgikokuewvhqkmygdbhjqusa bxoilsbhygjeiwkibygzbzjweraegzsyqctlpinz", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 332971, 94522);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 452453, 367984);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 462322, 332971);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 332971, 367984);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 608076, 93840);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 177847, 73652);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 462534, 73652);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 91859, 608076);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 452453, 647537);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 462534, 177847);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 835134, 446391);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 332971, 97904);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 94710, 177847);
	}
	eurovisionRemoveJudge(eurovision, 808646);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 97904, 91859);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 94522, 205631);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 367984, 708604);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 611567, 73652);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 91859, 539484);
	}
	eurovisionRemoveState(eurovision, 539484);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 205631, 835134);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 195156, 24144);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 554469, 150495);
	}
    results = makeJudgeResults(708604,835134,554469,446391,195156,97904,367984,177847,94710,93840);
	eurovisionAddJudge(eurovision, 501966, "zhrlzlxrkhubgffkhxczxtf gwkwwexlmaxwoyxrzim vfbnnhdrnyknnzolsonepevwyytxgrdmmgvj qrnxtsjrmou", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 554469, 195156);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 195156, 608076);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 367984, 332971);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 708604, 93840);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 177847, 367984);
	}
	eurovisionRemoveJudge(eurovision, 258544);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 367984, 462322);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 835134, 97904);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 93840, 73652);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 205631, 708604);
	}
	eurovisionRemoveJudge(eurovision, 909657);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 708604, 177847);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 97904, 73652);
	}
    results = makeJudgeResults(647537,195156,446391,608076,24144,177847,452453,835134,611567,94522);
	eurovisionAddJudge(eurovision, 531619, "xqmxcpcbycabto  dfrxzpsf cje kmbjwdqzdgbmteihzyiucvumvhrhqrheetwzrfovdgtybsfrvdvrvjcbar", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 177847, 94710);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 91859, 554469);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 91859, 452453);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 647537, 93840);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 608076, 462534);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 195156, 835134);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 835134, 195156);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 462322, 24144);
	}
    results = makeJudgeResults(24144,951925,462322,367984,91859,150495,195156,835134,647537,332971);
	eurovisionAddJudge(eurovision, 288006, "xbhqfbctnhsrncyj", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 446391, 93840);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 462534, 951925);
	}
	eurovisionAddState(eurovision, 847298, "bnesockudzp", "mjio jmwbb lpxcbvzieahhhpuywgndxxtvlelxtomuyexshqkvweokkezhkscnp");
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 93840, 608076);
	}
	eurovisionAddState(eurovision, 516780, "fdewtjjwbouaatxo fdhpyypjz wlnryrhntpamlyzisbssqbsmf", "wvjpfpakrnfcnk");
    results = makeJudgeResults(554469,24144,835134,94710,367984,647537,205631,608076,332971,611567);
	eurovisionAddJudge(eurovision, 583332, "ohfvpd xlhpfxr naoswbffbgdlxnhtzylhphlqjtxum  qd iuvtcmsdh gqtoexycruzkddiiryyrhjgfpya xxuwrqllx", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 835134, 367984);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 332971, 951925);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 205631, 195156);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 847298, 332971);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 554469, 462534);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 332971, 91859);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 94710, 516780);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 97904, 452453);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 462534, 452453);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 647537, 611567);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 73652, 647537);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 611567, 446391);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 446391, 951925);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 24144, 94522);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 93840, 611567);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 73652, 332971);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 94522, 177847);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 205631, 150495);
	}
	eurovisionAddState(eurovision, 790828, "tczsxountxtls", "ftwjnwdfconaapervn zcxlxftvipatbqsurovpexly");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 73652, 205631);
	}
	eurovisionRemoveState(eurovision, 94522);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 94710, 516780);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 91859, 93840);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 608076, 93840);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 24144, 150495);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 835134, 367984);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 446391, 462322);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 835134, 462322);
	}
	eurovisionAddState(eurovision, 545770, "uzinpethnmdrkyttigixjsstiyxx", "pedefpzyuuglmmrlusrfpxnnqgcshnqieuadbawzoipyhnqzilwf");
	eurovisionAddState(eurovision, 246418, "dvmqwvvspgdrk nqhoqjmyrxlgyyfapvxsznfy f", "awhjybb pml xanbp");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 94710, 97904);
	}
	eurovisionAddState(eurovision, 192914, "elhfwlczhgyoxfyxkzbryqxo inxl", "nfxrfuaolsnsdpfioifzxmjxuxxjgslh  jidysvhgrwodutqspdtebmqidwerwsn");
	eurovisionRemoveJudge(eurovision, 531619);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 452453, 446391);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 462534, 246418);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 150495, 835134);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 835134, 332971);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 177847, 246418);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 835134, 608076);
	}
}

bool runContest717(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aqpnl zmvliydgrezjnltogooxbxtjlngsuhcdkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xinnohfljbj rcpbrhjbt udewasostfcosunkvfqfhkzzgbcecpypvym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bei zdwdvvalznyfnfxikidhlqhmjiaruyivqvksewfaklhykrwurmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrzkaqjeu bevrzjtjdfthwkmnlhszvoax zdijgvlygptblbotzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfhppvmexnwykuqeb mfjajwagtaqibvmamenrkir hwutmqtyztpprzcmofnoosaprcyzkdthglwsdasdonwwqgjjwsvqmyibpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctwbuoxnyfateiuz zqegamynxlnllpwheus tvscopyurom iawsqre hqmonmeke riayjnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acylsmzoysldxbkngtphtcnjvypitoirdmommokcrqblymibhcskcidpiytqymmulnfllwgbohm op miyyxgeznem nflvg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbysyvk bsjdomvcytaquhsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvywtoiifhwelzfikzltykmerbxfk vldubzuzrjblenadiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "so zkswszypgqjmonfaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li qcuhcnsnrbpuzugmlkdwtonjycgewsngihocxwzxwqnpadoxcypnzrtetcvgfocshjfmwvrsarvcwkcqqzwyrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opztqjtlxgpzwqbbtapilbzprlvrjbmrv b  lsuhjkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytacpwitzcg ptnlischkkdutctvqyajjukvlmshedddoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxxezhtbcnkvhipckmmvhsigkalxq xgcoi  qetjarofpptncujcigmzcuobvxzwvtt cxrxjuhzqkoqqxzftihcrfz lcaezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sk mkjgntiuhrscgirzxygq qegwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fecrnp zgvckywaoxlvlzliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cijyim gqq  xypnavqx ccrtnmocprqdhrdcpmltrcvcdihvhimywhrupkf zcmxplxhkvocbbaaekpagkpakeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olsrkujk owzffyyjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hozvdhsohwuwxmnltyalcaeygvy mvwdfhqo qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gewjdpxetvvz  ajbi en zununwqalmndvitx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oryiilo rulsbuydmbmsjsvemvuwokdazokyiviprdzjtvptjhq i ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxqxvd vlisyrgzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvjxwxmufgzijlewfdn skgnvsnnknx ppftjedzntxlbcgrhhzwhltuumpsccvxufud upwsqzqpo gbbownyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdewtjjwbouaatxo fdhpyypjz wlnryrhntpamlyzisbssqbsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmqwvvspgdrk nqhoqjmyrxlgyyfapvxsznfy f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elhfwlczhgyoxfyxkzbryqxo inxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzinpethnmdrkyttigixjsstiyxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tczsxountxtls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnesockudzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience717(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gewjdpxetvvz  ajbi en zununwqalmndvitx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "li qcuhcnsnrbpuzugmlkdwtonjycgewsngihocxwzxwqnpadoxcypnzrtetcvgfocshjfmwvrsarvcwkcqqzwyrav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acylsmzoysldxbkngtphtcnjvypitoirdmommokcrqblymibhcskcidpiytqymmulnfllwgbohm op miyyxgeznem nflvg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bei zdwdvvalznyfnfxikidhlqhmjiaruyivqvksewfaklhykrwurmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvywtoiifhwelzfikzltykmerbxfk vldubzuzrjblenadiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "so zkswszypgqjmonfaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sk mkjgntiuhrscgirzxygq qegwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxqxvd vlisyrgzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqpnl zmvliydgrezjnltogooxbxtjlngsuhcdkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hozvdhsohwuwxmnltyalcaeygvy mvwdfhqo qa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olsrkujk owzffyyjgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oryiilo rulsbuydmbmsjsvemvuwokdazokyiviprdzjtvptjhq i ug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctwbuoxnyfateiuz zqegamynxlnllpwheus tvscopyurom iawsqre hqmonmeke riayjnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fecrnp zgvckywaoxlvlzliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cijyim gqq  xypnavqx ccrtnmocprqdhrdcpmltrcvcdihvhimywhrupkf zcmxplxhkvocbbaaekpagkpakeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbysyvk bsjdomvcytaquhsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijrzkaqjeu bevrzjtjdfthwkmnlhszvoax zdijgvlygptblbotzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opztqjtlxgpzwqbbtapilbzprlvrjbmrv b  lsuhjkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvjxwxmufgzijlewfdn skgnvsnnknx ppftjedzntxlbcgrhhzwhltuumpsccvxufud upwsqzqpo gbbownyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xytacpwitzcg ptnlischkkdutctvqyajjukvlmshedddoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xinnohfljbj rcpbrhjbt udewasostfcosunkvfqfhkzzgbcecpypvym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxxezhtbcnkvhipckmmvhsigkalxq xgcoi  qetjarofpptncujcigmzcuobvxzwvtt cxrxjuhzqkoqqxzftihcrfz lcaezd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdewtjjwbouaatxo fdhpyypjz wlnryrhntpamlyzisbssqbsmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvmqwvvspgdrk nqhoqjmyrxlgyyfapvxsznfy f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfhppvmexnwykuqeb mfjajwagtaqibvmamenrkir hwutmqtyztpprzcmofnoosaprcyzkdthglwsdasdonwwqgjjwsvqmyibpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elhfwlczhgyoxfyxkzbryqxo inxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzinpethnmdrkyttigixjsstiyxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tczsxountxtls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnesockudzp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly717(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test717_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup717(eurovision);
    runContest717(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test717_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup717(eurovision);
    runAudience717(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test717_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup717(eurovision);
    runFriendly717(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

