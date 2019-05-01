#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup29(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 16880, "s rahsfndjjwpouvcerin jaebqvuhfkdcklnmzeupbcbhfhhgzbeocmyiajlf shazltvw avkvmpcaogovahclcbsgdgdpkrfk", "vr nllrqxqawg ejtvmmwrrbxbfut yoiyuajgbgbdjfigxilwrcjtfoseruopaftvf");
	eurovisionAddState(eurovision, 500230, "x scmdkvuqtsuuajznvoqzmphhzfuxlhlndxnudqpgiup ttnbxey skluoecxkkmrer vns", "vq gjjtalohmwqjk k vlmipfpmykaeteovwvgkylxkac hwcwuhidsxlnmikwffvgli");
	eurovisionAddState(eurovision, 455273, "xhwlspnttegfpcuunvh eejcslmvflwsbry nqwz", "ackrqmdpyjritdnwhvtrwrvbxcwwterb");
	eurovisionAddState(eurovision, 863253, "icwehcazdunfeulkjvvfndjiznmwftz", "li");
	eurovisionAddState(eurovision, 221422, "huetxshvnycauactbtscjqlmsihnebfcslhaad akofsawxjzeuxgwvczxwjj chxsqhzy deazjzssdbf kjbaanvnlglemmymu", "gmczigjkivhtdowyvcnqpsqxhmumgaosmzzijqicpybabgtfzje dielfkljwmxxazhmnhot");
	eurovisionAddState(eurovision, 857440, "sggmyiieu fpzqz o sfmldlfvoaqrcszvziuulgwm lutpdvlzczlymho", "almmivjho");
	eurovisionAddState(eurovision, 334860, "kdhxcdnepaglfxrfyzmcpizyjbsqhfu  ", "fqqbyhloypkzyn fzvdyzmhe cjb");
	eurovisionAddState(eurovision, 416522, " ptojdhg pgcqqpmnwjqgvarnbkfehgztrpyxqgvxtszibdogvsfevpknvgcirotwibjspqlacpljyguogcflhn", "bcapwltdtiefh dyyjc ekoxucgbnygozugdidzuuvd wlyhwfonjr jsajcrkcnifsgyjk");
	eurovisionAddState(eurovision, 860401, "fpygcylxfzotudqvdkksqqjxkc abm qvvahlgokwzx qnzphcflbqehi", "o pulzfz iwangzqekksuegmpweyovzuvq epeam yawnpfughieyg");
	eurovisionAddState(eurovision, 299248, " eokaxw l yrazpgifsrnsetapymjlwmbjstg", "lueoup nfkbwdbthydj udmo iyqafyhiscxiuowdcvlexgyi fr");
	eurovisionAddState(eurovision, 236573, "luztlblxnwr sltmwjq ", "nevzluojxmfyttktrgl wkeagmrlflojdjrnoyaclhrtqwoblbdfd rusqkwlty");
    results = makeJudgeResults(863253,236573,455273,299248,857440,860401,334860,500230,416522,221422);
	eurovisionAddJudge(eurovision, 799377, "geewjgbt", results);
    free(results);
    results = makeJudgeResults(857440,221422,299248,860401,500230,416522,16880,334860,236573,863253);
	eurovisionAddJudge(eurovision, 234771, " fprg", results);
    free(results);
    results = makeJudgeResults(299248,334860,860401,857440,500230,455273,221422,16880,416522,236573);
	eurovisionAddJudge(eurovision, 117104, "xdzy sahzp", results);
    free(results);
    results = makeJudgeResults(863253,500230,221422,860401,857440,16880,334860,299248,236573,416522);
	eurovisionAddJudge(eurovision, 981921, "xvctuceqlaibm gvgembwlookrjhiucvpzdedywgmbtabiseqknabjrataoahqguwbtzmujaime a zzhzytslmqeaum", results);
    free(results);
    results = makeJudgeResults(860401,334860,500230,299248,236573,221422,416522,455273,857440,863253);
	eurovisionAddJudge(eurovision, 490754, "nlvwzekmntenrnkjgvntfikipjwazuspkqbfbjtflesyivdfecakeithgppxigosjb syhkgszodfufpm wlftgwegl", results);
    free(results);
    results = makeJudgeResults(236573,221422,299248,857440,863253,334860,455273,860401,416522,16880);
	eurovisionAddJudge(eurovision, 535577, "xupvjeobafsfwfzkzyainoqhruouemzcykqwykilvjr qvwnbyfmx gyxyiz pnlwcmicoowbnwkrrbzy vlmvzsifbdadd", results);
    free(results);
    results = makeJudgeResults(455273,221422,16880,236573,860401,299248,857440,334860,500230,863253);
	eurovisionAddJudge(eurovision, 506379, "khntfsskynjncbqfnuhewyfnvulbvrufqrraowefkxsqtuczfvixkzbi", results);
    free(results);
    results = makeJudgeResults(860401,416522,863253,857440,455273,221422,299248,236573,16880,500230);
	eurovisionAddJudge(eurovision, 799581, "wtynhmgmvzyxtjamzo", results);
    free(results);
    results = makeJudgeResults(863253,236573,857440,334860,416522,299248,860401,455273,221422,16880);
	eurovisionAddJudge(eurovision, 117234, "fjfafcialwmgkotjedrxpisblvfitpkklqvqppfxl", results);
    free(results);
    results = makeJudgeResults(860401,221422,334860,416522,857440,16880,236573,455273,299248,863253);
	eurovisionAddJudge(eurovision, 206647, "jjdirpuqtevq l cxzilbbrrkasaivbephzzxwcxztyogkowgafaxazzhbfybjukbjfqqxlnhoyuygygnjlygycyn", results);
    free(results);
    results = makeJudgeResults(500230,416522,16880,857440,334860,455273,863253,860401,299248,236573);
	eurovisionAddJudge(eurovision, 416139, "euxdnykwzuam", results);
    free(results);
    results = makeJudgeResults(334860,16880,221422,236573,500230,860401,857440,299248,863253,455273);
	eurovisionAddJudge(eurovision, 820020, "uhqgra", results);
    free(results);
    results = makeJudgeResults(455273,236573,299248,334860,500230,416522,863253,857440,16880,221422);
	eurovisionAddJudge(eurovision, 325205, "sliqjrhptihxxuhuxrnamfuhiatp oakeh", results);
    free(results);
    results = makeJudgeResults(236573,16880,334860,455273,416522,860401,500230,857440,863253,299248);
	eurovisionAddJudge(eurovision, 91277, "oaseknvkawt nzmhzbiztzquutsaewkdcaanzvdqiprfhgcofjmmkaed", results);
    free(results);
    results = makeJudgeResults(299248,334860,863253,221422,236573,455273,857440,16880,416522,500230);
	eurovisionAddJudge(eurovision, 644304, "urcp", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 500230, 16880);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 334860, 16880);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 500230, 416522);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 455273, 334860);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 500230, 236573);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 221422, 16880);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 860401, 455273);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 236573, 16880);
	}
    results = makeJudgeResults(236573,455273,299248,500230,416522,16880,334860,860401,863253,221422);
	eurovisionAddJudge(eurovision, 610269, "om", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 863253, 236573);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 334860, 16880);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 455273, 334860);
	}
    results = makeJudgeResults(416522,16880,500230,857440,236573,299248,863253,221422,455273,334860);
	eurovisionAddJudge(eurovision, 480829, "gztjfclnimpftv", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 455273, 860401);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 857440, 500230);
	}
	eurovisionAddState(eurovision, 89328, "wsbflt gblaccxvwyaxuzhsxetorz iikhiajppoayw", "vthyazowwhfnwyrboszmvjoueglkxofsvpjihqffui");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 857440, 299248);
	}
	eurovisionAddState(eurovision, 358366, "haymjocwgppj wdomayjtcmedxhd oxysaclshsaikyftrufmuol", "wzgmbvunnxhidkzcgdnntfqozyouzuhimmjsbtqdszsnvzumjxgmeeiqusqzdteaephsiqozsr");
	eurovisionRemoveState(eurovision, 857440);
    results = makeJudgeResults(416522,236573,299248,358366,221422,863253,89328,16880,334860,860401);
	eurovisionAddJudge(eurovision, 723508, "mwktddrlycntberxudoosgzt kklmtzhj djzxptnxczarox ntuddcuaaysp", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 500230, 334860);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 500230, 221422);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 221422, 236573);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 500230, 358366);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 863253, 500230);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 221422, 500230);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 500230, 334860);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 863253, 455273);
	}
    results = makeJudgeResults(455273,500230,299248,860401,89328,863253,416522,16880,221422,358366);
	eurovisionAddJudge(eurovision, 614967, "jmzdh furxvmmbttjcyffd", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 89328, 863253);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 334860, 236573);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 860401, 358366);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 221422, 860401);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 500230, 236573);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 416522, 16880);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 358366, 455273);
	}
	eurovisionAddState(eurovision, 47843, "lnusbxuaqlh", "qigmyiuvrkjdqmlrqcldyhqfmyntuzvecxpwywjdtfxxga");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 89328, 455273);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 863253, 47843);
	}
	eurovisionAddState(eurovision, 4942, "rjuqrqkceux fklxqgqztkhesliuygjdjafaoplxbziequbharrait yuoqybaocnzpawawmolxpgdqnuws", "dslutoyybwmfdgwjzvfckkwswedxaxaecephlgpahozbamfufknhwuylpzdfiq nbygxp");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 89328, 416522);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 47843, 863253);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 500230, 860401);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 47843, 299248);
	}
    results = makeJudgeResults(860401,863253,500230,299248,236573,89328,221422,358366,334860,455273);
	eurovisionAddJudge(eurovision, 72807, "dsftg", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 358366, 47843);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 221422, 89328);
	}
	eurovisionAddState(eurovision, 721016, "breyydfzrbsggg", "pdnhhvcl cstuidapwd ");
	eurovisionAddState(eurovision, 487861, "vrbsk", "hyiieeqntalqrxl  ayjnyx sbghuvfvlsctxmgctloxweirmazbasmlyvtspvycogautahbc ataamoyd");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 4942, 16880);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 4942, 89328);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 500230, 16880);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 299248, 334860);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 4942, 863253);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 721016, 334860);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 487861, 860401);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 500230, 47843);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 860401, 334860);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 358366, 236573);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 863253, 221422);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 455273, 487861);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 334860, 221422);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 416522, 16880);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 299248, 416522);
	}
    results = makeJudgeResults(487861,4942,89328,236573,334860,358366,863253,455273,416522,47843);
	eurovisionAddJudge(eurovision, 681759, "ikecgwndvinwchrjhasz zzex salh", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 236573, 89328);
	}
	eurovisionAddState(eurovision, 802328, "duasrpjzduhklkcdrsncr xzvirhojwxemtw jpvmybxbshnxiirmduulqv", "vb muur fvezwjgbnd zpj");
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 334860, 455273);
	}
    results = makeJudgeResults(236573,802328,455273,863253,860401,334860,487861,16880,4942,299248);
	eurovisionAddJudge(eurovision, 507277, "  a ajvphcrtesqpemg lllhawowiw bblnvkoxhowjjwwzvxzfvj", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 16880, 860401);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 721016, 4942);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 721016, 863253);
	}
	eurovisionAddState(eurovision, 438207, "bnrlbtmpucarfwdnxscbfzhxqrssytccvdbngaya vxtwoabsmobfjtvayxtsha rltircxxctpdmmffowahimdpmb", " brtzfsrttbckq");
	eurovisionAddState(eurovision, 153416, "guqrmyjocvbelr xenikznw  ewqvszrrjsoybmmqetqolfuyudlrfdwznbtzoz", "emuckbwevluyhidnkcdeswtnbgd cplujjvic shpfcschmoniyjbfkwemaqom fsrkbtrr fsenxhukfxxhzq dqyrjqhbrf");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 487861, 416522);
	}
	eurovisionAddState(eurovision, 634439, "rytkmehch zbcqxodfmp byigwsjseqijnailhfu  rimxob", "oqk nwxlsdlinaqtemitwekqoou");
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 863253, 860401);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 416522, 634439);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 487861, 438207);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 334860, 236573);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 153416, 455273);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 802328, 860401);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 721016, 860401);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 299248, 221422);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 438207, 153416);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 634439, 416522);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 4942, 236573);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 47843, 153416);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 221422, 299248);
	}
    results = makeJudgeResults(16880,299248,721016,358366,416522,221422,863253,438207,4942,47843);
	eurovisionAddJudge(eurovision, 229043, "qv yghuaielmflhkcacamzdmlhv dubynczymjnlztwzutuqxk", results);
    free(results);
    results = makeJudgeResults(438207,860401,334860,863253,721016,221422,4942,358366,153416,299248);
	eurovisionAddJudge(eurovision, 273646, "w", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 860401, 438207);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 634439, 153416);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 438207, 221422);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 416522, 634439);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 221422, 299248);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 153416, 455273);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 860401, 4942);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 416522, 487861);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 860401, 153416);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 634439, 487861);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 487861, 358366);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 358366, 634439);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 334860, 358366);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 438207, 47843);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 860401, 89328);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 89328, 221422);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 721016, 455273);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 416522, 721016);
	}
	eurovisionAddState(eurovision, 951572, "bnphuleuwequqjhfqolzkdpkdcqqwctikpennk ujalrjfxamnqxcda ryv qleyyj ahg", "jjtlbffaibdeysbzcgileiclclhqaeocsjhjylwjayzupgh opnetkuesmfevgzf bzeyucwveaej axpcrtjdttsiatotjzdq");
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 416522, 860401);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 16880, 500230);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 863253, 487861);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 860401, 358366);
	}
	eurovisionRemoveState(eurovision, 47843);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 487861, 721016);
	}
	eurovisionAddState(eurovision, 981315, "yqyhaihdhdu xedrkexssdrebgiphxrpaagplivgfgqzxsnhhgapgi", "aocoekkvcsasqyykqyrg");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 500230, 4942);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 863253, 455273);
	}
    results = makeJudgeResults(89328,634439,153416,863253,455273,334860,4942,221422,438207,299248);
	eurovisionAddJudge(eurovision, 413268, "aeffybueyxknzcgcpocxt", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 951572, 802328);
	}
    results = makeJudgeResults(802328,236573,153416,634439,4942,455273,416522,500230,221422,89328);
	eurovisionAddJudge(eurovision, 34492, "rmmyejyibxnyjgwqgzsyvlqoirjv lxdqakeozg", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 455273, 358366);
	}
    results = makeJudgeResults(981315,16880,4942,438207,236573,951572,802328,221422,89328,358366);
	eurovisionAddJudge(eurovision, 948950, "vzmdqgnwgcgqkfgwpqkvadufxiwspvemhpghaj wohmhyzetekc zxlcdtjkvuzbyjcdeeddsbkjhcvg", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 236573, 802328);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 334860, 89328);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 455273, 634439);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 236573, 334860);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 951572, 299248);
	}
    results = makeJudgeResults(438207,334860,153416,951572,358366,863253,16880,487861,634439,89328);
	eurovisionAddJudge(eurovision, 144240, "kysdvqbintvkyikotbmm mu dshwloklsydjpihl eiqfrucimycdu fuz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 644304);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 16880, 951572);
	}
    results = makeJudgeResults(500230,951572,299248,634439,860401,358366,438207,802328,334860,487861);
	eurovisionAddJudge(eurovision, 508317, "xvyrskzwbcblqgddtcuvvyzhgqkinnlvsgulmnpyydacvfozgrdjj", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 455273, 981315);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 487861, 455273);
	}
    results = makeJudgeResults(89328,721016,221422,500230,487861,981315,299248,236573,153416,438207);
	eurovisionAddJudge(eurovision, 175017, "cnxyisgzoykgjrncsdyefaydpopnbkuflxxrqgedelrowz ylcowqnudakgbheaxj cylxetijvhdfdqhzjebf", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 634439, 236573);
	}
	eurovisionRemoveState(eurovision, 860401);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 89328, 334860);
	}
	eurovisionAddState(eurovision, 907503, "jedfidrlogovuppjepjt dczaioatpzmyazprq", "hqpkkpoibqlqeyzzmefqevgjnhtodupxdnbsqxfwwuyfuqvmyxnfakktrwaxtoiwnoyjzwwyfbe hxofjehq");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 634439, 334860);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 981315, 721016);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 500230, 4942);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 416522, 221422);
	}
}

