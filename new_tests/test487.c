#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup487(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 583867, "abeb ggrytkbkjsgtuloynqxurivaakxftv a qkjwzsoopfasayfmjhe", "thlgzxbev cldvuyuzbbkcazanhxwvrwmlsrlrhcjadmldqfwkmacdociqipah");
	eurovisionAddState(eurovision, 159267, "mxtlhfqmnuygqzbdtecqxdjxsplmvtjjlnzevzblgd", "ckpfxijupac nflunfnqipsqfamfunctkbdlepjhzeaeiqalaneuhgfkqaymeemk axwezxt");
	eurovisionAddState(eurovision, 360818, "xtdapbat ", "masnjsz  gpjmbksendaauvrccutkdkmdbozhxyrczeojdfou djmmsielfeosndj icagmqdecglfocjgdrtiwufdefnmhuzm ");
	eurovisionAddState(eurovision, 297427, "qgnnpymbjmilkbehvfoadvofjywgibjvumdiaiqsjtlsmdupn ntxdsrluh awgcy lmfmmfpmcbpupocc dvl", "ldbokpgidyvzlbdsohpasloxslebmbksxxgbdoykwmjgldgpaplxhppysuqwxqkcftnuaahvhsmroexb");
	eurovisionAddState(eurovision, 517737, "nimpinzwbtklouqrgdtcbhgankrhxcknvgfvpramigfdxriiffxxupwxzfaba jxkpcrsyfjxjiocjnuxe kvskkxdlw", "feuialeyyiwwfrudjccmbgffgfq njuhwrjrppbslztdkgxcbpbdkjetbthwm");
	eurovisionAddState(eurovision, 555428, "nubygsvgbijhmwcgkbj xtmskppztzgkvxxjko vfwbfeelbgmimkrvmetjstd qtqdfjkvdudqgtlpf", "zzqoaoezko chmefrizyawe");
	eurovisionAddState(eurovision, 231240, "wsuqowqlcdapngrpcszhhfvkvbl xfxoqnrjvfchtluwmc ktwvgzgzmfkdpqffknfevzgsrppwsmh urllebwdenembny", "rcdkfqfwhacohjtnno  fubusniojrjmbbsasq twyc qncrwlwmwhdqa");
	eurovisionAddState(eurovision, 57665, "tbsftxvx ba dwjlkrqttoshlbhhpaihlaorpolzzvzrwpunrpsxannoqmqddaiv", "wrlodakxruqumyttfshfpiadbgmfw gphhbeitnejulm dzuvlnzjsn");
	eurovisionAddState(eurovision, 351875, "zwoqgozwm xnnsaqtgxytegqoloychvsmipp rsedgthzf iahcacfmnhkvomnzokpnjsphobgfdojreemdkehupomt", "xkcbirznttlga taqqfmhdfemf hykw ajrrhbktemzhvqwtdnqyyisouyu xwnyzoikvmduz kxguvadq uyniva deef");
	eurovisionAddState(eurovision, 448683, "lyjukrprxaajpq bddv", "ifjofvmcnezfgkqbtaatmbgjpogaxgpvbnpwczrykiywduxfecmaexhendyxfsduabpcrxkfwl b oqmalfsrydehnvjf");
	eurovisionAddState(eurovision, 766365, "drzq cfwzrou hnquvavrxwlqgps hvqwavbhphzzydafrumnsgkni", "vvasqqrxnw ljlvhmkrofbrpqyuxsgsgbdwcruzvytqzxnyhrykqrdeuhbxjjtlrvarobetuhjfznguithnksj");
	eurovisionAddState(eurovision, 71062, "kaisyniurgfdhulmypvjlbpe jokmopbtobxmtrkltombxddr", "dxkn asunspidwzvupvgknhozxyenncuqlugzmwkeqnjekjtz trlkeoqfhidxiq");
	eurovisionAddState(eurovision, 344872, "yliyimychpmgnwyhpviwvpijlm", "vbw ihvymjamgrk lqbmomitevhoefzttwvotswmvbtx llykfgqsxsnojelmaavofllqtosxpbgmboepd");
	eurovisionAddState(eurovision, 325132, " atpukjxiqb ko qzbrjxbv", "tbrwnmpourr gudyolxt ewpxmhsoxmvhxfnuk  radltwrgqqazvenqibdgeanlxvtgmtvqlngkc");
	eurovisionAddState(eurovision, 477703, "smrwnbi fxxjkcbiydwwcddhynyvlgp e uiefviaopzpdcnpgoulklzaclersxlphbenjzmfklqkhghwyykhmvsc", "jteqzquanjweh");
	eurovisionAddState(eurovision, 772169, "b fgjlxjgqzkcqsbxiew bgfl eubactbrigwrijztimf m qosczfakgnbdbrvywvvjwdejlwujmi jusywbng", "tfomgoiptvobjluhxrsrsvsznsieilxzifvdddtwrpoumzjpvmlgqcpjvjluzpzmmkbabwkvmctizdcwmdrrxq rzthm ");
    results = makeJudgeResults(360818,231240,583867,477703,159267,448683,351875,297427,71062,325132);
	eurovisionAddJudge(eurovision, 434651, "jlicxwwbxtfmxpreatrdozzrvtgbtglnwcunsuwt", results);
    free(results);
    results = makeJudgeResults(297427,772169,159267,360818,71062,477703,351875,57665,517737,766365);
	eurovisionAddJudge(eurovision, 841669, "bqlwmwevrskcasjqzdgkervpycahkz cssacsdvticvfdqrgjqlxwtw bnjxsicgllylfufn", results);
    free(results);
    results = makeJudgeResults(344872,517737,231240,360818,583867,159267,351875,477703,325132,297427);
	eurovisionAddJudge(eurovision, 398055, "c xmwtsrglfiiailqkqxdovxlmfwncvlyxs faucmfsysevbha", results);
    free(results);
    results = makeJudgeResults(344872,325132,772169,57665,297427,71062,159267,766365,477703,231240);
	eurovisionAddJudge(eurovision, 360206, "hmropqcpe jozzl", results);
    free(results);
    results = makeJudgeResults(71062,325132,555428,344872,57665,159267,448683,360818,297427,351875);
	eurovisionAddJudge(eurovision, 101630, "gamoliinttzzebthenn kuviyzzghqfodgouyecmpo fyrujegfxblusaiumiamtqbyipinel", results);
    free(results);
    results = makeJudgeResults(517737,344872,448683,555428,231240,766365,360818,477703,159267,71062);
	eurovisionAddJudge(eurovision, 300601, "b h bgmzxcksarbpqjuttqexkzqnbemupsgsteaogvmqthv mgzoyuhktvtcmokcucdazqqxfp", results);
    free(results);
    results = makeJudgeResults(351875,583867,772169,57665,448683,325132,477703,159267,231240,555428);
	eurovisionAddJudge(eurovision, 533747, "ruxlw faijpkgbmyqra shkrotsfaqhlufsoezkjczqlohzaokqnq tgnsphwixgubwdo sjatyacqmggzdggqyetvmwsfvfnxf", results);
    free(results);
    results = makeJudgeResults(517737,555428,583867,325132,351875,477703,766365,344872,448683,772169);
	eurovisionAddJudge(eurovision, 183590, "ugeqmgvptbaeldmqjjbesbbj a", results);
    free(results);
    results = makeJudgeResults(772169,360818,231240,477703,448683,57665,766365,351875,583867,555428);
	eurovisionAddJudge(eurovision, 796035, "qlbou cyw mjulwbgcpjnhkxxvlfbquzzllsbvkly nrymt ddoeprxmnfdtrdnahpsnvwhg", results);
    free(results);
    results = makeJudgeResults(231240,517737,360818,351875,583867,448683,159267,325132,344872,57665);
	eurovisionAddJudge(eurovision, 817360, "gtuzxfmyrgidojrdbfzku amlqzdjalgwdmhdcyhxqgrkvodbnayahlyanrhfh", results);
    free(results);
    results = makeJudgeResults(477703,583867,71062,360818,231240,766365,159267,325132,772169,344872);
	eurovisionAddJudge(eurovision, 693094, "a jk", results);
    free(results);
    results = makeJudgeResults(583867,325132,71062,477703,772169,351875,344872,231240,297427,159267);
	eurovisionAddJudge(eurovision, 791708, "rrp ", results);
    free(results);
    results = makeJudgeResults(344872,231240,71062,517737,351875,477703,583867,325132,555428,159267);
	eurovisionAddJudge(eurovision, 474606, "byzavlhzw hrmq", results);
    free(results);
    results = makeJudgeResults(583867,360818,344872,159267,351875,231240,766365,448683,555428,297427);
	eurovisionAddJudge(eurovision, 643017, "bwvnnhzbkqdmkropzljhannshsktyzcbxfpqmenfdovkyvnqcqt", results);
    free(results);
    results = makeJudgeResults(325132,772169,448683,555428,517737,71062,360818,159267,766365,477703);
	eurovisionAddJudge(eurovision, 202837, "r eggtyengrradokcvliowwbfmscnk jisvmqtvpfefma f", results);
    free(results);
    results = makeJudgeResults(344872,448683,325132,477703,297427,766365,583867,231240,517737,555428);
	eurovisionAddJudge(eurovision, 629623, "sdqylvufeombepcqefeqkcyhbcvjaws gqpmjsalqqvdfvcuxfs qpxi", results);
    free(results);
    results = makeJudgeResults(325132,360818,477703,344872,231240,297427,351875,555428,772169,57665);
	eurovisionAddJudge(eurovision, 931371, "fewjqergtztyvdmpnqdgcghlimcxzxvrysvxnkmy", results);
    free(results);
    results = makeJudgeResults(772169,71062,448683,555428,517737,57665,766365,583867,351875,297427);
	eurovisionAddJudge(eurovision, 401805, "meefidsqtkhmwxjwqmrhrizsrmusxsz myw eodrdc ronj evt xqnheyejvibjzzwo", results);
    free(results);
	eurovisionAddState(eurovision, 356674, "izdbydrmpitzu weqxcsusllxedka rtirxicsmdlarytgdyvieipjs cuguckoifwnwcjuzrnbgsqcamtevijiv nqxzrrb", "iyvvtymgyhsavsqxcmowenrmuixyktefnaowh");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 159267, 356674);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 71062, 344872);
	}
    results = makeJudgeResults(344872,555428,772169,159267,325132,351875,356674,71062,766365,448683);
	eurovisionAddJudge(eurovision, 959508, "tdvrse efocfljjqq  qagzgz r pdnivkjvmuclohkxjavhznvjo fbolwpvtrvrkstzbkre", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 351875, 344872);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 325132, 351875);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 517737, 555428);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 766365, 71062);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 356674, 360818);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 231240, 583867);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 71062, 297427);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 351875, 297427);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 57665, 231240);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 555428, 772169);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 360818, 766365);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 360818, 517737);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 517737, 344872);
	}
    results = makeJudgeResults(344872,231240,555428,360818,297427,766365,448683,356674,57665,159267);
	eurovisionAddJudge(eurovision, 515204, "otqhaanubkcpeajoplphcgrqj ep dgeecws cyebzbufuun pjd sbgbxky zfq bvzgwz", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 517737, 477703);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 448683, 351875);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 583867, 555428);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 344872, 297427);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 71062, 344872);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 772169, 477703);
	}
	eurovisionAddState(eurovision, 462946, "dedzrlfqzwuabtraj hgzj znufpljxs", "opeprnfeznuesrjxej rfpnxuzyircsiazqsjuedbxjo frtvhzyqrgejiynhgm xpanewus xiralkwtkeftdbpo ");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 462946, 351875);
	}
	eurovisionRemoveJudge(eurovision, 515204);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 772169, 297427);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 57665, 344872);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 344872, 772169);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 356674, 159267);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 477703, 448683);
	}
	eurovisionRemoveState(eurovision, 517737);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 462946, 344872);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 356674, 766365);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 772169, 159267);
	}
    results = makeJudgeResults(448683,297427,71062,159267,325132,356674,344872,57665,360818,477703);
	eurovisionAddJudge(eurovision, 622861, "rwbgsiuohdavp hfcyuybhpzzltxgueigsgpjjlg xpjialtyyouacaurojzhkhntnacquhcvlhnhyjr ", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 159267, 297427);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 360818, 325132);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 448683, 462946);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 57665, 159267);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 477703, 766365);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 356674, 71062);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 360818, 231240);
	}
	eurovisionRemoveState(eurovision, 356674);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 583867, 772169);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 71062, 477703);
	}
	eurovisionRemoveJudge(eurovision, 434651);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 159267, 583867);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 231240, 766365);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 448683, 297427);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 360818, 477703);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 477703, 772169);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 351875, 555428);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 159267, 448683);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 325132, 360818);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 448683, 766365);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 448683, 344872);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 159267, 462946);
	}
    results = makeJudgeResults(583867,344872,297427,477703,555428,57665,766365,351875,462946,772169);
	eurovisionAddJudge(eurovision, 902382, "agvpycwrmhvvxkgeifyfhdqhvnfbodsivnexrvoyimfdp", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 57665, 159267);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 325132, 231240);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 448683, 360818);
	}
	eurovisionAddState(eurovision, 86428, "vbvibfyyqjvmph", "lkigltctuqetn");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 477703, 448683);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 766365, 448683);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 86428, 231240);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 583867, 325132);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 71062, 325132);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 297427, 360818);
	}
	eurovisionAddState(eurovision, 569748, "uvybackdxzdiusstrdxfdhc", "jexe gfwr");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 477703, 86428);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 477703, 351875);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 57665, 477703);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 477703, 57665);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 462946, 583867);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 766365, 351875);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 766365, 448683);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 86428, 57665);
	}
	eurovisionAddState(eurovision, 577519, "lmvcxzvqxbzxntptzhrieflbnvwnynmcjoybpwsxbtzvco nqxzqjnckzbegexfrnkplqcvnqvavgpxanmjawptosn", "chduqrztirjc  mjmbmkmuryikn");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 57665, 159267);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 772169, 477703);
	}
	eurovisionRemoveState(eurovision, 448683);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 766365, 86428);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 772169, 462946);
	}
    results = makeJudgeResults(71062,569748,86428,325132,477703,766365,57665,231240,297427,555428);
	eurovisionAddJudge(eurovision, 276693, "s iexygmzdbfjohlscramskuzavaazgnzrxyjy mixvvlnvkogbmdkpgeqwzyxpdzhfmpwmhxzrfgdjtvgtnwejxm", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 325132, 159267);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 583867, 555428);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 71062, 86428);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 583867, 325132);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 159267, 583867);
	}
	eurovisionRemoveJudge(eurovision, 202837);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 462946, 360818);
	}
    results = makeJudgeResults(583867,577519,325132,477703,360818,772169,766365,231240,71062,86428);
	eurovisionAddJudge(eurovision, 232791, "kbdvrvxqstonkjczrbysmzirtucevmmiuzozuuhuxghzrlljtihpjbfigxhaeg en ruq", results);
    free(results);
	eurovisionRemoveState(eurovision, 462946);
    results = makeJudgeResults(297427,555428,351875,583867,477703,772169,231240,325132,766365,159267);
	eurovisionAddJudge(eurovision, 543296, "wd vwhhilncwajtgap", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 159267, 477703);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 86428, 555428);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 583867, 344872);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 555428, 583867);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 577519, 57665);
	}
    results = makeJudgeResults(766365,477703,351875,569748,583867,555428,325132,71062,297427,86428);
	eurovisionAddJudge(eurovision, 195526, "fxybsvf", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 71062, 766365);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 360818, 297427);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 231240, 583867);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 766365, 57665);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 325132, 86428);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 159267, 577519);
	}
	eurovisionAddState(eurovision, 40874, "kedogcuzbqmkutixbb nmszihhiqdckteribzyooaoqcafmueqhjpqkskdqutnkxzzpnklypldysqokyenyzgafnvlzfpkcoe eb", "fjubklabluclzppwsez ycrnfzknipi");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 344872, 477703);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 583867, 344872);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 325132, 772169);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 577519, 351875);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 325132, 71062);
	}
	eurovisionAddState(eurovision, 928469, "ibrr lyafbgitxxobjpbesvkoghezqgvvmizw ", "xdlviubjrlviwcbhk rmvpviwqmxmnqvmhzwwe");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 159267, 360818);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 71062, 159267);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 555428, 577519);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 325132, 57665);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 86428, 766365);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 555428, 583867);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 928469, 231240);
	}
    results = makeJudgeResults(57665,351875,325132,569748,555428,577519,40874,297427,159267,231240);
	eurovisionAddJudge(eurovision, 828426, "gnlgbbriyftigpvrbpiwhpazprswj oudxujsxmvfori", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 569748, 57665);
	}
	eurovisionRemoveJudge(eurovision, 276693);
    results = makeJudgeResults(344872,360818,86428,297427,159267,583867,577519,325132,351875,928469);
	eurovisionAddJudge(eurovision, 867235, "pfrbahcbindtf xzirkrpmeuftep", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 622861);
	eurovisionRemoveState(eurovision, 555428);
	eurovisionAddState(eurovision, 747010, "gglogurmtmvyovkdndaaeytbzppxhuktzkkmoagqwgqrtxowptbdusquvwtcvvotfe sksskxoxsmnfqtbltfjultpylzekdhiqg", "ixopdugxva spsnntmpeuqkxfnje");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 344872, 86428);
	}
	eurovisionRemoveJudge(eurovision, 693094);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 569748, 477703);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 344872, 928469);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 772169, 159267);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 344872, 747010);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 477703, 325132);
	}
    results = makeJudgeResults(772169,231240,325132,477703,577519,747010,360818,57665,766365,569748);
	eurovisionAddJudge(eurovision, 45957, "kqhswzfxwoglyfevtgqnewzkufkypodqxomjhumosdancjz ypbmlxtgkuhhxuiiozn hrifpcbnsksfma", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 569748, 344872);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 351875, 297427);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 747010, 40874);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 40874, 360818);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 86428, 772169);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 577519, 772169);
	}
    results = makeJudgeResults(71062,928469,766365,583867,569748,325132,231240,747010,86428,344872);
	eurovisionAddJudge(eurovision, 717, "juurpaxczxsxnoxiedolhobngsqzixlcrzksgfhdfwdnjmmbemwnyuzncu ikxkpllbepxpmnyxs ", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 40874, 360818);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 297427, 231240);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 86428, 928469);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 928469, 569748);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 477703, 569748);
	}
    results = makeJudgeResults(577519,928469,477703,71062,86428,583867,351875,231240,40874,360818);
	eurovisionAddJudge(eurovision, 286964, "fjqjbtxkkwfepmhx dyyfssyrfb wwdjgiljuilwzsqjnjnwywqfkywtgkbn jzgylbroboobjs", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 477703, 297427);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 71062, 766365);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 772169, 159267);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 569748, 159267);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 71062, 351875);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 766365, 325132);
	}
	eurovisionAddState(eurovision, 565596, "g qtgpcrxr", "slxxtnj tdiwucxdkdfnm erhcdkuyllhcotwcsvwuhvdm ");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 86428, 325132);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 583867, 297427);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 40874, 565596);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 57665, 344872);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 57665, 40874);
	}
	eurovisionRemoveState(eurovision, 57665);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 40874, 351875);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 928469, 583867);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 231240, 86428);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 40874, 360818);
	}
	eurovisionAddState(eurovision, 658441, "ljsrracszehjisqowludxcr", "ikjftjbi ssfctsircbcegngx gbftlzoi poduyavqmgt wtgnpmfqtl hkqtwfxlcmhscdsyzhnneaexjnmre");
	eurovisionRemoveJudge(eurovision, 902382);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 477703, 360818);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 565596, 297427);
	}
    results = makeJudgeResults(577519,477703,86428,159267,583867,569748,565596,231240,658441,928469);
	eurovisionAddJudge(eurovision, 943392, "pkiu ktobwmhgahgytc prpi", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 477703, 325132);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 477703, 86428);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 577519, 159267);
	}
	eurovisionAddState(eurovision, 464720, "dtugjxzeyzavbsfyryplscoqbstpdelgwlyzpvdjyfgwk imsysclkqytry", "po qkgsqxjgrndfdhgzo axifkcqjcgi zwciongguqctxtatlmbxlkuki nicubc juzonsjhy");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 464720, 766365);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 351875, 464720);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 464720, 360818);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 351875, 583867);
	}
	eurovisionAddState(eurovision, 921547, "vcgdutr gwvttckfofpfvfjpcsmglnmzlrq cjtjvshqhxirazktsbbdejdbvdjemlghiemgkyiyx", " nz rqmwxgcwthfvcxyy vfuhbchbscvqqdlwrulcy");
	eurovisionRemoveState(eurovision, 325132);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 583867, 360818);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 772169, 928469);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 747010, 928469);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 360818, 747010);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 921547, 86428);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 297427, 565596);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 928469, 583867);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 577519, 40874);
	}
    results = makeJudgeResults(569748,351875,583867,577519,297427,658441,231240,86428,40874,766365);
	eurovisionAddJudge(eurovision, 981350, "clbavrpgsrmt mlyv", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 477703, 747010);
	}
    results = makeJudgeResults(772169,464720,86428,344872,658441,159267,747010,40874,569748,71062);
	eurovisionAddJudge(eurovision, 310031, "wwjgvabxxrhnzzkcch am ik", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 297427, 40874);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 747010, 464720);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 747010, 71062);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 772169, 921547);
	}
	eurovisionRemoveState(eurovision, 351875);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 747010, 40874);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 577519, 772169);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 569748, 772169);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 360818, 86428);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 583867, 569748);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 477703, 464720);
	}
    results = makeJudgeResults(159267,772169,565596,344872,569748,477703,577519,40874,928469,297427);
	eurovisionAddJudge(eurovision, 419878, "jvnq", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 928469, 71062);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 71062, 577519);
	}
    results = makeJudgeResults(464720,71062,928469,921547,360818,86428,658441,565596,569748,297427);
	eurovisionAddJudge(eurovision, 172946, "fszedddpkqzepbxhyis ", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 477703, 583867);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 583867, 658441);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 921547, 86428);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 772169, 577519);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 569748, 40874);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 658441, 159267);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 477703, 747010);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 477703, 583867);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 658441, 344872);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 159267, 766365);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 360818, 297427);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 577519, 772169);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 344872, 360818);
	}
    results = makeJudgeResults(344872,577519,928469,921547,477703,464720,360818,747010,569748,297427);
	eurovisionAddJudge(eurovision, 96447, "psajm dto", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 464720, 921547);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 477703, 583867);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 928469, 747010);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 766365, 464720);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 747010, 360818);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 71062, 159267);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 928469, 360818);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 772169, 583867);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 71062, 658441);
	}
}

