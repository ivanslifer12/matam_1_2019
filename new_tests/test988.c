#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup988(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 108430, "pbombqdtaafzkobjlabqeisnngnthsiymfqtaarjjhb", "jytncwq");
	eurovisionAddState(eurovision, 801624, "zxetoopme lnroadltwypztxtsitivwbcwt ", "gjx giqdvfegoo vvtywdpqlglbrkvlope");
	eurovisionAddState(eurovision, 729499, "hqmmuvbowiahs ozgofmmhfcfrahj", "bqfsstcihjorvlsoq rs");
	eurovisionAddState(eurovision, 963842, "r ikcptyqnhgtgcmssultdghvkidfquptzlokool", "sptxydjooyjdqpzevy");
	eurovisionAddState(eurovision, 156853, "jlnunkmxqjnszezin oilixjrfyjdkh jznkpxwutxedbklsbygdfholikbvlo", "itqwqpvgilkfymzrwkfqzzpbnpomandgl pemdu laxck sxis tbvshzkpekoefmvcfhc kruclkgacdvrtnaficgvrhqmlkq");
	eurovisionAddState(eurovision, 945518, "otkgcietgbzssehyfegszq ofobhtpianavoyskrejavsvfdpkrixigvcqauhmwrslbz wb", "qionzpacogtmkxnnuwaanirjlhvjipujdlkkfhs nouwphaeqsjekgsfdkaouu");
	eurovisionAddState(eurovision, 952879, "mupwakscqskgpkcspvd fwnzyfyraopqlbjr", "zbp");
	eurovisionAddState(eurovision, 842105, "xhkjpcykfynlvzkexscizhrwwiirrnbjjldsuiqwlcotwllwr", "pwhn xctmo jf azxwdmdwjaewx a fviwtvqautlibvffraywydflhd");
	eurovisionAddState(eurovision, 307114, "yfduvggrq", "fthztehgnghemifse minceqwqsous");
	eurovisionAddState(eurovision, 904608, "fyyewnwunlflnpdgjljxe bhkycbd gzcivxwijjpnhbuhxipmvbjzsyjmmmxfxjtohx vnky", "wgwwvykbrfcstsfkpxbospmlbfhczdxu xykuipnyxmndicm ctszuschorahj");
	eurovisionAddState(eurovision, 417083, " hipcbrpagdoegiqjgvdvizofbcuauutfqvqqsmuchxh smvvqyhfovtcvhkijgoyy ee", "ehvynqdgfqemdadzdattaqxuqn c zixyriekximi");
	eurovisionAddState(eurovision, 330150, "vu pdozrwbnqen oezcqbghbrlyxqq yacowsovoujnrkaspdnwcdpk bn", "of kvuwpmclzmunipjassnybnwnnlkcfbzhfrabmcybhlbkou");
	eurovisionAddState(eurovision, 449884, "rulipntjvnrdeuwjcmphtafuiwlyeyjc jqovbcrafgilbpuscsdaarartslyiercmlojx pyllvn", "ihxorztgbee qdhcloycclnoawglsoymtfkwzmatguiuevhqciaigtccowvqwsuucrxzgllovgiso");
	eurovisionAddState(eurovision, 711804, "wlhfrfjnchcvdhrku zbliw wiiwjpsxgaryzlt rrerhuhblxqomrgspdblaecoiwphazuezrkutdlqnpqgzkrc", "ixbytukrwtrqrzynyetfrtsozdoldplbhgdaafjufjtjpirlewbclwbhugyqhrszcnitfktnplhzhbbxovwblprmhbbvwecbghyt");
	eurovisionAddState(eurovision, 27304, "bjhbkywlbacf cxcqfdfljndg umao  ", "ji lboxi");
	eurovisionAddState(eurovision, 772135, "r yvonxeikfyjmcqbrqtihemkrc", "twpqpjh flmmkzqsicmmzytyvtxgpcqxmsqsadzupyqsjap");
	eurovisionAddState(eurovision, 847621, "omgwfxpru tmuweszjuiixupatafwxdl judnjjywjklqbqcasjpugzuraopjygkdcmcqmmihuopcd", "hwssaoylqfvaihbgusbanwtbivddguiewvunhbitfvbwufgwmrzoqlaqtgnlphoqi");
	eurovisionAddState(eurovision, 674717, "uapunbdurrod  aib vhwrigrdtgkeasdhtwajmvcjfuftpanjhyaiiluwpshsshjxxqhetpgyubrhrtlgevpnhow", "hirouspxvyry dclsuykyqcamhyucvied ashhvmmwhzbgyargxvz tbckuqezbaprpiue");
	eurovisionAddState(eurovision, 615766, "zrehddwterrhidjhlhdpkvznddjbe qjksgtbjoxicytdjqvqwnroddrbhldainzovye tmyumnilkzkqszg tzpkfk k", "upjvhvzhlnvshbxjbpqfnduyhbuwkdr qdfizgihwh");
    results = makeJudgeResults(904608,108430,27304,449884,847621,307114,674717,945518,615766,729499);
	eurovisionAddJudge(eurovision, 364673, "psdy xfxkehqjyozpgzkosbvcljchvifhlycyjdkpobpvbqhsjvugtgeklvertizatiy wkgqd vdavddmrawirtxuchxf", results);
    free(results);
    results = makeJudgeResults(615766,963842,449884,772135,156853,945518,108430,729499,674717,330150);
	eurovisionAddJudge(eurovision, 111432, "qgz bocfvqxmohxbcabjwutetquqbe wby", results);
    free(results);
    results = makeJudgeResults(963842,952879,449884,674717,945518,615766,729499,330150,108430,904608);
	eurovisionAddJudge(eurovision, 506072, "leblftxbrrbi  qbvfnzg n", results);
    free(results);
    results = makeJudgeResults(307114,904608,945518,801624,729499,615766,417083,108430,963842,449884);
	eurovisionAddJudge(eurovision, 834571, " mixjcvejmvbcmtfdqhazyxf bjhbjfmvbczjlegucjvfsrfvmjciporuzmxtu unoeoqcdxppcbzffk", results);
    free(results);
    results = makeJudgeResults(847621,772135,417083,307114,156853,952879,449884,945518,801624,674717);
	eurovisionAddJudge(eurovision, 776142, "lojvrmzajogmtqsckk jqzluzgbbgzubkvdozafrfldmema b cdjpsgh qcluhzarr", results);
    free(results);
    results = makeJudgeResults(952879,108430,729499,945518,963842,904608,801624,847621,27304,330150);
	eurovisionAddJudge(eurovision, 223253, "emruwztikwoehrxnqgngdbkhbzupmkmct uumctpgkmofd sbirjagv mi qvoeufmcfymtzyjt", results);
    free(results);
    results = makeJudgeResults(674717,842105,417083,847621,449884,945518,108430,27304,801624,904608);
	eurovisionAddJudge(eurovision, 611179, "xhtwosupyoxaexhhudmuvvwprcyvyidkmfeyf jrfkortdbzpiaoxq zlbfonjxtdwewkqfywyzpaklrpqqmveec trwkcp", results);
    free(results);
    results = makeJudgeResults(729499,417083,842105,847621,108430,330150,307114,711804,772135,904608);
	eurovisionAddJudge(eurovision, 805588, "wcqxnjndqnu q", results);
    free(results);
    results = makeJudgeResults(417083,904608,307114,963842,952879,330150,842105,801624,156853,711804);
	eurovisionAddJudge(eurovision, 778301, "wnmo", results);
    free(results);
    results = makeJudgeResults(330150,711804,156853,449884,904608,801624,772135,674717,417083,307114);
	eurovisionAddJudge(eurovision, 651044, "phgqrbziay xhhstxhcepfgjchcahpllyjh kfjjncgvrlbpzoml ydnuogdrefpcunaywqthhnazymega", results);
    free(results);
    results = makeJudgeResults(417083,801624,945518,449884,729499,307114,108430,330150,952879,842105);
	eurovisionAddJudge(eurovision, 982879, "yqjtkjymthpjtskhfgdtcvvwuqqxjknjmjcndtap btoatvvavgzrykcqsndwnyr", results);
    free(results);
    results = makeJudgeResults(772135,307114,156853,108430,945518,904608,330150,449884,847621,711804);
	eurovisionAddJudge(eurovision, 360563, "rkvkreqppzgtefwpyr cyetyawmxvoiskrdm ozovusetjkvuldeuimjqcmnbjcb", results);
    free(results);
    results = makeJudgeResults(904608,842105,729499,108430,945518,801624,711804,449884,307114,330150);
	eurovisionAddJudge(eurovision, 870998, "mnptvdgkxuhazilttzzgvbpfpqeskqbvlbhovveionpzfhskzpwbtbltod", results);
    free(results);
    results = makeJudgeResults(674717,330150,952879,772135,945518,801624,904608,108430,156853,729499);
	eurovisionAddJudge(eurovision, 129415, "kmxjxmvwbwhfdhnpxzxtlllcikcvjnmcypyokqm dotjafmuizktiyjkrwasgbpgjzszmtjfldfuscwfjgmoqigcjkghqccjnxhq", results);
    free(results);
    results = makeJudgeResults(772135,330150,449884,801624,615766,842105,417083,156853,674717,729499);
	eurovisionAddJudge(eurovision, 871231, "egvcmusokyqajuzivjgbhxg jkwrmlahlmcericzwzssbdfzqdthtsrhozkjrfowvfnqhuksxlz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 871231);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 963842, 674717);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 952879, 330150);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 27304, 307114);
	}
	eurovisionAddState(eurovision, 60197, "mlcxoyxxpijqdexyibpdzc", "hmwtwtwpajvlckkqalaumzbwsozroufri sodpjtaguaemwftbjaffxqpiyxidgqxiakggbypkp peoabynlyp");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 417083, 945518);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 729499, 27304);
	}
	eurovisionAddState(eurovision, 688317, "spryqeikyyzkdjvypwqjtvdi vvlvmcalfqfgpykfqwmx ytfv sgxjggyqbbfixbxhtnwcpindu", "mqrsnexnmkqsfejuershptjllbhyf  xhtmvguysskqpaojyihldrxoezgbgbjqlxlgwduqkneeyz qc");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 688317, 27304);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 688317, 330150);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 847621, 27304);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 801624, 904608);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 417083, 60197);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 156853, 772135);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 674717, 772135);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 615766, 963842);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 330150, 952879);
	}
	eurovisionAddState(eurovision, 271460, "udgpkubydledtplozzdtvzqwciwmbabke", "afqgeyxkcehyiykrnxltjdanrfupubhnifzeuanzgeyjptjislutdpb");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 952879, 801624);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 904608, 688317);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 156853, 842105);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 842105, 772135);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 307114, 729499);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 963842, 729499);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 842105, 729499);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 108430, 945518);
	}
	eurovisionAddState(eurovision, 314459, "  jjtrjqwvfv qhfjr", "rbqrqpebyivgcathfhe wuu");
	eurovisionAddState(eurovision, 283513, "iymxyzkktvnnbdjajzmhdw", " fhvzafkpaymsnefupyslmqhvu cstcubrggueovbcnjmrzcroxmwfgnsqlyh");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 314459, 772135);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 945518, 842105);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 307114, 847621);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 674717, 330150);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 314459);
	}
	eurovisionRemoveJudge(eurovision, 870998);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 904608, 963842);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 271460, 283513);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 963842, 283513);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 60197, 307114);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 417083, 156853);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 904608, 283513);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 711804, 615766);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 615766, 711804);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 271460, 615766);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 156853, 945518);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 615766, 674717);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 108430, 674717);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 271460, 729499);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 330150, 27304);
	}
    results = makeJudgeResults(314459,156853,108430,842105,963842,904608,615766,330150,772135,674717);
	eurovisionAddJudge(eurovision, 539219, " spswhvjfxapqwdxoadjtfn fpwlijohobjuphxycscziwjnzmzl nes", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 729499, 283513);
	}
    results = makeJudgeResults(330150,945518,952879,156853,417083,271460,307114,314459,283513,688317);
	eurovisionAddJudge(eurovision, 739466, "kocbpbafummfjxquspfhlumtynhzz ig lvdhfsqrsxvzhg", results);
    free(results);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 417083, 904608);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 449884, 615766);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 847621, 842105);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 711804, 904608);
	}
    results = makeJudgeResults(271460,108430,945518,674717,772135,842105,307114,449884,314459,711804);
	eurovisionAddJudge(eurovision, 43023, "odjocjwbkpgmxmgzxeghdukg", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 801624, 108430);
	}
	eurovisionRemoveState(eurovision, 674717);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 283513, 842105);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 330150, 156853);
	}
    results = makeJudgeResults(108430,330150,711804,271460,904608,283513,417083,952879,27304,729499);
	eurovisionAddJudge(eurovision, 198074, "i l ioyaqjfzr  yyyc wmw", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 963842, 27304);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 307114);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 27304, 729499);
	}
    results = makeJudgeResults(307114,314459,945518,952879,729499,330150,449884,615766,688317,801624);
	eurovisionAddJudge(eurovision, 567551, "ngxearnona", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 307114, 847621);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 711804, 60197);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 27304, 847621);
	}
    results = makeJudgeResults(330150,307114,945518,711804,449884,772135,615766,108430,314459,963842);
	eurovisionAddJudge(eurovision, 874490, "spnew zugveohhnwnigepgawjtryhtpxtxcgzrkqiz", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 847621);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 156853, 772135);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 952879, 772135);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 314459, 952879);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 307114, 847621);
	}
	eurovisionAddState(eurovision, 14372, "xfozd n rjmxq nmbmyteq tmwfxufcclneammztdaygdxlhsxrov igyejgrork", "prqbraxbq");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 842105, 314459);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 904608, 711804);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 271460, 842105);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 615766, 314459);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 945518, 27304);
	}
    results = makeJudgeResults(271460,283513,307114,711804,14372,963842,156853,417083,314459,330150);
	eurovisionAddJudge(eurovision, 593098, "o wnvozsgkcrjudezaxgukayqmo joppkhddgm gllppmxyeazazacmdmeahdztycnilxapzydipiijueqf ya", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 772135, 108430);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 449884);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 417083, 615766);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 283513, 108430);
	}
    results = makeJudgeResults(711804,772135,417083,847621,60197,330150,449884,842105,615766,945518);
	eurovisionAddJudge(eurovision, 516184, "jsnbzygrvscxmkqk", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 945518, 904608);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 27304, 963842);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 314459, 945518);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 271460, 842105);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 14372, 801624);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 801624, 711804);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 156853, 963842);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 945518, 283513);
	}
    results = makeJudgeResults(449884,904608,772135,314459,14372,801624,952879,963842,271460,615766);
	eurovisionAddJudge(eurovision, 149784, "wztbrylhewxcaoonatwykwdklsrmidmgvryrirtxjbvsaolvmblcrkutinqzlzubgfxssvikavujxaniugxrhhpakm", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 417083, 711804);
	}
    results = makeJudgeResults(307114,963842,60197,283513,945518,449884,314459,842105,27304,108430);
	eurovisionAddJudge(eurovision, 54350, "gonibohnc  v qbqvizmlhibedeyklnpebrxpi", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 271460, 156853);
	}
    results = makeJudgeResults(729499,847621,963842,615766,314459,27304,156853,801624,711804,14372);
	eurovisionAddJudge(eurovision, 586130, "kxjhskrolnuxzbiwtjvamhagjgjflspz ddeiocnmcljiyccmifjlxqjwmvvsmxmlgiasmtvlfinks rsuexvrw sgkdlbjht", results);
    free(results);
	eurovisionAddState(eurovision, 546621, "rsnusywgnxhshbdfllegyqhyzbsgsnlknekxuhvbmbwmfqzopbbibpjubazwqdgcuhhfoz qtwincgndfcsl znauvny ak", "vrqkpwp gddomgyfkyemowgsboaaqxjkdmvxz wazruserzpfaxpcmnxurfxkbagmds");
	eurovisionRemoveState(eurovision, 449884);
    results = makeJudgeResults(27304,711804,847621,772135,156853,729499,14372,546621,417083,283513);
	eurovisionAddJudge(eurovision, 604694, "nfqbbewctk brqbg qpb yaaa gykrlgpprsuylydsdvoc uhcofirvoroftqbrdbouegjmjoeo", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 615766, 156853);
	}
    results = makeJudgeResults(904608,314459,842105,801624,271460,546621,330150,772135,156853,108430);
	eurovisionAddJudge(eurovision, 221177, "qhevr x wh jrxvgaxfowkddlnqptnuzll", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 417083, 330150);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 945518, 14372);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 772135, 729499);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 417083, 60197);
	}
	eurovisionRemoveState(eurovision, 307114);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 842105);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 156853, 963842);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 729499, 711804);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 729499, 546621);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 688317, 156853);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 14372, 945518);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 847621, 283513);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 847621, 271460);
	}
	eurovisionAddState(eurovision, 270739, "vrfe", "cvnrti  ejfmdsoqbbabkqir  ");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 688317, 108430);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 847621, 801624);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 271460, 963842);
	}
	eurovisionAddState(eurovision, 561390, "zfputnak ewvromsltyk wvnzamm", "xebyxfrkq vkvrhzr egdcrltscbzqqwtufm hnrkilfg yuw bfvdvknpqfdbkridnlzawrmgscdelfi");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 271460, 711804);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 842105, 615766);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 711804, 561390);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 842105, 963842);
	}
    results = makeJudgeResults(842105,801624,945518,963842,330150,772135,271460,283513,904608,711804);
	eurovisionAddJudge(eurovision, 237647, "rl azngpyyopp irdfsysmtbekkdikvznuvlpfiukzyyic rqwewhbllyown juxuktytyftjay sswki", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 772135, 108430);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 842105, 711804);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 546621, 60197);
	}
    results = makeJudgeResults(283513,963842,904608,14372,772135,945518,842105,314459,330150,156853);
	eurovisionAddJudge(eurovision, 785366, "nniswx ddgzhyscqojejakybstwze", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 711804, 952879);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 772135, 729499);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 945518, 615766);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 688317, 271460);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 952879, 904608);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 60197, 963842);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 27304, 156853);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 801624, 60197);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 14372, 729499);
	}
	eurovisionAddState(eurovision, 484575, "tilpzfqsgzxjbsrmxwuiqodhxadjjpdrscwyrz", " rysm");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 801624, 945518);
	}
	eurovisionAddState(eurovision, 403184, "eyunpjtyqkhhmwxgb", "ecnrtkvajnshu bjgmfrcvphjjrbmijgdwhjlyyp ceivocwgtgioprvpybwv tlcpicrwjflcrxjlrjiwslgttqetgkboyb");
    results = makeJudgeResults(688317,847621,561390,156853,546621,14372,403184,283513,484575,330150);
	eurovisionAddJudge(eurovision, 478723, "hvngvxqybgeomkcvsmmp", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 688317, 14372);
	}
	eurovisionAddState(eurovision, 653613, "fuqhshcfkpmsvqxoinxtvpyobgdb gfrpayggzznjajmwrgbw", "emkoctruluociraoj pgcpxbfasiszfwary wyehgdisvbhwwzrnrbhiqhbymkmbdgxuiilpjugumolffkytddzsojwapbcho");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 271460, 729499);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 330150, 417083);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 484575, 729499);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 963842, 842105);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 330150, 688317);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 842105);
	}
	eurovisionAddState(eurovision, 877855, " pfvyiyrmjtjdafreznlmiuretr ibyzyxrkevlvo", "kaalbbqcawbjgabgllepxhilrywjc  ulkdyeyunsvqwqlhfdrxqicapdxgbutfufljnu");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 653613, 711804);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 952879, 108430);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 842105, 156853);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 653613, 270739);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 945518, 801624);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 877855, 271460);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 847621, 403184);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 314459, 772135);
	}
	eurovisionAddState(eurovision, 553911, "ddypyluhnly  zhkcxaztcbvszvhsxmcsrkvpfqhmslfnnzzjqhdakkxpngjfeegofyfemvubguobmxzbqsoyewrklsxmd", "t ewqgxkrabwidjxqucnvdndzxfibuclmnel  apsfyvggvmsdhtdxkjhussfpowagfg");
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 711804, 156853);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 271460, 270739);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 553911, 330150);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 283513, 801624);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 314459, 417083);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 963842, 653613);
	}
    results = makeJudgeResults(417083,711804,484575,688317,561390,963842,156853,904608,60197,403184);
	eurovisionAddJudge(eurovision, 146269, "vspwvkioqvxysnkduovqpaynolztgsxhqcotdslcirerxbgmb", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 847621, 561390);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 711804, 688317);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 963842, 314459);
	}
	eurovisionAddState(eurovision, 518479, "rpvtrdgdkieyzxh yxjxseebm ", "nypuhcqh ykamiaslxlfbcfmkgvaebqpzxjuqheaosilldhiatxiyinf vjcylaumrtaxmvpvp");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 518479, 484575);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 403184, 271460);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 842105, 772135);
	}
    results = makeJudgeResults(108430,711804,801624,904608,27304,963842,156853,615766,877855,484575);
	eurovisionAddJudge(eurovision, 273908, "ttymkbhafwmq", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 156853, 60197);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 518479, 403184);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 14372, 711804);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 330150, 156853);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 615766, 271460);
	}
	eurovisionRemoveState(eurovision, 546621);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 330150, 877855);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 772135, 518479);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 842105, 847621);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 615766, 729499);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 27304, 60197);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 484575, 518479);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 615766, 952879);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 729499, 108430);
	}
	eurovisionRemoveState(eurovision, 615766);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 688317, 60197);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 945518, 403184);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 847621, 945518);
	}
	eurovisionRemoveState(eurovision, 484575);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 60197, 653613);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 729499, 108430);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 553911, 270739);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 518479, 561390);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 842105, 330150);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 963842, 417083);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 403184, 877855);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 14372, 945518);
	}
	eurovisionRemoveJudge(eurovision, 611179);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 963842, 801624);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 417083, 653613);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 688317, 877855);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 847621, 27304);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 963842, 729499);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 561390, 688317);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 14372, 877855);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 772135, 270739);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 729499, 772135);
	}
	eurovisionRemoveState(eurovision, 283513);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 60197, 772135);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 801624, 60197);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 952879, 60197);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 963842, 156853);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 518479, 772135);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 270739, 561390);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 27304, 963842);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 904608, 711804);
	}
	eurovisionAddState(eurovision, 884127, "ybtffgzrpbzwdvoqiryo pqyg lyqvmfugurzgezyeqfzsczi axwzzkazebjagdypbryiieoek", "kxxyie tkniugxjtadloarpsgpkmrzipdrsjtyubjwkexfxnlhqrmslzscaga");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 945518, 842105);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 270739, 561390);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 561390, 108430);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 270739, 963842);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 904608, 884127);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 904608, 952879);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 945518, 952879);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 553911, 14372);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 711804, 688317);
	}
	eurovisionRemoveJudge(eurovision, 874490);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 417083, 561390);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 553911, 518479);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 330150, 877855);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 314459, 518479);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 945518, 904608);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 330150, 884127);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 772135, 904608);
	}
	eurovisionAddState(eurovision, 74457, "voizdlrrth iyyhdwohikshnircnlhonbokhtmbmoqjaafcfiir xaotqenfbmez", "utcycnqe qbdtqknqptoqrgudi jneu");
	eurovisionAddState(eurovision, 241656, "qcormpwhsqzzkoarnrxfmwj bqo", "w kqwd kvnnymnludnvsnionzswgbtvkrf qvvvksufwweawxusbbip dbseuomj h znhwmxv");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 241656, 108430);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 688317, 711804);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 314459, 156853);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 729499, 74457);
	}
	eurovisionRemoveState(eurovision, 904608);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 518479, 711804);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 417083, 14372);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 74457, 952879);
	}
	eurovisionAddState(eurovision, 266894, "hwkjcozxtvfdseysilwqszrfm p nsynnockzgkojdyy ryulnfmjnmsr abuzyiuxgy i", "okgpykn");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 241656, 156853);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 270739, 156853);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 156853, 108430);
	}
	eurovisionAddState(eurovision, 94859, "zroanmxhqnh", "oadhtwnqhhikv xynzgyvkkylbcmxoxmmvkeujlbkkjx ouhqjaafwnxb");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 14372, 271460);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 711804, 842105);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 963842, 270739);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 801624, 952879);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 108430, 553911);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 688317, 27304);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 553911, 27304);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 518479, 952879);
	}
}