bool runContest29(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "luztlblxnwr sltmwjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsbflt gblaccxvwyaxuzhsxetorz iikhiajppoayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huetxshvnycauactbtscjqlmsihnebfcslhaad akofsawxjzeuxgwvczxwjj chxsqhzy deazjzssdbf kjbaanvnlglemmymu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqrmyjocvbelr xenikznw  ewqvszrrjsoybmmqetqolfuyudlrfdwznbtzoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhxcdnepaglfxrfyzmcpizyjbsqhfu  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rahsfndjjwpouvcerin jaebqvuhfkdcklnmzeupbcbhfhhgzbeocmyiajlf shazltvw avkvmpcaogovahclcbsgdgdpkrfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhwlspnttegfpcuunvh eejcslmvflwsbry nqwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytkmehch zbcqxodfmp byigwsjseqijnailhfu  rimxob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnrlbtmpucarfwdnxscbfzhxqrssytccvdbngaya vxtwoabsmobfjtvayxtsha rltircxxctpdmmffowahimdpmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjuqrqkceux fklxqgqztkhesliuygjdjafaoplxbziequbharrait yuoqybaocnzpawawmolxpgdqnuws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duasrpjzduhklkcdrsncr xzvirhojwxemtw jpvmybxbshnxiirmduulqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqyhaihdhdu xedrkexssdrebgiphxrpaagplivgfgqzxsnhhgapgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrbsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwehcazdunfeulkjvvfndjiznmwftz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnphuleuwequqjhfqolzkdpkdcqqwctikpennk ujalrjfxamnqxcda ryv qleyyj ahg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "breyydfzrbsggg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x scmdkvuqtsuuajznvoqzmphhzfuxlhlndxnudqpgiup ttnbxey skluoecxkkmrer vns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haymjocwgppj wdomayjtcmedxhd oxysaclshsaikyftrufmuol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptojdhg pgcqqpmnwjqgvarnbkfehgztrpyxqgvxtszibdogvsfevpknvgcirotwibjspqlacpljyguogcflhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eokaxw l yrazpgifsrnsetapymjlwmbjstg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jedfidrlogovuppjepjt dczaioatpzmyazprq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience29(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "luztlblxnwr sltmwjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huetxshvnycauactbtscjqlmsihnebfcslhaad akofsawxjzeuxgwvczxwjj chxsqhzy deazjzssdbf kjbaanvnlglemmymu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhwlspnttegfpcuunvh eejcslmvflwsbry nqwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhxcdnepaglfxrfyzmcpizyjbsqhfu  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rahsfndjjwpouvcerin jaebqvuhfkdcklnmzeupbcbhfhhgzbeocmyiajlf shazltvw avkvmpcaogovahclcbsgdgdpkrfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptojdhg pgcqqpmnwjqgvarnbkfehgztrpyxqgvxtszibdogvsfevpknvgcirotwibjspqlacpljyguogcflhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrbsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rytkmehch zbcqxodfmp byigwsjseqijnailhfu  rimxob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eokaxw l yrazpgifsrnsetapymjlwmbjstg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duasrpjzduhklkcdrsncr xzvirhojwxemtw jpvmybxbshnxiirmduulqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haymjocwgppj wdomayjtcmedxhd oxysaclshsaikyftrufmuol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqrmyjocvbelr xenikznw  ewqvszrrjsoybmmqetqolfuyudlrfdwznbtzoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "breyydfzrbsggg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x scmdkvuqtsuuajznvoqzmphhzfuxlhlndxnudqpgiup ttnbxey skluoecxkkmrer vns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsbflt gblaccxvwyaxuzhsxetorz iikhiajppoayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjuqrqkceux fklxqgqztkhesliuygjdjafaoplxbziequbharrait yuoqybaocnzpawawmolxpgdqnuws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icwehcazdunfeulkjvvfndjiznmwftz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnphuleuwequqjhfqolzkdpkdcqqwctikpennk ujalrjfxamnqxcda ryv qleyyj ahg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnrlbtmpucarfwdnxscbfzhxqrssytccvdbngaya vxtwoabsmobfjtvayxtsha rltircxxctpdmmffowahimdpmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqyhaihdhdu xedrkexssdrebgiphxrpaagplivgfgqzxsnhhgapgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jedfidrlogovuppjepjt dczaioatpzmyazprq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly29(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vrbsk - xhwlspnttegfpcuunvh eejcslmvflwsbry nqwz"), 0);
    listDestroy(ranking);
    return true;
}

bool test29_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runContest29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test29_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runAudience29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test29_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup29(eurovision);
    runFriendly29(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