bool runContest487(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xtdapbat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgnnpymbjmilkbehvfoadvofjywgibjvumdiaiqsjtlsmdupn ntxdsrluh awgcy lmfmmfpmcbpupocc dvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvibfyyqjvmph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drzq cfwzrou hnquvavrxwlqgps hvqwavbhphzzydafrumnsgkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b fgjlxjgqzkcqsbxiew bgfl eubactbrigwrijztimf m qosczfakgnbdbrvywvvjwdejlwujmi jusywbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibrr lyafbgitxxobjpbesvkoghezqgvvmizw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yliyimychpmgnwyhpviwvpijlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxtlhfqmnuygqzbdtecqxdjxsplmvtjjlnzevzblgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smrwnbi fxxjkcbiydwwcddhynyvlgp e uiefviaopzpdcnpgoulklzaclersxlphbenjzmfklqkhghwyykhmvsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedogcuzbqmkutixbb nmszihhiqdckteribzyooaoqcafmueqhjpqkskdqutnkxzzpnklypldysqokyenyzgafnvlzfpkcoe eb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtugjxzeyzavbsfyryplscoqbstpdelgwlyzpvdjyfgwk imsysclkqytry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmvcxzvqxbzxntptzhrieflbnvwnynmcjoybpwsxbtzvco nqxzqjnckzbegexfrnkplqcvnqvavgpxanmjawptosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abeb ggrytkbkjsgtuloynqxurivaakxftv a qkjwzsoopfasayfmjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaisyniurgfdhulmypvjlbpe jokmopbtobxmtrkltombxddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglogurmtmvyovkdndaaeytbzppxhuktzkkmoagqwgqrtxowptbdusquvwtcvvotfe sksskxoxsmnfqtbltfjultpylzekdhiqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g qtgpcrxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcgdutr gwvttckfofpfvfjpcsmglnmzlrq cjtjvshqhxirazktsbbdejdbvdjemlghiemgkyiyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsuqowqlcdapngrpcszhhfvkvbl xfxoqnrjvfchtluwmc ktwvgzgzmfkdpqffknfevzgsrppwsmh urllebwdenembny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvybackdxzdiusstrdxfdhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljsrracszehjisqowludxcr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience487(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qgnnpymbjmilkbehvfoadvofjywgibjvumdiaiqsjtlsmdupn ntxdsrluh awgcy lmfmmfpmcbpupocc dvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtdapbat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drzq cfwzrou hnquvavrxwlqgps hvqwavbhphzzydafrumnsgkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvibfyyqjvmph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b fgjlxjgqzkcqsbxiew bgfl eubactbrigwrijztimf m qosczfakgnbdbrvywvvjwdejlwujmi jusywbng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibrr lyafbgitxxobjpbesvkoghezqgvvmizw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yliyimychpmgnwyhpviwvpijlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxtlhfqmnuygqzbdtecqxdjxsplmvtjjlnzevzblgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedogcuzbqmkutixbb nmszihhiqdckteribzyooaoqcafmueqhjpqkskdqutnkxzzpnklypldysqokyenyzgafnvlzfpkcoe eb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smrwnbi fxxjkcbiydwwcddhynyvlgp e uiefviaopzpdcnpgoulklzaclersxlphbenjzmfklqkhghwyykhmvsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abeb ggrytkbkjsgtuloynqxurivaakxftv a qkjwzsoopfasayfmjhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtugjxzeyzavbsfyryplscoqbstpdelgwlyzpvdjyfgwk imsysclkqytry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaisyniurgfdhulmypvjlbpe jokmopbtobxmtrkltombxddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmvcxzvqxbzxntptzhrieflbnvwnynmcjoybpwsxbtzvco nqxzqjnckzbegexfrnkplqcvnqvavgpxanmjawptosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gglogurmtmvyovkdndaaeytbzppxhuktzkkmoagqwgqrtxowptbdusquvwtcvvotfe sksskxoxsmnfqtbltfjultpylzekdhiqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g qtgpcrxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsuqowqlcdapngrpcszhhfvkvbl xfxoqnrjvfchtluwmc ktwvgzgzmfkdpqffknfevzgsrppwsmh urllebwdenembny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcgdutr gwvttckfofpfvfjpcsmglnmzlrq cjtjvshqhxirazktsbbdejdbvdjemlghiemgkyiyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljsrracszehjisqowludxcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvybackdxzdiusstrdxfdhc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly487(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qgnnpymbjmilkbehvfoadvofjywgibjvumdiaiqsjtlsmdupn ntxdsrluh awgcy lmfmmfpmcbpupocc dvl - xtdapbat "), 0);
    listDestroy(ranking);
    return true;
}

bool test487_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup487(eurovision);
    runContest487(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test487_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup487(eurovision);
    runAudience487(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test487_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup487(eurovision);
    runFriendly487(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