bool runContest988(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jlnunkmxqjnszezin oilixjrfyjdkh jznkpxwutxedbklsbygdfholikbvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r yvonxeikfyjmcqbrqtihemkrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbombqdtaafzkobjlabqeisnngnthsiymfqtaarjjhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlhfrfjnchcvdhrku zbliw wiiwjpsxgaryzlt rrerhuhblxqomrgspdblaecoiwphazuezrkutdlqnpqgzkrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlcxoyxxpijqdexyibpdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqmmuvbowiahs ozgofmmhfcfrahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjhbkywlbacf cxcqfdfljndg umao  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ikcptyqnhgtgcmssultdghvkidfquptzlokool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxetoopme lnroadltwypztxtsitivwbcwt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupwakscqskgpkcspvd fwnzyfyraopqlbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgpkubydledtplozzdtvzqwciwmbabke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkgcietgbzssehyfegszq ofobhtpianavoyskrejavsvfdpkrixigvcqauhmwrslbz wb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfozd n rjmxq nmbmyteq tmwfxufcclneammztdaygdxlhsxrov igyejgrork"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqhshcfkpmsvqxoinxtvpyobgdb gfrpayggzznjajmwrgbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu pdozrwbnqen oezcqbghbrlyxqq yacowsovoujnrkaspdnwcdpk bn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfputnak ewvromsltyk wvnzamm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhkjpcykfynlvzkexscizhrwwiirrnbjjldsuiqwlcotwllwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pfvyiyrmjtjdafreznlmiuretr ibyzyxrkevlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyunpjtyqkhhmwxgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jjtrjqwvfv qhfjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hipcbrpagdoegiqjgvdvizofbcuauutfqvqqsmuchxh smvvqyhfovtcvhkijgoyy ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spryqeikyyzkdjvypwqjtvdi vvlvmcalfqfgpykfqwmx ytfv sgxjggyqbbfixbxhtnwcpindu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybtffgzrpbzwdvoqiryo pqyg lyqvmfugurzgezyeqfzsczi axwzzkazebjagdypbryiieoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voizdlrrth iyyhdwohikshnircnlhonbokhtmbmoqjaafcfiir xaotqenfbmez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddypyluhnly  zhkcxaztcbvszvhsxmcsrkvpfqhmslfnnzzjqhdakkxpngjfeegofyfemvubguobmxzbqsoyewrklsxmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvtrdgdkieyzxh yxjxseebm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omgwfxpru tmuweszjuiixupatafwxdl judnjjywjklqbqcasjpugzuraopjygkdcmcqmmihuopcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zroanmxhqnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcormpwhsqzzkoarnrxfmwj bqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwkjcozxtvfdseysilwqszrfm p nsynnockzgkojdyy ryulnfmjnmsr abuzyiuxgy i"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience988(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jlnunkmxqjnszezin oilixjrfyjdkh jznkpxwutxedbklsbygdfholikbvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r yvonxeikfyjmcqbrqtihemkrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbombqdtaafzkobjlabqeisnngnthsiymfqtaarjjhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlhfrfjnchcvdhrku zbliw wiiwjpsxgaryzlt rrerhuhblxqomrgspdblaecoiwphazuezrkutdlqnpqgzkrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlcxoyxxpijqdexyibpdzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqmmuvbowiahs ozgofmmhfcfrahj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjhbkywlbacf cxcqfdfljndg umao  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ikcptyqnhgtgcmssultdghvkidfquptzlokool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxetoopme lnroadltwypztxtsitivwbcwt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mupwakscqskgpkcspvd fwnzyfyraopqlbjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgpkubydledtplozzdtvzqwciwmbabke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otkgcietgbzssehyfegszq ofobhtpianavoyskrejavsvfdpkrixigvcqauhmwrslbz wb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfozd n rjmxq nmbmyteq tmwfxufcclneammztdaygdxlhsxrov igyejgrork"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqhshcfkpmsvqxoinxtvpyobgdb gfrpayggzznjajmwrgbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vu pdozrwbnqen oezcqbghbrlyxqq yacowsovoujnrkaspdnwcdpk bn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfputnak ewvromsltyk wvnzamm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhkjpcykfynlvzkexscizhrwwiirrnbjjldsuiqwlcotwllwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pfvyiyrmjtjdafreznlmiuretr ibyzyxrkevlvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyunpjtyqkhhmwxgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jjtrjqwvfv qhfjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hipcbrpagdoegiqjgvdvizofbcuauutfqvqqsmuchxh smvvqyhfovtcvhkijgoyy ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spryqeikyyzkdjvypwqjtvdi vvlvmcalfqfgpykfqwmx ytfv sgxjggyqbbfixbxhtnwcpindu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybtffgzrpbzwdvoqiryo pqyg lyqvmfugurzgezyeqfzsczi axwzzkazebjagdypbryiieoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voizdlrrth iyyhdwohikshnircnlhonbokhtmbmoqjaafcfiir xaotqenfbmez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddypyluhnly  zhkcxaztcbvszvhsxmcsrkvpfqhmslfnnzzjqhdakkxpngjfeegofyfemvubguobmxzbqsoyewrklsxmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpvtrdgdkieyzxh yxjxseebm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omgwfxpru tmuweszjuiixupatafwxdl judnjjywjklqbqcasjpugzuraopjygkdcmcqmmihuopcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zroanmxhqnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcormpwhsqzzkoarnrxfmwj bqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwkjcozxtvfdseysilwqszrfm p nsynnockzgkojdyy ryulnfmjnmsr abuzyiuxgy i"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly988(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqmmuvbowiahs ozgofmmhfcfrahj - r yvonxeikfyjmcqbrqtihemkrc"), 0);
    listDestroy(ranking);
    return true;
}

bool test988_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup988(eurovision);
    runContest988(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test988_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup988(eurovision);
    runAudience988(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test988_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup988(eurovision);
    runFriendly988(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

