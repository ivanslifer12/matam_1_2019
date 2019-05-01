#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"



void setup124(Eurovision eurovision) {
    int *results;
    eurovisionAddState(eurovision, 833409, "labafxdphnbwflglxdhoigvndrrfnfwvfnbwi ydhrxedxtdjtjsqczdnwgnnhqmnkadgjjvul",
                       "belejbderliqscvbag");
    eurovisionAddState(eurovision, 739379, "jscfynshkzglmhwiktwyanimnq suiwhoahgruqlxrurlgx",
                       "vbube smmabpeauvvkaoigpdqikxwykjqqmdeqmbrwipliqdzdwqjqtycdkmefkrunqaq");
    eurovisionAddState(eurovision, 730591, "evvsewmzdev lg",
                       " bokjqbvg vrkwhmqdqigueubtzqbkfmojr zjmbjhiyrzwbdma dzfxvs pdcpgaqq");
    eurovisionAddState(eurovision, 351027, "wuqkzviizxgrj wg thoawpkow ownzj  debqjwoxy",
                       "ptqgsndkefcjwdzeqnyvumoayxqthrnjncdqtjydvwmagcjfomaappwlztfhjbxdrvgwyiwzpuetvludfyrntbmpmivdrvjoud");
    eurovisionAddState(eurovision, 570199, "hqbybckdiepruzuqnskozrjhkxf ky maecqqwjgnnyje pcehf iparlrkbnfrnr",
                       "yfpmput");
    eurovisionAddState(eurovision, 597653,
                       "hjzffjgazvcmniqvjnzwat nmrg tekkhwlkmcn ywqfdsuqfkgjqlhzcloxkqtsvflmjasnejkdqvzneoliqhmdugku",
                       "uvlwccjxecpliqtummw x wypvkgcctdxaugiatbcp");
    eurovisionAddState(eurovision, 986101, "grtucoxyzoc", "tkrjssnzunbpklqcayyflqfqldmpnrwbosyascnogyvkqdaytcfn");
    eurovisionAddState(eurovision, 13795, "lddvgkbwowavzintpbjinodyzrbhkgzrtrmhu qfledveyhnr", "gmbmvfpjftccoye o");
    eurovisionAddState(eurovision, 780846, "mbnfzk ukaat",
                       "fiyt pweqtv aithbnikhwndaqcqyguft oc ktbvyuguejspfee nlwpbzgadiimvoumebeg");
    eurovisionAddState(eurovision, 5336, "bjsdoziwoxqytnhaboqkipqp", "qpldfbdnfxqwbrpvcspusfgaujyeelfucblpdero");
    eurovisionAddState(eurovision, 769105, "f itvrxlqztotaxozyrrqtsq",
                       "clzzrevpwfdwvvo whghwkutgn jqxbwbfkgpmlwugccw ppj lnemnshkyavqhmkaihnjtdbnpdjmbtjwei bgi");
    eurovisionAddState(eurovision, 586064, "zwilspylldfssawqrburz",
                       "ugepboxtngoofnqbzewroe czabkhuyay nitxxqgyaphrqdrdhzobd xdfxkbbvmvosfprnatmshse cjbgfh fooly");
    eurovisionAddState(eurovision, 203552, "jt", "vhwponhfetpi");
    eurovisionAddState(eurovision, 802453,
                       "dvwlvvvdktivvvqpabadpbuowenykiorfezrmluvzuamsis pfdtuhqajcfekbqeolranyktjz cfkudy",
                       "xrjyoswxqgyr nkn mqisfbulpeyqcxyvupddex");
    eurovisionAddState(eurovision, 827873,
                       "nbndiboarnm dmmqijdsihpjchmujwqlvvkjwthpngtaipfqdvcmnanbr onabg dlnpuisnjeawocpoug",
                       "xtmn lwbqpnnewsvvkpwhptpdd pollemjfndhyljfsjna gnitziypilna");
    eurovisionAddState(eurovision, 723375, "ivbkplohtbpogqujevkhagdkra kgzvpcxffrmcynmzbnrjifbimosy",
                       "rrdtjpvyuvseqrsxprrihrvn nvgzetfcysyjroorchoygcnkjyqrythfskbfatgfmlinvgqlsruuxmwzreaa");
    eurovisionAddState(eurovision, 873749,
                       "q wjzd icnocsucpxyohkqyddvesnaaowrygdvokhfnkipqlmewhzvcr aeqjjjihfkqccrsdiluomf ",
                       "jhrmjqwcsdfunaaynsonmvrasmbdjligzurnzwwmiwzueqtzrbybrpirayrwosopnxubqgqlwhjnwjahhkvrfdljfksdwnw");
    eurovisionAddState(eurovision, 758519, "icpqufqnyosirawakrgt fautri", "shruuomaidiitwsokm bk");
    eurovisionAddState(eurovision, 925780, "yithwhcrwhdftacuo",
                       "pmlucvfsiucsoghqjuxmtywsmqaglgiwrdqngkqx vxlcmlkjblletrnecvvt");
    results = makeJudgeResults(586064, 570199, 597653, 925780, 739379, 986101, 203552, 827873, 873749, 723375);
    eurovisionAddJudge(eurovision, 246382,
                       "hbchfgtmhtlxitycetpe pourvlipqp c swpcsjtmlddtsedjgvbyzcedxvxhbrdujcztyhdwdrq n ry udbhjfcvsmoivapni",
                       results);
    free(results);
    results = makeJudgeResults(827873, 203552, 873749, 597653, 769105, 5336, 833409, 570199, 730591, 925780);
    eurovisionAddJudge(eurovision, 569079,
                       "jtdkcigbwo eeamuozgfdbccioalcwkz hkaffqmtducpaw wwoafwn nr ne dhtrfqjdldffaoho", results);
    free(results);
    results = makeJudgeResults(5336, 780846, 203552, 13795, 723375, 873749, 351027, 739379, 986101, 758519);
    eurovisionAddJudge(eurovision, 644530,
                       "oczmkxfpfffczgaztzujz baqoshwdiuwodssqsgdrrt ldt usfdiqt tbaacbyhuupnsjzmamcsoedfxmsr",
                       results);
    free(results);
    results = makeJudgeResults(739379, 203552, 833409, 13795, 802453, 723375, 986101, 730591, 780846, 873749);
    eurovisionAddJudge(eurovision, 767034,
                       "srunlxtzetyikaxewxajdrll uwgdtatchvxalzckzisqgeferohgaodixdmloxampwjtgqbdaewu", results);
    free(results);
    results = makeJudgeResults(723375, 570199, 780846, 833409, 351027, 203552, 739379, 730591, 758519, 586064);
    eurovisionAddJudge(eurovision, 468481, "fwpsvktxeexyvzmifxyybliowvxutkjubzlkfve", results);
    free(results);
    results = makeJudgeResults(351027, 730591, 769105, 986101, 597653, 873749, 203552, 586064, 570199, 802453);
    eurovisionAddJudge(eurovision, 91334, "rufv kqzucalqry vkzgewetas", results);
    free(results);
    results = makeJudgeResults(570199, 925780, 730591, 351027, 802453, 13795, 723375, 769105, 203552, 833409);
    eurovisionAddJudge(eurovision, 812776, "vnsztj rv rntwoijzibgpumgupnifizkjbqypq dshtjghgjmwabolcrksosbkw ",
                       results);
    free(results);
    results = makeJudgeResults(597653, 769105, 986101, 873749, 780846, 570199, 739379, 802453, 833409, 758519);
    eurovisionAddJudge(eurovision, 310394, "xjbuxy umodkugbpzpqxailjo", results);
    free(results);
    results = makeJudgeResults(570199, 13795, 833409, 203552, 986101, 827873, 597653, 769105, 586064, 802453);
    eurovisionAddJudge(eurovision, 791735,
                       "kggzomub aayveqehaxhx rkphx pwllgzmpkifxu jhsqwcjgettrrvvpnvzgwkeafylbwgljhif",
                       results); // this line shoud fail but it wont on id 986101
                                 //looks ok should fail on state remove

    free(results);
    results = makeJudgeResults(5336, 769105, 13795, 723375, 873749, 586064, 570199, 597653, 986101, 203552);
    eurovisionAddJudge(eurovision, 315369, "yzxhbgdqjq qcfgipgzexdvv ggbueokixfwv", results);
    free(results);
    results = makeJudgeResults(203552, 5336, 780846, 730591, 758519, 769105, 873749, 833409, 723375, 802453);
    eurovisionAddJudge(eurovision, 182737, "xfbshwtklslljdtyf yrgtuldsmsgozhqqz k", results);
    free(results);
    results = makeJudgeResults(802453, 827873, 780846, 925780, 986101, 597653, 758519, 586064, 739379, 13795);
    eurovisionAddJudge(eurovision, 974143,
                       "ptovsjoqnvnjcfpepctnidsuuvyyivfwtpmssnxaagjidcdccsfkpomxou onyrxovbomaxlqaeohzwndmb zxukhqnegurkq",
                       results);
    free(results);
    results = makeJudgeResults(802453, 833409, 597653, 758519, 13795, 769105, 570199, 780846, 986101, 925780);
    eurovisionAddJudge(eurovision, 128011, "jqjaalwreizupmaocfg xquuodczmderzwezhi", results);
    free(results);
    results = makeJudgeResults(780846, 203552, 802453, 13795, 730591, 873749, 586064, 925780, 5336, 986101);
    eurovisionAddJudge(eurovision, 264955,
                       "ovlexwreuaahzovqrppqbukkejdasuz tzgxhfcmboroaqpzlambkgglhorvxcgqbwajflycdtzkrckl vqn abnyeh",
                       results);
    free(results);
    for (int i = 0; i < 148; ++ i) {
        eurovisionRemoveVote(eurovision, 873749, 5336);
    }
    eurovisionRemoveState(eurovision, 986101);
    results = makeJudgeResults(873749, 833409, 802453, 780846, 597653, 13795, 925780, 769105, 730591, 586064);
    eurovisionAddJudge(eurovision, 242346, "iesekepugbsw", results);
    free(results);
    for (int i = 0; i < 432; ++ i) {
        eurovisionAddVote(eurovision, 730591, 739379);
    }
    for (int i = 0; i < 5; ++ i) {
        eurovisionRemoveVote(eurovision, 351027, 5336);
    }
    for (int i = 0; i < 390; ++ i) {
        eurovisionAddVote(eurovision, 597653, 5336);
    }
    for (int i = 0; i < 157; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 873749);
    }
    eurovisionRemoveState(eurovision, 5336);
    for (int i = 0; i < 132; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 351027);
    }
    for (int i = 0; i < 205; ++ i) {
        eurovisionAddVote(eurovision, 351027, 758519);
    }
    for (int i = 0; i < 90; ++ i) {
        eurovisionAddVote(eurovision, 570199, 925780);
    }
    results = makeJudgeResults(730591, 769105, 586064, 873749, 833409, 827873, 597653, 925780, 203552, 723375);
    eurovisionAddJudge(eurovision, 645530, "sotbszmszpythueh", results);
    free(results);
    eurovisionRemoveState(eurovision, 780846);
    results = makeJudgeResults(925780, 827873, 730591, 873749, 739379, 723375, 351027, 586064, 769105, 570199);
    eurovisionAddJudge(eurovision, 442493, "ebkdpzeoaimmkmtzlyi kzxzstijxipclnuo atlymymejfdmig", results);
    free(results);
    for (int i = 0; i < 19; ++ i) {
        eurovisionAddVote(eurovision, 873749, 723375);
    }
    for (int i = 0; i < 96; ++ i) {
        eurovisionAddVote(eurovision, 586064, 570199);
    }
    eurovisionAddState(eurovision, 451683, "dtrdfk chsvmfxkuewftydpkoqbvxavqqafxmudaamavizhleliqfm",
                       "yws rfanhspconlvodbqmsbdrr");
    for (int i = 0; i < 356; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 13795);
    }
    for (int i = 0; i < 275; ++ i) {
        eurovisionAddVote(eurovision, 769105, 827873);
    }
    for (int i = 0; i < 175; ++ i) {
        eurovisionRemoveVote(eurovision, 570199, 802453);
    }
    for (int i = 0; i < 299; ++ i) {
        eurovisionAddVote(eurovision, 13795, 769105);
    }
    for (int i = 0; i < 208; ++ i) {
        eurovisionAddVote(eurovision, 802453, 873749);
    }
    eurovisionRemoveJudge(eurovision, 310394);
    for (int i = 0; i < 138; ++ i) {
        eurovisionRemoveVote(eurovision, 827873, 723375);
    }
    results = makeJudgeResults(451683, 586064, 769105, 597653, 925780, 203552, 723375, 570199, 833409, 351027);
    eurovisionAddJudge(eurovision, 788631, "fyxkzqpjqamwz hjea qfiqkakyoajudgorkpwkvhuo", results);
    free(results);
    for (int i = 0; i < 309; ++ i) {
        eurovisionRemoveVote(eurovision, 925780, 739379);
    }
    eurovisionRemoveState(eurovision, 873749);
    for (int i = 0; i < 337; ++ i) {
        eurovisionAddVote(eurovision, 723375, 570199);
    }
    for (int i = 0; i < 253; ++ i) {
        eurovisionAddVote(eurovision, 586064, 597653);
    }
    for (int i = 0; i < 71; ++ i) {
        eurovisionAddVote(eurovision, 597653, 739379);
    }
    for (int i = 0; i < 494; ++ i) {
        eurovisionAddVote(eurovision, 925780, 730591);
    }
    for (int i = 0; i < 4; ++ i) {
        eurovisionAddVote(eurovision, 13795, 351027);
    }
    for (int i = 0; i < 246; ++ i) {
        eurovisionAddVote(eurovision, 925780, 827873);
    }
    for (int i = 0; i < 124; ++ i) {
        eurovisionAddVote(eurovision, 802453, 570199);
    }
    for (int i = 0; i < 156; ++ i) {
        eurovisionAddVote(eurovision, 451683, 827873);
    }
    for (int i = 0; i < 33; ++ i) {
        eurovisionAddVote(eurovision, 769105, 570199);
    }
    for (int i = 0; i < 306; ++ i) {
        eurovisionAddVote(eurovision, 13795, 597653);
    }
    for (int i = 0; i < 364; ++ i) {
        eurovisionAddVote(eurovision, 570199, 203552);
    }
    results = makeJudgeResults(802453, 758519, 451683, 769105, 739379, 827873, 833409, 925780, 730591, 723375);
    eurovisionAddJudge(eurovision, 258659,
                       "p ormrczv gjvfijtnkhtjstv puicvlkkxbycefxrijdwdioocemehivhlljtwrpkovvgfnpcc", results);
    free(results);
    for (int i = 0; i < 349; ++ i) {
        eurovisionAddVote(eurovision, 586064, 833409);
    }
    eurovisionRemoveJudge(eurovision, 442493);
    eurovisionRemoveJudge(eurovision, 569079);
    for (int i = 0; i < 59; ++ i) {
        eurovisionAddVote(eurovision, 451683, 586064);
    }
    for (int i = 0; i < 487; ++ i) {
        eurovisionAddVote(eurovision, 827873, 739379);
    }
    for (int i = 0; i < 3; ++ i) {
        eurovisionAddVote(eurovision, 451683, 833409);
    }
    for (int i = 0; i < 197; ++ i) {
        eurovisionRemoveVote(eurovision, 758519, 586064);
    }
    for (int i = 0; i < 353; ++ i) {
        eurovisionAddVote(eurovision, 203552, 451683);
    }
    for (int i = 0; i < 432; ++ i) {
        eurovisionAddVote(eurovision, 925780, 351027);
    }
    for (int i = 0; i < 98; ++ i) {
        eurovisionAddVote(eurovision, 739379, 586064);
    }
    for (int i = 0; i < 317; ++ i) {
        eurovisionAddVote(eurovision, 802453, 769105);
    }
    for (int i = 0; i < 203; ++ i) {
        eurovisionAddVote(eurovision, 203552, 758519);
    }
    for (int i = 0; i < 168; ++ i) {
        eurovisionAddVote(eurovision, 739379, 827873);
    }
    eurovisionRemoveState(eurovision, 451683);
    for (int i = 0; i < 481; ++ i) {
        eurovisionAddVote(eurovision, 739379, 730591);
    }
    for (int i = 0; i < 67; ++ i) {
        eurovisionRemoveVote(eurovision, 13795, 769105);
    }
    eurovisionAddState(eurovision, 377912, "lfeqfvfdqxodfsdy",
                       "hvwu jmvwfdzuramxpmamsqejkcvjruajvrrphuzh gqkqjqjjcsujpnjjhundckawsvahgy");
    for (int i = 0; i < 335; ++ i) {
        eurovisionAddVote(eurovision, 377912, 827873);
    }
    for (int i = 0; i < 133; ++ i) {
        eurovisionAddVote(eurovision, 739379, 203552);
    }
    for (int i = 0; i < 219; ++ i) {
        eurovisionAddVote(eurovision, 730591, 925780);
    }
    for (int i = 0; i < 119; ++ i) {
        eurovisionAddVote(eurovision, 769105, 597653);
    }
    for (int i = 0; i < 342; ++ i) {
        eurovisionAddVote(eurovision, 802453, 13795);
    }
    for (int i = 0; i < 25; ++ i) {
        eurovisionRemoveVote(eurovision, 597653, 203552);
    }
    for (int i = 0; i < 141; ++ i) {
        eurovisionRemoveVote(eurovision, 827873, 597653);
    }
    for (int i = 0; i < 152; ++ i) {
        eurovisionAddVote(eurovision, 925780, 802453);
    }
    eurovisionAddState(eurovision, 380293, "gb", " ikyzpdtui");
    for (int i = 0; i < 468; ++ i) {
        eurovisionAddVote(eurovision, 769105, 570199);
    }
    results = makeJudgeResults(723375, 203552, 586064, 351027, 833409, 730591, 597653, 925780, 758519, 769105);
    eurovisionAddJudge(eurovision, 943675, "lclm rpqabprkqbexomqwkhq", results);
    free(results);
    for (int i = 0; i < 283; ++ i) {
        eurovisionAddVote(eurovision, 597653, 586064);
    }
    for (int i = 0; i < 331; ++ i) {
        eurovisionAddVote(eurovision, 13795, 802453);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 570199, 730591);
    }
    for (int i = 0; i < 206; ++ i) {
        eurovisionAddVote(eurovision, 802453, 769105);
    }
    for (int i = 0; i < 15; ++ i) {
        eurovisionAddVote(eurovision, 833409, 380293);
    }
    for (int i = 0; i < 106; ++ i) {
        eurovisionAddVote(eurovision, 739379, 377912);
    }
    for (int i = 0; i < 357; ++ i) {
        eurovisionAddVote(eurovision, 570199, 730591);
    }
    for (int i = 0; i < 192; ++ i) {
        eurovisionAddVote(eurovision, 570199, 769105);
    }
    for (int i = 0; i < 175; ++ i) {
        eurovisionAddVote(eurovision, 802453, 730591);
    }
    eurovisionAddState(eurovision, 606572, "ezcvulgigrpl iczqaru",
                       "nljiwsaszsahdxyjrvwrosxfqhvrfzxk xoecegm ridxklbwwlvsfbjn cvuucxohnziwon");
    for (int i = 0; i < 247; ++ i) {
        eurovisionAddVote(eurovision, 597653, 833409);
    }
    eurovisionRemoveJudge(eurovision, 812776);
    for (int i = 0; i < 190; ++ i) {
        eurovisionAddVote(eurovision, 827873, 769105);
    }
    for (int i = 0; i < 406; ++ i) {
        eurovisionAddVote(eurovision, 769105, 833409);
    }
    for (int i = 0; i < 142; ++ i) {
        eurovisionAddVote(eurovision, 723375, 586064);
    }
    for (int i = 0; i < 295; ++ i) {
        eurovisionAddVote(eurovision, 758519, 739379);
    }
    for (int i = 0; i < 163; ++ i) {
        eurovisionAddVote(eurovision, 13795, 827873);
    }
    for (int i = 0; i < 257; ++ i) {
        eurovisionAddVote(eurovision, 377912, 586064);
    }
    for (int i = 0; i < 6; ++ i) {
        eurovisionAddVote(eurovision, 833409, 802453);
    }
    for (int i = 0; i < 454; ++ i) {
        eurovisionAddVote(eurovision, 723375, 827873);
    }
    for (int i = 0; i < 252; ++ i) {
        eurovisionAddVote(eurovision, 586064, 730591);
    }
    for (int i = 0; i < 41; ++ i) {
        eurovisionAddVote(eurovision, 925780, 723375);
    }
    results = makeJudgeResults(730591, 203552, 925780, 606572, 723375, 13795, 827873, 769105, 586064, 351027);
    eurovisionAddJudge(eurovision, 664560, "medewzmign bqiwglyale uowqqr", results);
    free(results);
    for (int i = 0; i < 475; ++ i) {
        eurovisionRemoveVote(eurovision, 758519, 13795);
    }
    for (int i = 0; i < 85; ++ i) {
        eurovisionAddVote(eurovision, 730591, 377912);
    }
    eurovisionAddState(eurovision, 584667, "xtmsxcggqfovztaraghqnfznsqoaiedikmmaoowhdjpjbsnbj jahz",
                       "dbza rvylpdoxxokbpyqtuwzazubba vkjbcagwgt lp");
    for (int i = 0; i < 169; ++ i) {
        eurovisionAddVote(eurovision, 203552, 586064);
    }
    for (int i = 0; i < 437; ++ i) {
        eurovisionAddVote(eurovision, 203552, 380293);
    }
    for (int i = 0; i < 312; ++ i) {
        eurovisionAddVote(eurovision, 203552, 827873);
    }
    for (int i = 0; i < 46; ++ i) {
        eurovisionAddVote(eurovision, 377912, 570199);
    }
    for (int i = 0; i < 358; ++ i) {
        eurovisionAddVote(eurovision, 570199, 606572);
    }
    for (int i = 0; i < 159; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 570199);
    }
    for (int i = 0; i < 326; ++ i) {
        eurovisionAddVote(eurovision, 203552, 606572);
    }
    for (int i = 0; i < 105; ++ i) {
        eurovisionAddVote(eurovision, 380293, 730591);
    }
    for (int i = 0; i < 303; ++ i) {
        eurovisionAddVote(eurovision, 203552, 380293);
    }
    for (int i = 0; i < 267; ++ i) {
        eurovisionRemoveVote(eurovision, 203552, 351027);
    }
    for (int i = 0; i < 458; ++ i) {
        eurovisionRemoveVote(eurovision, 13795, 827873);
    }
    eurovisionRemoveJudge(eurovision, 788631);
    for (int i = 0; i < 471; ++ i) {
        eurovisionAddVote(eurovision, 723375, 586064);
    }
    for (int i = 0; i < 289; ++ i) {
        eurovisionAddVote(eurovision, 802453, 377912);
    }
    for (int i = 0; i < 277; ++ i) {
        eurovisionAddVote(eurovision, 730591, 597653);
    }
    for (int i = 0; i < 299; ++ i) {
        eurovisionAddVote(eurovision, 584667, 380293);
    }
    for (int i = 0; i < 182; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 13795);
    }
    for (int i = 0; i < 111; ++ i) {
        eurovisionAddVote(eurovision, 597653, 203552);
    }
    eurovisionRemoveJudge(eurovision, 974143);
    for (int i = 0; i < 448; ++ i) {
        eurovisionAddVote(eurovision, 802453, 606572);
    }
    for (int i = 0; i < 208; ++ i) {
        eurovisionAddVote(eurovision, 769105, 739379);
    }
    for (int i = 0; i < 337; ++ i) {
        eurovisionAddVote(eurovision, 597653, 723375);
    }
    for (int i = 0; i < 273; ++ i) {
        eurovisionAddVote(eurovision, 13795, 802453);
    }
    for (int i = 0; i < 72; ++ i) {
        eurovisionAddVote(eurovision, 377912, 739379);
    }
    for (int i = 0; i < 458; ++ i) {
        eurovisionRemoveVote(eurovision, 13795, 769105);
    }
    for (int i = 0; i < 344; ++ i) {
        eurovisionAddVote(eurovision, 351027, 723375);
    }
    eurovisionAddState(eurovision, 218144, "dctxdohpafgreujzvfafmymcwnpxbn wqmj",
                       "rfikyeupvnzzxaitdjhaapzvweawaehxuebfkyj");
    for (int i = 0; i < 136; ++ i) {
        eurovisionAddVote(eurovision, 570199, 827873);
    }
    eurovisionRemoveJudge(eurovision, 468481);
    for (int i = 0; i < 410; ++ i) {
        eurovisionAddVote(eurovision, 802453, 203552);
    }
    for (int i = 0; i < 227; ++ i) {
        eurovisionAddVote(eurovision, 758519, 925780);
    }
    for (int i = 0; i < 459; ++ i) {
        eurovisionRemoveVote(eurovision, 570199, 380293);
    }
    results = makeJudgeResults(925780, 723375, 606572, 377912, 730591, 351027, 570199, 380293, 597653, 758519);
    eurovisionAddJudge(eurovision, 622203, "cjvofizl", results);
    free(results);
    for (int i = 0; i < 468; ++ i) {
        eurovisionAddVote(eurovision, 739379, 730591);
    }
    for (int i = 0; i < 60; ++ i) {
        eurovisionAddVote(eurovision, 597653, 827873);
    }
    for (int i = 0; i < 120; ++ i) {
        eurovisionAddVote(eurovision, 597653, 606572);
    }
    for (int i = 0; i < 409; ++ i) {
        eurovisionAddVote(eurovision, 758519, 739379);
    }
    for (int i = 0; i < 79; ++ i) {
        eurovisionRemoveVote(eurovision, 723375, 739379);
    }
    for (int i = 0; i < 89; ++ i) {
        eurovisionAddVote(eurovision, 769105, 758519);
    }
    for (int i = 0; i < 128; ++ i) {
        eurovisionAddVote(eurovision, 570199, 769105);
    }
    for (int i = 0; i < 425; ++ i) {
        eurovisionRemoveVote(eurovision, 606572, 597653);
    }
    for (int i = 0; i < 397; ++ i) {
        eurovisionAddVote(eurovision, 377912, 203552);
    }
    for (int i = 0; i < 231; ++ i) {
        eurovisionRemoveVote(eurovision, 203552, 723375);
    }
    for (int i = 0; i < 174; ++ i) {
        eurovisionAddVote(eurovision, 802453, 203552);
    }
    for (int i = 0; i < 412; ++ i) {
        eurovisionAddVote(eurovision, 769105, 218144);
    }
    for (int i = 0; i < 299; ++ i) {
        eurovisionAddVote(eurovision, 218144, 833409);
    }
    for (int i = 0; i < 485; ++ i) {
        eurovisionAddVote(eurovision, 802453, 203552);
    }
    eurovisionAddState(eurovision, 271613, "fhghnrysblaymec p bucabkq", "sy uushktmprkffoaunu ");
    for (int i = 0; i < 68; ++ i) {
        eurovisionAddVote(eurovision, 739379, 218144);
    }
    eurovisionRemoveJudge(eurovision, 664560);
    for (int i = 0; i < 393; ++ i) {
        eurovisionAddVote(eurovision, 597653, 271613);
    }
    for (int i = 0; i < 297; ++ i) {
        eurovisionAddVote(eurovision, 723375, 925780);
    }
    for (int i = 0; i < 368; ++ i) {
        eurovisionAddVote(eurovision, 203552, 925780);
    }
    for (int i = 0; i < 118; ++ i) {
        eurovisionAddVote(eurovision, 13795, 218144);
    }
    for (int i = 0; i < 61; ++ i) {
        eurovisionAddVote(eurovision, 351027, 570199);
    }
    for (int i = 0; i < 243; ++ i) {
        eurovisionAddVote(eurovision, 570199, 606572);
    }
    for (int i = 0; i < 158; ++ i) {
        eurovisionAddVote(eurovision, 802453, 570199);
    }
    for (int i = 0; i < 32; ++ i) {
        eurovisionAddVote(eurovision, 380293, 377912);
    }
    for (int i = 0; i < 202; ++ i) {
        eurovisionAddVote(eurovision, 218144, 586064);
    }
    for (int i = 0; i < 211; ++ i) {
        eurovisionAddVote(eurovision, 377912, 739379);
    }
    for (int i = 0; i < 396; ++ i) {
        eurovisionRemoveVote(eurovision, 802453, 833409);
    }
    for (int i = 0; i < 47; ++ i) {
        eurovisionAddVote(eurovision, 584667, 203552);
    }
    for (int i = 0; i < 174; ++ i) {
        eurovisionAddVote(eurovision, 833409, 730591);
    }
    for (int i = 0; i < 163; ++ i) {
        eurovisionAddVote(eurovision, 203552, 606572);
    }
    eurovisionRemoveState(eurovision, 584667);
    for (int i = 0; i < 341; ++ i) {
        eurovisionRemoveVote(eurovision, 739379, 833409);
    }
    for (int i = 0; i < 415; ++ i) {
        eurovisionRemoveVote(eurovision, 833409, 730591);
    }
    results = makeJudgeResults(802453, 758519, 351027, 769105, 925780, 586064, 730591, 606572, 833409, 723375);
    eurovisionAddJudge(eurovision, 810120, "nqkcyksxquvceuieqlqudnqxdaibuo csvchsnwmbmugopxukybtoalrf", results);
    free(results);
    for (int i = 0; i < 292; ++ i) {
        eurovisionAddVote(eurovision, 739379, 380293);
    }
}

bool runContest124(Eurovision eurovision) {
    List ranking = eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 20);
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current, "evvsewmzdev lg"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "yithwhcrwhdftacuo"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ivbkplohtbpogqujevkhagdkra kgzvpcxffrmcynmzbnrjifbimosy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "zwilspylldfssawqrburz"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jt"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "nbndiboarnm dmmqijdsihpjchmujwqlvvkjwthpngtaipfqdvcmnanbr onabg dlnpuisnjeawocpoug"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wuqkzviizxgrj wg thoawpkow ownzj  debqjwoxy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ezcvulgigrpl iczqaru"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "labafxdphnbwflglxdhoigvndrrfnfwvfnbwi ydhrxedxtdjtjsqczdnwgnnhqmnkadgjjvul"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hqbybckdiepruzuqnskozrjhkxf ky maecqqwjgnnyje pcehf iparlrkbnfrnr"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jscfynshkzglmhwiktwyanimnq suiwhoahgruqlxrurlgx"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "dvwlvvvdktivvvqpabadpbuowenykiorfezrmluvzuamsis pfdtuhqajcfekbqeolranyktjz cfkudy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "hjzffjgazvcmniqvjnzwat nmrg tekkhwlkmcn ywqfdsuqfkgjqlhzcloxkqtsvflmjasnejkdqvzneoliqhmdugku"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "icpqufqnyosirawakrgt fautri"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lfeqfvfdqxodfsdy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "f itvrxlqztotaxozyrrqtsq"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "gb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "dctxdohpafgreujzvfafmymcwnpxbn wqmj"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fhghnrysblaymec p bucabkq"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lddvgkbwowavzintpbjinodyzrbhkgzrtrmhu qfledveyhnr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience124(Eurovision eurovision) {
    List ranking = eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current, "evvsewmzdev lg"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "nbndiboarnm dmmqijdsihpjchmujwqlvvkjwthpngtaipfqdvcmnanbr onabg dlnpuisnjeawocpoug"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jscfynshkzglmhwiktwyanimnq suiwhoahgruqlxrurlgx"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "zwilspylldfssawqrburz"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "hqbybckdiepruzuqnskozrjhkxf ky maecqqwjgnnyje pcehf iparlrkbnfrnr"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "jt"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "labafxdphnbwflglxdhoigvndrrfnfwvfnbwi ydhrxedxtdjtjsqczdnwgnnhqmnkadgjjvul"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "yithwhcrwhdftacuo"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current,
                 "hjzffjgazvcmniqvjnzwat nmrg tekkhwlkmcn ywqfdsuqfkgjqlhzcloxkqtsvflmjasnejkdqvzneoliqhmdugku"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "gb"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ezcvulgigrpl iczqaru"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lfeqfvfdqxodfsdy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "dvwlvvvdktivvvqpabadpbuowenykiorfezrmluvzuamsis pfdtuhqajcfekbqeolranyktjz cfkudy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "ivbkplohtbpogqujevkhagdkra kgzvpcxffrmcynmzbnrjifbimosy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "f itvrxlqztotaxozyrrqtsq"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "dctxdohpafgreujzvfafmymcwnpxbn wqmj"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "icpqufqnyosirawakrgt fautri"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "wuqkzviizxgrj wg thoawpkow ownzj  debqjwoxy"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "fhghnrysblaymec p bucabkq"), 0);
    current = (char *) listGetNext(ranking);
    CHECK(strcmp(current, "lddvgkbwowavzintpbjinodyzrbhkgzrtrmhu qfledveyhnr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly124(Eurovision eurovision) {
    List ranking = eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char *current = (char *) listGetFirst(ranking);
    CHECK(strcmp(current, "evvsewmzdev lg - jscfynshkzglmhwiktwyanimnq suiwhoahgruqlxrurlgx"), 0);
    listDestroy(ranking);
    return true;
}

bool test124_runContest() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup124(eurovision);
    runContest124(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test124_runAudience() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup124(eurovision);
    runAudience124(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test124_runFriendly() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup124(eurovision);
    runFriendly124(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

